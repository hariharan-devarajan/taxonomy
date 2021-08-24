#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""

@author: Yufeng Huang

"""

import tensorflow as tf
import numpy as np

def tf_getNb(tf_R, tf_lattice, dcut):
    tf_Rd = tf.expand_dims(tf_R, 0) - tf.expand_dims(tf_R, 1)

    tf_RdShape = tf.shape(tf_Rd, out_type=tf.int64)

    tf_RdMaskPos = tf_Rd > 0.5
    tf_RdMaskNeg = tf_Rd < -0.5

    tf_Rd = tf.where(tf_RdMaskPos,
                     tf.scatter_nd(tf.where(tf_RdMaskPos), tf.boolean_mask(tf_Rd, tf_RdMaskPos) - 1, tf_RdShape),
                     tf_Rd)
    tf_Rd = tf.where(tf_RdMaskNeg,
                     tf.scatter_nd(tf.where(tf_RdMaskNeg), tf.boolean_mask(tf_Rd, tf_RdMaskNeg) + 1, tf_RdShape),
                     tf_Rd)

    tf_Rd = tf.reshape(tf.tensordot(tf_Rd, tf.transpose(tf_lattice), 1), tf_RdShape)

    tf_dcutMask = tf.reduce_sum(tf_Rd ** 2, axis=2) < tf.reshape(dcut, [1]) ** 2
    tf_Rd = tf.scatter_nd(tf.where(tf_dcutMask), tf.boolean_mask(tf_Rd, tf_dcutMask), tf_RdShape)

    tf_idxMask = tf.reduce_sum(tf_Rd ** 2, axis=2) > 0
    tf_numNb = tf.reduce_sum(tf.cast(tf_idxMask, tf.float32), axis=1)
    tf_maxNb = tf.cast(tf.reduce_max(tf_numNb), tf.int64)

    tf_idx = tf.transpose(tf.where(tf_idxMask))
    tf_iidx = tf_idx[0]
    tf_jidx = tf_idx[1]

    tfi0 = tf.constant(0, dtype=tf.int64)
    c = lambda i, x, y: i < tf.shape(x, out_type=tf.int64)[0]
    b = lambda i, x, y: [i + 1, x, tf.concat([y, tf.range(x[i])], axis=0)]

    [o1, o2, o3] = tf.while_loop(c, b,
                                 [tfi0, tf.cast(tf_numNb, tf.int64), tf.zeros([1], dtype=tf.int64)],
                                 shape_invariants=[tfi0.get_shape(), tf_numNb.get_shape(), tf.TensorShape([None])])
    tf_jidx2 = o3[1:]

    tf_idx = tf.transpose(tf.stack([tf_iidx, tf_jidx2]))

    tf_idxNb = tf.scatter_nd(tf_idx, tf_jidx + 1, [tf_RdShape[0], tf_maxNb])
    tf_RNb = tf.scatter_nd(tf_idx, tf.boolean_mask(tf_Rd, tf_idxMask), [tf_RdShape[0], tf_maxNb, 3])

    return tf_idxNb, tf_RNb, tf_maxNb, tf_RdShape[0]

def tf_getStruct(tfCoord):
    tfRi = tf.sqrt(tf.reduce_sum(tfCoord ** 2, axis=2))
    tfDc = tf.sqrt(tf.reduce_sum((tf.expand_dims(tfCoord, 2) - tf.expand_dims(tfCoord, 1)) ** 2, axis=3))
    idxRi = tf.where(tf.greater(tfRi, tf.constant(0.000000, dtype=tf.float32)))
    tfDc1 = tf.boolean_mask(tfDc, tf.greater(tfRi, tf.constant(0.000000, dtype=tf.float32)))
    tfDc2 = tf.scatter_nd(idxRi, tfDc1, tf.shape(tfDc, out_type=tf.int64))
    tfDc3 = tf.boolean_mask(tf.transpose(tfDc2, [0, 2, 1]), tf.greater(tfRi, tf.constant(0.000000, dtype=tf.float32)))
    tfDc4 = tf.scatter_nd(idxRi, tfDc3, tf.shape(tfDc, out_type=tf.int64))

    tfRi_masked = tf.boolean_mask(tfRi, tf.greater(tfRi, tf.constant(0.000000, dtype=tf.float32)))
    tfCoord_masked = tf.boolean_mask(tfCoord, tf.greater(tfRi, tf.constant(0.000000, dtype=tf.float32)))
    tfRhat1 = tfCoord_masked / tf.expand_dims(tfRi_masked, 1)
    tfRhat2 = tf.scatter_nd(idxRi, tfRhat1, tf.shape(tfCoord, out_type=tf.int64))
    return tfRhat2, tfRi, tfDc4


def tf_getCos(tf_X, tf_nBasis):
    tf_pi = tf.constant(np.pi, tf.float32)
    tf_h = tf.cast(2 / (tf_nBasis), tf.float32)

    tf_Y = tf.expand_dims(tf_X, 1) - tf.linspace(tf.constant(-1., dtype=tf.float32),
                                                 tf.constant(1., dtype=tf.float32) - tf_h, tf_nBasis)

    tf_zeroMask = tf.equal(tf_Y, 0.)
    tf_Y = tf.reshape(tf.where(tf.abs(tf_Y) < tf_h, tf_Y, tf.zeros_like(tf_Y)), [-1, tf_nBasis])
    tf_Ynot0 = tf.not_equal(tf_Y, 0.)
    tf_Y = tf.scatter_nd(tf.where(tf_Ynot0),
                         tf.cos(tf.boolean_mask(tf_Y, tf_Ynot0) / tf_h * tf_pi) / 2 + 0.5,
                         tf.shape(tf_Y, out_type=tf.int64))
    tf_Y = tf.where(tf_zeroMask, tf.ones_like(tf_Y), tf_Y)

    tf_Y = tf.where(tf_X > 1., tf.zeros_like(tf_Y), tf_Y)
    tf_Y = tf.where(tf_X < (-1. - tf_h), tf.zeros_like(tf_Y), tf_Y)
    return tf_Y


def tf_getdCos(tf_X, tf_nBasis):
    tf_pi = tf.constant(np.pi, tf.float32)

    tf_h = tf.cast(2 / (tf_nBasis), tf.float32)
    tf_Y = tf.expand_dims(tf_X, 1) - tf.linspace(tf.constant(-1., dtype=tf.float32),
                                                 tf.constant(1., dtype=tf.float32) - tf_h, tf_nBasis)

    tf_Y = tf.reshape(tf.where(tf.abs(tf_Y) < tf_h, tf_Y, tf.zeros_like(tf_Y)), [-1, tf_nBasis])
    tf_Ynot0 = tf.not_equal(tf_Y, 0.)
    tf_Y = tf.scatter_nd(tf.where(tf_Ynot0),
                         -tf.sin(tf.boolean_mask(tf_Y, tf_Ynot0) / tf_h * tf_pi) * 0.5 * tf_pi / tf_h,
                         tf.shape(tf_Y, out_type=tf.int64))
    tf_Y = tf.where(tf_X > 1., tf.zeros_like(tf_Y), tf_Y)
    tf_Y = tf.where(tf_X < (-1. - tf_h), tf.zeros_like(tf_Y), tf_Y)
    return tf_Y


def tf_engyFromFeats(tfFeats, nFeat, nL1, nL2):
    with tf.variable_scope('layer1', reuse=tf.AUTO_REUSE):
        W = tf.get_variable("weights", shape=[nFeat, nL1], dtype=tf.float32,
                            initializer=tf.contrib.layers.xavier_initializer())
        B = tf.get_variable("biases", shape=[nL1], dtype=tf.float32,
                            initializer=tf.zeros_initializer())
        L1out = tf.nn.sigmoid(tf.matmul(tfFeats, W) + B)
        tf.add_to_collection("saved_params", W)
        tf.add_to_collection("saved_params", B)

    with tf.variable_scope('layer2', reuse=tf.AUTO_REUSE):
        W = tf.get_variable("weights", shape=[nL1, nL2], dtype=tf.float32,
                            initializer=tf.contrib.layers.xavier_initializer())
        B = tf.get_variable("biases", shape=[nL2], dtype=tf.float32,
                            initializer=tf.zeros_initializer())
        L2out = tf.nn.sigmoid(tf.matmul(L1out, W) + B)
        tf.add_to_collection("saved_params", W)
        tf.add_to_collection("saved_params", B)

    with tf.variable_scope('layer3', reuse=tf.AUTO_REUSE):
        W = tf.get_variable("weights", shape=[nL2, 1], dtype=tf.float32,
                            initializer=tf.contrib.layers.xavier_initializer())
        B = tf.get_variable("biases", shape=[1], dtype=tf.float32,
                            initializer=tf.zeros_initializer())
        tf.add_to_collection("saved_params", W)
        tf.add_to_collection("saved_params", B)

        L3out = tf.matmul(L2out, W) + B
    return L3out


def tf_get_dEldXi(tfFeats, nFeat, nL1, nL2):
    with tf.variable_scope('layer1', reuse=tf.AUTO_REUSE):
        W1 = tf.get_variable("weights", shape=[nFeat, nL1], dtype=tf.float32,
                             initializer=tf.contrib.layers.xavier_initializer())
        B = tf.get_variable("biases", shape=[nL1], dtype=tf.float32,
                            initializer=tf.zeros_initializer())
        L1out = tf.nn.sigmoid(tf.matmul(tfFeats, W1) + B)

    with tf.variable_scope('layer2', reuse=tf.AUTO_REUSE):
        W2 = tf.get_variable("weights", shape=[nL1, nL2], dtype=tf.float32,
                             initializer=tf.contrib.layers.xavier_initializer())
        B = tf.get_variable("biases", shape=[nL2], dtype=tf.float32,
                            initializer=tf.zeros_initializer())
        L2out = tf.nn.sigmoid(tf.matmul(L1out, W2) + B)

    with tf.variable_scope('layer3', reuse=tf.AUTO_REUSE):
        W3 = tf.get_variable("weights", shape=[nL2, 1], dtype=tf.float32,
                             initializer=tf.contrib.layers.xavier_initializer())

    w_j = tf.matmul((L2out * (1 - L2out)) * tf.squeeze(W3), tf.transpose(W2))  # dimension = p x k
    dEldXi = tf.matmul(L1out * (1 - L1out) * w_j, tf.transpose(W1))

    return dEldXi


def tf_getEF(tfCoord, tfLattice, params):
    tfFeatA = tf.constant(params['featScalerA'], dtype=tf.float32)
    tfFeatB = tf.constant(params['featScalerB'], dtype=tf.float32)
    numFeat = params['n2bBasis'] + params['n3bBasis'] ** 3

    tfIdxNb, tfRNb, tfMaxNb, tfNAtoms = tf_getNb(tfCoord, tfLattice, float(params['dcut']))
    tfRhat, tfRi, tfDc = tf_getStruct(tfRNb)

    tfDc = tf.where(tfDc < float(params['dcut']), tfDc, tf.zeros_like(tfDc))

    RcA = 2 / (float(params['dcut']) - float(params['Rcut']))
    RcB = - (float(params['dcut']) + float(params['Rcut'])) / (float(params['dcut']) - float(params['Rcut']))

    tfGR2 = tf.scatter_nd(tf.where(tfRi > 0),
                          tf_getCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, params['n2bBasis']),
                          [tfNAtoms, tfMaxNb, params['n2bBasis']])
    tfGR2d = tf.scatter_nd(tf.where(tfRi > 0),
                           tf_getdCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, params['n2bBasis']),
                           [tfNAtoms, tfMaxNb, params['n2bBasis']])
    tfGR3 = tf.scatter_nd(tf.where(tfRi > 0),
                          tf_getCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, params['n3bBasis']),
                          [tfNAtoms, tfMaxNb, params['n3bBasis']])
    tfGR3d = tf.scatter_nd(tf.where(tfRi > 0),
                           tf_getdCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, params['n3bBasis']),
                           [tfNAtoms, tfMaxNb, params['n3bBasis']])
    tfGD3 = tf.scatter_nd(tf.where(tfDc > 0),
                          tf_getCos(tf.boolean_mask(tfDc, tfDc > 0) * RcA + RcB, params['n3bBasis']),
                          [tfNAtoms, tfMaxNb, tfMaxNb, params['n3bBasis']])

    tfFeats, tfdXi, tfdXin = tf_get_dXidRl2(tfGR2, tfGR2d, tfGR3, tfGR3d, tfGD3, tfRhat * RcA)
    tfdXi = tf.expand_dims(tfFeatA, 2) * tfdXi
    tfdXin = tf.expand_dims(tfFeatA, 2) * tfdXin

    tfFeats = tfFeatA * tfFeats + tfFeatB

    tfEs = tf_engyFromFeats(tfFeats, numFeat, params['nL1Nodes'], params['nL2Nodes'])

    dEldXi = tf_get_dEldXi(tfFeats, numFeat, params['nL1Nodes'], params['nL2Nodes'])
    Fll = tf.squeeze(tf.matmul(tf.expand_dims(dEldXi, 1), tfdXi))

    dENldXi = tf.gather_nd(dEldXi,
                           tf.expand_dims(tf.transpose(tf.boolean_mask(tfIdxNb, tf.greater(tfIdxNb, 0)) - 1), 1))

    Fln = tf.squeeze(tf.matmul(tf.expand_dims(dENldXi, 1), tf.boolean_mask(tfdXin, tf.greater(tfIdxNb, 0))))

    Fln = tf.reduce_sum(tf.scatter_nd(tf.where(tf.greater(tfIdxNb, 0)), Fln, [tfNAtoms, tfMaxNb, 3]), axis=1)

    tfFs = Fln + Fll

    return tfEs, tfFs


def tf_getE(tfCoord, tfLattice, params):
    tfFeatA = tf.constant(params['featScalerA'], dtype=tf.float32)
    tfFeatB = tf.constant(params['featScalerB'], dtype=tf.float32)
    numFeat = params['n2bBasis'] + params['n3bBasis'] ** 3

    tfIdxNb, tfRNb, tfMaxNb, tfNAtoms = tf_getNb(tfCoord, tfLattice, float(params['dcut']))
    tfRhat, tfRi, tfDc = tf_getStruct(tfRNb)

    RcA = 2 / (float(params['dcut']) - float(params['Rcut']))
    RcB = - (float(params['dcut']) + float(params['Rcut'])) / (float(params['dcut']) - float(params['Rcut']))

    tfGR2 = tf.scatter_nd(tf.where(tfRi > 0),
                          tf_getCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, params['n2bBasis']),
                          [tfNAtoms, tfMaxNb, params['n2bBasis']])
    tfGR3 = tf.scatter_nd(tf.where(tfRi > 0),
                          tf_getCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, params['n3bBasis']),
                          [tfNAtoms, tfMaxNb, params['n3bBasis']])
    tfGD3 = tf.scatter_nd(tf.where(tfDc > 0),
                          tf_getCos(tf.boolean_mask(tfDc, tfDc > 0) * RcA + RcB, params['n3bBasis']),
                          [tfNAtoms, tfMaxNb, tfMaxNb, params['n3bBasis']])

    tfFeats = tfFeatA * tf_getFeats(tfGR2, tfGR3, tfGD3) + tfFeatB
    tfEs = tf_engyFromFeats(tfFeats, numFeat, params['nL1Nodes'], params['nL2Nodes'])

    return tfEs


def tf_get_dXidRl2(tf_GR2, tf_GR2d, tf_GR3, tf_GR3d, tf_GD3, tf_Rh):
    tf_Shape = tf.shape(tf_GR3, out_type=tf.int32)
    tf_nAtoms = tf_Shape[0]
    tf_maxNb = tf_Shape[1]
    tf_nBasis3b = tf_Shape[2]

    Z2B = tf.expand_dims(tf_GR2d, 3) * tf.expand_dims(-tf_Rh, 2)
    Z3A = tf.matmul(tf.transpose(tf_GR3, [0, 2, 1]), tf.reshape(tf_GD3, [tf_nAtoms, tf_maxNb, -1]))
    Z3A = tf.transpose(tf.reshape(Z3A, [tf_nAtoms, tf_nBasis3b, tf_maxNb, tf_nBasis3b]), [0, 2, 1, 3])
    Z3B = tf.expand_dims(tf_GR3d, 3) * tf.expand_dims(-tf_Rh, 2)

    # features
    tf_yR = tf.reduce_sum(tf_GR2, axis=1)
    tf_yD = tf.matmul(tf.transpose(tf_GR3, [0, 2, 1]), tf.reshape(Z3A, [tf_nAtoms, tf_maxNb, -1]))
    tf_yD = tf.reshape(tf_yD, [tf_nAtoms, -1])
    tf_feats = tf.concat([tf_yR, tf_yD], axis=1)

    # Derivatives
    # 2 body:
    tfdX2ldl = tf.reduce_sum(Z2B, axis=1)
    tfdX2pdl = Z2B

    # 3 body:
    tfdX3ldl = tf.matmul(tf.transpose(tf.reshape(Z3B, [tf_nAtoms, tf_maxNb, -1]), [0, 2, 1]),
                         tf.reshape(Z3A, [tf_nAtoms, tf_maxNb, -1]))
    tfdX3ldl = tf.transpose(tf.reshape(tfdX3ldl, [tf_nAtoms, tf_nBasis3b, 3, tf_nBasis3b, tf_nBasis3b]),
                            [0, 1, 3, 4, 2])
    tfdX3ldl = tfdX3ldl + tf.transpose(tfdX3ldl, [0, 2, 1, 3, 4])

    tfdX3pdl_A = tf.expand_dims(tf.expand_dims(Z3B, 3), 4) * \
                 tf.expand_dims(tf.expand_dims(tf.transpose(Z3A, [0, 1, 3, 2]), 2), 5)

    tfdX3pdl_C = tf.matmul(tf.transpose(tf.reshape(Z3B, [tf_nAtoms, tf_maxNb, -1]), [0, 2, 1]),
                           tf.reshape(tf_GD3, [tf_nAtoms, tf_maxNb, -1]))
    tfdX3pdl_C = tf.transpose(tf.reshape(tfdX3pdl_C, [tf_nAtoms, tf_nBasis3b, 3, tf_maxNb, tf_nBasis3b]),
                              [0, 3, 4, 1, 2])
    tfdX3pdl_C = tf.expand_dims(tfdX3pdl_C, 2) * tf.expand_dims(tf.expand_dims(tf.expand_dims(tf_GR3, 3), 4), 5)

    tfdX3pdl = tfdX3pdl_A + tfdX3pdl_C
    tfdX3pdl = tfdX3pdl + tf.transpose(tfdX3pdl, [0, 1, 3, 2, 4, 5])

    tfdXldl = tf.concat([tfdX2ldl, tf.reshape(tfdX3ldl, [tf_nAtoms, -1, 3])], axis=1)
    tfdXpdl = tf.concat([tfdX2pdl, tf.reshape(tfdX3pdl, [tf_nAtoms, tf_maxNb, -1, 3])], axis=2)

    return tf_feats, tfdXldl, tfdXpdl


def tf_getFeats(tf_GR2, tf_GR3, tf_GD3):
    tf_n3bBasis = tf.shape(tf_GR3)[2]
    tf_yR = tf.reduce_sum(tf_GR2, axis=1)
    tf_yD = tf.reduce_sum(tf.expand_dims(tf.expand_dims(tf_GR3, 1), 4) * tf.expand_dims(tf_GD3, 3), 2)
    tf_yD = tf.reduce_sum(tf.expand_dims(tf.expand_dims(tf_GR3, 3), 4) * tf.expand_dims(tf_yD, 2), 1)
    tf_yD = tf.reshape(tf_yD, [-1, tf_n3bBasis ** 3])
    return tf.concat([tf_yR, tf_yD], axis=1)


def tf_getFeatsFromR(tfCoord, tfLattice, Rcut, dcut, n2bBasis, n3bBasis):
    tfIdxNb, tfRNb, tfMaxNb, tfNAtoms = tf_getNb(tfCoord, tfLattice, dcut)
    tfRhat, tfRi, tfDc = tf_getStruct(tfRNb)

    RcA = 2 / (dcut - Rcut)
    RcB = -(dcut + Rcut) / (dcut - Rcut)

    tfGR2 = tf.scatter_nd(tf.where(tfRi > 0),
                          tf_getCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, n2bBasis),
                          [tfNAtoms, tfMaxNb, n2bBasis])
    tfGR3 = tf.scatter_nd(tf.where(tfRi > 0),
                          tf_getCos(tf.boolean_mask(tfRi, tfRi > 0) * RcA + RcB, n3bBasis),
                          [tfNAtoms, tfMaxNb, n3bBasis])
    tfGD3 = tf.scatter_nd(tf.where(tfDc > 0),
                          tf_getCos(tf.boolean_mask(tfDc, tfDc > 0) * RcA + RcB, n3bBasis),
                          [tfNAtoms, tfMaxNb, tfMaxNb, n3bBasis])
    tfFeats = tf_getFeats(tfGR2, tfGR3, tfGD3)
    return tfFeats

