# SANNP - Single Atom Neural Network Potential

by Yufeng Huang<sup>1</sup> and Lin-Wang Wang<sup>2</sup>

<sup>1</sup> Department of Chemical Engineering, California Institute of Technology  
<sup>2</sup> Lawrence Berkeley National Laboratory

## Descriptions

SANNP (Single Atomic Neural Network Potential) is a machine learning force field that trains on atomic energies and/or forces. Full description of the model can be found in our manuscript:

> **Huang, Y.**, Kang, J., Goddard III, W.A., Wang, L.-W. (2019) Density functional theory based neural network force fields from energy decompositions. *Phys. Rev. B* **99**, 064103. [doi: 10.1103/PhysRevB.99.064103](https://journals.aps.org/prb/abstract/10.1103/PhysRevB.99.064103)

In this implemntation, the atomic energies are obtained using the partition scheme developed by Wang<sup>3,4</sup> and implemented in PWmat (www.pwmat.com). The neural network potential uses piecewise cosine functions as basis functions to build up 2-body and 3-body descriptors as inputs to the neural network. Once the neural network is fitted, atomic energies can be obtained directly, and forces can be obtained by taking derivative of the total energy with respect to the atomic postitions. 

<sup>3</sup> Wang, L. W. (2002). Charge-Density Patching Method for Unconventional Semiconductor Binary Systems. Physical Review Letters, 88(25), 4.  
<sup>4</sup> Kang, J., Wang, L. W. (2017). First-principles Green-Kubo method for thermal conductivity calculations. Physical Review B, 96(2), 1–5. 

## Instructions

### Requirements

The SANNP code is written in Python3 and uses the Numpy and Tensorflow library. We recommend insalling the necessary packages and libraries via conda.

* Anaconda: https://www.anaconda.com/download/ or  
* Miniconda: https://conda.io/docs/user-guide/install

### Installations 

The obtain download SANNP from Gitlab, just type the following in the command line:

```
% git clone https://gitlab.com/yufeng.huang/sannp.git
```

### Usage

Example data has been included in the **Data** folder. The script to train using the Data is in the **run** folder. To run the calculation, you can CD into the **run** folder:

```
% cd sannp/run
```

and run the calculation using the following command:

```
% bash run.sh > run.out & 
```