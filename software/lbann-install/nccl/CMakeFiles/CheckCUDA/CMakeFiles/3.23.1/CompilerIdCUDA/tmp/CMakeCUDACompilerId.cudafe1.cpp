# 1 "CMakeCUDACompilerId.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false
#if defined(__nv_is_extended_device_lambda_closure_type) && defined(__nv_is_extended_host_device_lambda_closure_type)
#endif

# 1
# 61 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
#pragma GCC diagnostic push
# 64
#pragma GCC diagnostic ignored "-Wunused-function"
# 68 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_types.h"
#if 0
# 68
enum cudaRoundMode { 
# 70
cudaRoundNearest, 
# 71
cudaRoundZero, 
# 72
cudaRoundPosInf, 
# 73
cudaRoundMinInf
# 74
}; 
#endif
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 100
struct char1 { 
# 102
signed char x; 
# 103
}; 
#endif
# 105 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 105
struct uchar1 { 
# 107
unsigned char x; 
# 108
}; 
#endif
# 111 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 111
struct __attribute((aligned(2))) char2 { 
# 113
signed char x, y; 
# 114
}; 
#endif
# 116 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 116
struct __attribute((aligned(2))) uchar2 { 
# 118
unsigned char x, y; 
# 119
}; 
#endif
# 121 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 121
struct char3 { 
# 123
signed char x, y, z; 
# 124
}; 
#endif
# 126 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 126
struct uchar3 { 
# 128
unsigned char x, y, z; 
# 129
}; 
#endif
# 131 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 131
struct __attribute((aligned(4))) char4 { 
# 133
signed char x, y, z, w; 
# 134
}; 
#endif
# 136 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 136
struct __attribute((aligned(4))) uchar4 { 
# 138
unsigned char x, y, z, w; 
# 139
}; 
#endif
# 141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 141
struct short1 { 
# 143
short x; 
# 144
}; 
#endif
# 146 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 146
struct ushort1 { 
# 148
unsigned short x; 
# 149
}; 
#endif
# 151 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 151
struct __attribute((aligned(4))) short2 { 
# 153
short x, y; 
# 154
}; 
#endif
# 156 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 156
struct __attribute((aligned(4))) ushort2 { 
# 158
unsigned short x, y; 
# 159
}; 
#endif
# 161 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 161
struct short3 { 
# 163
short x, y, z; 
# 164
}; 
#endif
# 166 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 166
struct ushort3 { 
# 168
unsigned short x, y, z; 
# 169
}; 
#endif
# 171 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 171
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 172 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 172
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 174 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 174
struct int1 { 
# 176
int x; 
# 177
}; 
#endif
# 179 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 179
struct uint1 { 
# 181
unsigned x; 
# 182
}; 
#endif
# 184 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 184
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 185 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 185
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 187 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 187
struct int3 { 
# 189
int x, y, z; 
# 190
}; 
#endif
# 192 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 192
struct uint3 { 
# 194
unsigned x, y, z; 
# 195
}; 
#endif
# 197 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 197
struct __attribute((aligned(16))) int4 { 
# 199
int x, y, z, w; 
# 200
}; 
#endif
# 202 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 202
struct __attribute((aligned(16))) uint4 { 
# 204
unsigned x, y, z, w; 
# 205
}; 
#endif
# 207 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 207
struct long1 { 
# 209
long x; 
# 210
}; 
#endif
# 212 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 212
struct ulong1 { 
# 214
unsigned long x; 
# 215
}; 
#endif
# 222 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 222
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 224
long x, y; 
# 225
}; 
#endif
# 227 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 227
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 229
unsigned long x, y; 
# 230
}; 
#endif
# 234 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 234
struct long3 { 
# 236
long x, y, z; 
# 237
}; 
#endif
# 239 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 239
struct ulong3 { 
# 241
unsigned long x, y, z; 
# 242
}; 
#endif
# 244 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 244
struct __attribute((aligned(16))) long4 { 
# 246
long x, y, z, w; 
# 247
}; 
#endif
# 249 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 249
struct __attribute((aligned(16))) ulong4 { 
# 251
unsigned long x, y, z, w; 
# 252
}; 
#endif
# 254 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 254
struct float1 { 
# 256
float x; 
# 257
}; 
#endif
# 276 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 276
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 281 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 281
struct float3 { 
# 283
float x, y, z; 
# 284
}; 
#endif
# 286 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 286
struct __attribute((aligned(16))) float4 { 
# 288
float x, y, z, w; 
# 289
}; 
#endif
# 291 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 291
struct longlong1 { 
# 293
long long x; 
# 294
}; 
#endif
# 296 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 296
struct ulonglong1 { 
# 298
unsigned long long x; 
# 299
}; 
#endif
# 301 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 301
struct __attribute((aligned(16))) longlong2 { 
# 303
long long x, y; 
# 304
}; 
#endif
# 306 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 306
struct __attribute((aligned(16))) ulonglong2 { 
# 308
unsigned long long x, y; 
# 309
}; 
#endif
# 311 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 311
struct longlong3 { 
# 313
long long x, y, z; 
# 314
}; 
#endif
# 316 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 316
struct ulonglong3 { 
# 318
unsigned long long x, y, z; 
# 319
}; 
#endif
# 321 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 321
struct __attribute((aligned(16))) longlong4 { 
# 323
long long x, y, z, w; 
# 324
}; 
#endif
# 326 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 326
struct __attribute((aligned(16))) ulonglong4 { 
# 328
unsigned long long x, y, z, w; 
# 329
}; 
#endif
# 331 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 331
struct double1 { 
# 333
double x; 
# 334
}; 
#endif
# 336 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 336
struct __attribute((aligned(16))) double2 { 
# 338
double x, y; 
# 339
}; 
#endif
# 341 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 341
struct double3 { 
# 343
double x, y, z; 
# 344
}; 
#endif
# 346 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 346
struct __attribute((aligned(16))) double4 { 
# 348
double x, y, z, w; 
# 349
}; 
#endif
# 363 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char1 
# 363
char1; 
#endif
# 364 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar1 
# 364
uchar1; 
#endif
# 365 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char2 
# 365
char2; 
#endif
# 366 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar2 
# 366
uchar2; 
#endif
# 367 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char3 
# 367
char3; 
#endif
# 368 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar3 
# 368
uchar3; 
#endif
# 369 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char4 
# 369
char4; 
#endif
# 370 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar4 
# 370
uchar4; 
#endif
# 371 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short1 
# 371
short1; 
#endif
# 372 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort1 
# 372
ushort1; 
#endif
# 373 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short2 
# 373
short2; 
#endif
# 374 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort2 
# 374
ushort2; 
#endif
# 375 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short3 
# 375
short3; 
#endif
# 376 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort3 
# 376
ushort3; 
#endif
# 377 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short4 
# 377
short4; 
#endif
# 378 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort4 
# 378
ushort4; 
#endif
# 379 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int1 
# 379
int1; 
#endif
# 380 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint1 
# 380
uint1; 
#endif
# 381 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int2 
# 381
int2; 
#endif
# 382 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint2 
# 382
uint2; 
#endif
# 383 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int3 
# 383
int3; 
#endif
# 384 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint3 
# 384
uint3; 
#endif
# 385 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int4 
# 385
int4; 
#endif
# 386 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint4 
# 386
uint4; 
#endif
# 387 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long1 
# 387
long1; 
#endif
# 388 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong1 
# 388
ulong1; 
#endif
# 389 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long2 
# 389
long2; 
#endif
# 390 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong2 
# 390
ulong2; 
#endif
# 391 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long3 
# 391
long3; 
#endif
# 392 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong3 
# 392
ulong3; 
#endif
# 393 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long4 
# 393
long4; 
#endif
# 394 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong4 
# 394
ulong4; 
#endif
# 395 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float1 
# 395
float1; 
#endif
# 396 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float2 
# 396
float2; 
#endif
# 397 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float3 
# 397
float3; 
#endif
# 398 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float4 
# 398
float4; 
#endif
# 399 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong1 
# 399
longlong1; 
#endif
# 400 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong1 
# 400
ulonglong1; 
#endif
# 401 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong2 
# 401
longlong2; 
#endif
# 402 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong2 
# 402
ulonglong2; 
#endif
# 403 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong3 
# 403
longlong3; 
#endif
# 404 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong3 
# 404
ulonglong3; 
#endif
# 405 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong4 
# 405
longlong4; 
#endif
# 406 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong4 
# 406
ulonglong4; 
#endif
# 407 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double1 
# 407
double1; 
#endif
# 408 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double2 
# 408
double2; 
#endif
# 409 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double3 
# 409
double3; 
#endif
# 410 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double4 
# 410
double4; 
#endif
# 418 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 418
struct dim3 { 
# 420
unsigned x, y, z; 
# 432
}; 
#endif
# 434 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef dim3 
# 434
dim3; 
#endif
# 143 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/lib/gcc/ppc64le-redhat-linux/11/include/stddef.h" 3
typedef long ptrdiff_t; 
# 209 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/lib/gcc/ppc64le-redhat-linux/11/include/stddef.h" 3
typedef unsigned long size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
# 426 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/lib/gcc/ppc64le-redhat-linux/11/include/stddef.h" 3
typedef 
# 415 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/lib/gcc/ppc64le-redhat-linux/11/include/stddef.h" 3
struct { 
# 416
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
# 417
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 426 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/lib/gcc/ppc64le-redhat-linux/11/include/stddef.h" 3
} max_align_t; 
# 433
typedef __decltype((nullptr)) nullptr_t; 
# 202 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 202
enum cudaError { 
# 209
cudaSuccess, 
# 215
cudaErrorInvalidValue, 
# 221
cudaErrorMemoryAllocation, 
# 227
cudaErrorInitializationError, 
# 234
cudaErrorCudartUnloading, 
# 241
cudaErrorProfilerDisabled, 
# 249
cudaErrorProfilerNotInitialized, 
# 256
cudaErrorProfilerAlreadyStarted, 
# 263
cudaErrorProfilerAlreadyStopped, 
# 272 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorInvalidConfiguration, 
# 278
cudaErrorInvalidPitchValue = 12, 
# 284
cudaErrorInvalidSymbol, 
# 292
cudaErrorInvalidHostPointer = 16, 
# 300
cudaErrorInvalidDevicePointer, 
# 306
cudaErrorInvalidTexture, 
# 312
cudaErrorInvalidTextureBinding, 
# 319
cudaErrorInvalidChannelDescriptor, 
# 325
cudaErrorInvalidMemcpyDirection, 
# 335 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorAddressOfConstant, 
# 344 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorTextureFetchFailed, 
# 353 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorTextureNotBound, 
# 362 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSynchronizationError, 
# 368
cudaErrorInvalidFilterSetting, 
# 374
cudaErrorInvalidNormSetting, 
# 382
cudaErrorMixedDeviceExecution, 
# 390
cudaErrorNotYetImplemented = 31, 
# 399 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorMemoryValueTooLarge, 
# 406
cudaErrorStubLibrary = 34, 
# 413
cudaErrorInsufficientDriver, 
# 420
cudaErrorCallRequiresNewerDriver, 
# 426
cudaErrorInvalidSurface, 
# 432
cudaErrorDuplicateVariableName = 43, 
# 438
cudaErrorDuplicateTextureName, 
# 444
cudaErrorDuplicateSurfaceName, 
# 454 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorDevicesUnavailable, 
# 467 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorIncompatibleDriverContext = 49, 
# 473
cudaErrorMissingConfiguration = 52, 
# 482 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorPriorLaunchFailure, 
# 489
cudaErrorLaunchMaxDepthExceeded = 65, 
# 497
cudaErrorLaunchFileScopedTex, 
# 505
cudaErrorLaunchFileScopedSurf, 
# 520 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSyncDepthExceeded, 
# 532 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchPendingCountExceeded, 
# 538
cudaErrorInvalidDeviceFunction = 98, 
# 544
cudaErrorNoDevice = 100, 
# 551
cudaErrorInvalidDevice, 
# 556
cudaErrorDeviceNotLicensed, 
# 565 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSoftwareValidityNotEstablished, 
# 570
cudaErrorStartupFailure = 127, 
# 575
cudaErrorInvalidKernelImage = 200, 
# 585 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorDeviceUninitialized, 
# 590
cudaErrorMapBufferObjectFailed = 205, 
# 595
cudaErrorUnmapBufferObjectFailed, 
# 601
cudaErrorArrayIsMapped, 
# 606
cudaErrorAlreadyMapped, 
# 614
cudaErrorNoKernelImageForDevice, 
# 619
cudaErrorAlreadyAcquired, 
# 624
cudaErrorNotMapped, 
# 630
cudaErrorNotMappedAsArray, 
# 636
cudaErrorNotMappedAsPointer, 
# 642
cudaErrorECCUncorrectable, 
# 648
cudaErrorUnsupportedLimit, 
# 654
cudaErrorDeviceAlreadyInUse, 
# 660
cudaErrorPeerAccessUnsupported, 
# 666
cudaErrorInvalidPtx, 
# 671
cudaErrorInvalidGraphicsContext, 
# 677
cudaErrorNvlinkUncorrectable, 
# 684
cudaErrorJitCompilerNotFound, 
# 691
cudaErrorUnsupportedPtxVersion, 
# 698
cudaErrorJitCompilationDisabled, 
# 703
cudaErrorUnsupportedExecAffinity, 
# 708
cudaErrorInvalidSource = 300, 
# 713
cudaErrorFileNotFound, 
# 718
cudaErrorSharedObjectSymbolNotFound, 
# 723
cudaErrorSharedObjectInitFailed, 
# 728
cudaErrorOperatingSystem, 
# 735
cudaErrorInvalidResourceHandle = 400, 
# 741
cudaErrorIllegalState, 
# 748
cudaErrorSymbolNotFound = 500, 
# 756
cudaErrorNotReady = 600, 
# 764
cudaErrorIllegalAddress = 700, 
# 773 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchOutOfResources, 
# 784 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchTimeout, 
# 790
cudaErrorLaunchIncompatibleTexturing, 
# 797
cudaErrorPeerAccessAlreadyEnabled, 
# 804
cudaErrorPeerAccessNotEnabled, 
# 817 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSetOnActiveProcess = 708, 
# 824
cudaErrorContextIsDestroyed, 
# 831
cudaErrorAssert, 
# 838
cudaErrorTooManyPeers, 
# 844
cudaErrorHostMemoryAlreadyRegistered, 
# 850
cudaErrorHostMemoryNotRegistered, 
# 859 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorHardwareStackError, 
# 867
cudaErrorIllegalInstruction, 
# 876 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorMisalignedAddress, 
# 887 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorInvalidAddressSpace, 
# 895
cudaErrorInvalidPc, 
# 906 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchFailure, 
# 915 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorCooperativeLaunchTooLarge, 
# 920
cudaErrorNotPermitted = 800, 
# 926
cudaErrorNotSupported, 
# 935 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSystemNotReady, 
# 942
cudaErrorSystemDriverMismatch, 
# 951 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorCompatNotSupportedOnDevice, 
# 956
cudaErrorMpsConnectionFailed, 
# 961
cudaErrorMpsRpcFailure, 
# 967
cudaErrorMpsServerNotReady, 
# 972
cudaErrorMpsMaxClientsReached, 
# 977
cudaErrorMpsMaxConnectionsReached, 
# 982
cudaErrorMpsClientTerminated, 
# 987
cudaErrorStreamCaptureUnsupported = 900, 
# 993
cudaErrorStreamCaptureInvalidated, 
# 999
cudaErrorStreamCaptureMerge, 
# 1004
cudaErrorStreamCaptureUnmatched, 
# 1010
cudaErrorStreamCaptureUnjoined, 
# 1017
cudaErrorStreamCaptureIsolation, 
# 1023
cudaErrorStreamCaptureImplicit, 
# 1029
cudaErrorCapturedEvent, 
# 1036
cudaErrorStreamCaptureWrongThread, 
# 1041
cudaErrorTimeout, 
# 1047
cudaErrorGraphExecUpdateFailure, 
# 1057 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorExternalDevice, 
# 1063
cudaErrorInvalidClusterSize, 
# 1068
cudaErrorUnknown = 999, 
# 1076
cudaErrorApiFailureBase = 10000
# 1077
}; 
#endif
# 1082 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1082
enum cudaChannelFormatKind { 
# 1084
cudaChannelFormatKindSigned, 
# 1085
cudaChannelFormatKindUnsigned, 
# 1086
cudaChannelFormatKindFloat, 
# 1087
cudaChannelFormatKindNone, 
# 1088
cudaChannelFormatKindNV12, 
# 1089
cudaChannelFormatKindUnsignedNormalized8X1, 
# 1090
cudaChannelFormatKindUnsignedNormalized8X2, 
# 1091
cudaChannelFormatKindUnsignedNormalized8X4, 
# 1092
cudaChannelFormatKindUnsignedNormalized16X1, 
# 1093
cudaChannelFormatKindUnsignedNormalized16X2, 
# 1094
cudaChannelFormatKindUnsignedNormalized16X4, 
# 1095
cudaChannelFormatKindSignedNormalized8X1, 
# 1096
cudaChannelFormatKindSignedNormalized8X2, 
# 1097
cudaChannelFormatKindSignedNormalized8X4, 
# 1098
cudaChannelFormatKindSignedNormalized16X1, 
# 1099
cudaChannelFormatKindSignedNormalized16X2, 
# 1100
cudaChannelFormatKindSignedNormalized16X4, 
# 1101
cudaChannelFormatKindUnsignedBlockCompressed1, 
# 1102
cudaChannelFormatKindUnsignedBlockCompressed1SRGB, 
# 1103
cudaChannelFormatKindUnsignedBlockCompressed2, 
# 1104
cudaChannelFormatKindUnsignedBlockCompressed2SRGB, 
# 1105
cudaChannelFormatKindUnsignedBlockCompressed3, 
# 1106
cudaChannelFormatKindUnsignedBlockCompressed3SRGB, 
# 1107
cudaChannelFormatKindUnsignedBlockCompressed4, 
# 1108
cudaChannelFormatKindSignedBlockCompressed4, 
# 1109
cudaChannelFormatKindUnsignedBlockCompressed5, 
# 1110
cudaChannelFormatKindSignedBlockCompressed5, 
# 1111
cudaChannelFormatKindUnsignedBlockCompressed6H, 
# 1112
cudaChannelFormatKindSignedBlockCompressed6H, 
# 1113
cudaChannelFormatKindUnsignedBlockCompressed7, 
# 1114
cudaChannelFormatKindUnsignedBlockCompressed7SRGB
# 1115
}; 
#endif
# 1120 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1120
struct cudaChannelFormatDesc { 
# 1122
int x; 
# 1123
int y; 
# 1124
int z; 
# 1125
int w; 
# 1126
cudaChannelFormatKind f; 
# 1127
}; 
#endif
# 1132 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
typedef struct cudaArray *cudaArray_t; 
# 1137
typedef const cudaArray *cudaArray_const_t; 
# 1139
struct cudaArray; 
# 1144
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 1149
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 1151
struct cudaMipmappedArray; 
# 1161 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1161
struct cudaArraySparseProperties { 
# 1162
struct { 
# 1163
unsigned width; 
# 1164
unsigned height; 
# 1165
unsigned depth; 
# 1166
} tileExtent; 
# 1167
unsigned miptailFirstLevel; 
# 1168
unsigned long long miptailSize; 
# 1169
unsigned flags; 
# 1170
unsigned reserved[4]; 
# 1171
}; 
#endif
# 1176 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1176
struct cudaArrayMemoryRequirements { 
# 1177
size_t size; 
# 1178
size_t alignment; 
# 1179
unsigned reserved[4]; 
# 1180
}; 
#endif
# 1185 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1185
enum cudaMemoryType { 
# 1187
cudaMemoryTypeUnregistered, 
# 1188
cudaMemoryTypeHost, 
# 1189
cudaMemoryTypeDevice, 
# 1190
cudaMemoryTypeManaged
# 1191
}; 
#endif
# 1196 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1196
enum cudaMemcpyKind { 
# 1198
cudaMemcpyHostToHost, 
# 1199
cudaMemcpyHostToDevice, 
# 1200
cudaMemcpyDeviceToHost, 
# 1201
cudaMemcpyDeviceToDevice, 
# 1202
cudaMemcpyDefault
# 1203
}; 
#endif
# 1210 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1210
struct cudaPitchedPtr { 
# 1212
void *ptr; 
# 1213
size_t pitch; 
# 1214
size_t xsize; 
# 1215
size_t ysize; 
# 1216
}; 
#endif
# 1223 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1223
struct cudaExtent { 
# 1225
size_t width; 
# 1226
size_t height; 
# 1227
size_t depth; 
# 1228
}; 
#endif
# 1235 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1235
struct cudaPos { 
# 1237
size_t x; 
# 1238
size_t y; 
# 1239
size_t z; 
# 1240
}; 
#endif
# 1245 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1245
struct cudaMemcpy3DParms { 
# 1247
cudaArray_t srcArray; 
# 1248
cudaPos srcPos; 
# 1249
cudaPitchedPtr srcPtr; 
# 1251
cudaArray_t dstArray; 
# 1252
cudaPos dstPos; 
# 1253
cudaPitchedPtr dstPtr; 
# 1255
cudaExtent extent; 
# 1256
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1257
}; 
#endif
# 1262 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1262
struct cudaMemcpy3DPeerParms { 
# 1264
cudaArray_t srcArray; 
# 1265
cudaPos srcPos; 
# 1266
cudaPitchedPtr srcPtr; 
# 1267
int srcDevice; 
# 1269
cudaArray_t dstArray; 
# 1270
cudaPos dstPos; 
# 1271
cudaPitchedPtr dstPtr; 
# 1272
int dstDevice; 
# 1274
cudaExtent extent; 
# 1275
}; 
#endif
# 1280 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1280
struct cudaMemsetParams { 
# 1281
void *dst; 
# 1282
size_t pitch; 
# 1283
unsigned value; 
# 1284
unsigned elementSize; 
# 1285
size_t width; 
# 1286
size_t height; 
# 1287
}; 
#endif
# 1292 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1292
enum cudaAccessProperty { 
# 1293
cudaAccessPropertyNormal, 
# 1294
cudaAccessPropertyStreaming, 
# 1295
cudaAccessPropertyPersisting
# 1296
}; 
#endif
# 1309 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1309
struct cudaAccessPolicyWindow { 
# 1310
void *base_ptr; 
# 1311
size_t num_bytes; 
# 1312
float hitRatio; 
# 1313
cudaAccessProperty hitProp; 
# 1314
cudaAccessProperty missProp; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1315
}; 
#endif
# 1327 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
typedef void (*cudaHostFn_t)(void * userData); 
# 1332
#if 0
# 1332
struct cudaHostNodeParams { 
# 1333
cudaHostFn_t fn; 
# 1334
void *userData; 
# 1335
}; 
#endif
# 1340 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1340
enum cudaStreamCaptureStatus { 
# 1341
cudaStreamCaptureStatusNone, 
# 1342
cudaStreamCaptureStatusActive, 
# 1343
cudaStreamCaptureStatusInvalidated
# 1345
}; 
#endif
# 1351 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1351
enum cudaStreamCaptureMode { 
# 1352
cudaStreamCaptureModeGlobal, 
# 1353
cudaStreamCaptureModeThreadLocal, 
# 1354
cudaStreamCaptureModeRelaxed
# 1355
}; 
#endif
# 1357 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1357
enum cudaSynchronizationPolicy { 
# 1358
cudaSyncPolicyAuto = 1, 
# 1359
cudaSyncPolicySpin, 
# 1360
cudaSyncPolicyYield, 
# 1361
cudaSyncPolicyBlockingSync
# 1362
}; 
#endif
# 1367 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1367
enum cudaClusterSchedulingPolicy { 
# 1368
cudaClusterSchedulingPolicyDefault, 
# 1369
cudaClusterSchedulingPolicySpread, 
# 1370
cudaClusterSchedulingPolicyLoadBalancing
# 1371
}; 
#endif
# 1376 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1376
enum cudaStreamUpdateCaptureDependenciesFlags { 
# 1377
cudaStreamAddCaptureDependencies, 
# 1378
cudaStreamSetCaptureDependencies
# 1379
}; 
#endif
# 1384 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1384
enum cudaUserObjectFlags { 
# 1385
cudaUserObjectNoDestructorSync = 1
# 1386
}; 
#endif
# 1391 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1391
enum cudaUserObjectRetainFlags { 
# 1392
cudaGraphUserObjectMove = 1
# 1393
}; 
#endif
# 1398 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
struct cudaGraphicsResource; 
# 1403
#if 0
# 1403
enum cudaGraphicsRegisterFlags { 
# 1405
cudaGraphicsRegisterFlagsNone, 
# 1406
cudaGraphicsRegisterFlagsReadOnly, 
# 1407
cudaGraphicsRegisterFlagsWriteDiscard, 
# 1408
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 1409
cudaGraphicsRegisterFlagsTextureGather = 8
# 1410
}; 
#endif
# 1415 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1415
enum cudaGraphicsMapFlags { 
# 1417
cudaGraphicsMapFlagsNone, 
# 1418
cudaGraphicsMapFlagsReadOnly, 
# 1419
cudaGraphicsMapFlagsWriteDiscard
# 1420
}; 
#endif
# 1425 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1425
enum cudaGraphicsCubeFace { 
# 1427
cudaGraphicsCubeFacePositiveX, 
# 1428
cudaGraphicsCubeFaceNegativeX, 
# 1429
cudaGraphicsCubeFacePositiveY, 
# 1430
cudaGraphicsCubeFaceNegativeY, 
# 1431
cudaGraphicsCubeFacePositiveZ, 
# 1432
cudaGraphicsCubeFaceNegativeZ
# 1433
}; 
#endif
# 1438 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1438
enum cudaResourceType { 
# 1440
cudaResourceTypeArray, 
# 1441
cudaResourceTypeMipmappedArray, 
# 1442
cudaResourceTypeLinear, 
# 1443
cudaResourceTypePitch2D
# 1444
}; 
#endif
# 1449 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1449
enum cudaResourceViewFormat { 
# 1451
cudaResViewFormatNone, 
# 1452
cudaResViewFormatUnsignedChar1, 
# 1453
cudaResViewFormatUnsignedChar2, 
# 1454
cudaResViewFormatUnsignedChar4, 
# 1455
cudaResViewFormatSignedChar1, 
# 1456
cudaResViewFormatSignedChar2, 
# 1457
cudaResViewFormatSignedChar4, 
# 1458
cudaResViewFormatUnsignedShort1, 
# 1459
cudaResViewFormatUnsignedShort2, 
# 1460
cudaResViewFormatUnsignedShort4, 
# 1461
cudaResViewFormatSignedShort1, 
# 1462
cudaResViewFormatSignedShort2, 
# 1463
cudaResViewFormatSignedShort4, 
# 1464
cudaResViewFormatUnsignedInt1, 
# 1465
cudaResViewFormatUnsignedInt2, 
# 1466
cudaResViewFormatUnsignedInt4, 
# 1467
cudaResViewFormatSignedInt1, 
# 1468
cudaResViewFormatSignedInt2, 
# 1469
cudaResViewFormatSignedInt4, 
# 1470
cudaResViewFormatHalf1, 
# 1471
cudaResViewFormatHalf2, 
# 1472
cudaResViewFormatHalf4, 
# 1473
cudaResViewFormatFloat1, 
# 1474
cudaResViewFormatFloat2, 
# 1475
cudaResViewFormatFloat4, 
# 1476
cudaResViewFormatUnsignedBlockCompressed1, 
# 1477
cudaResViewFormatUnsignedBlockCompressed2, 
# 1478
cudaResViewFormatUnsignedBlockCompressed3, 
# 1479
cudaResViewFormatUnsignedBlockCompressed4, 
# 1480
cudaResViewFormatSignedBlockCompressed4, 
# 1481
cudaResViewFormatUnsignedBlockCompressed5, 
# 1482
cudaResViewFormatSignedBlockCompressed5, 
# 1483
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1484
cudaResViewFormatSignedBlockCompressed6H, 
# 1485
cudaResViewFormatUnsignedBlockCompressed7
# 1486
}; 
#endif
# 1491 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1491
struct cudaResourceDesc { 
# 1492
cudaResourceType resType; 
# 1494
union { 
# 1495
struct { 
# 1496
cudaArray_t array; 
# 1497
} array; 
# 1498
struct { 
# 1499
cudaMipmappedArray_t mipmap; 
# 1500
} mipmap; 
# 1501
struct { 
# 1502
void *devPtr; 
# 1503
cudaChannelFormatDesc desc; 
# 1504
size_t sizeInBytes; 
# 1505
} linear; 
# 1506
struct { 
# 1507
void *devPtr; 
# 1508
cudaChannelFormatDesc desc; 
# 1509
size_t width; 
# 1510
size_t height; 
# 1511
size_t pitchInBytes; 
# 1512
} pitch2D; 
# 1513
} res; 
# 1514
}; 
#endif
# 1519 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1519
struct cudaResourceViewDesc { 
# 1521
cudaResourceViewFormat format; 
# 1522
size_t width; 
# 1523
size_t height; 
# 1524
size_t depth; 
# 1525
unsigned firstMipmapLevel; 
# 1526
unsigned lastMipmapLevel; 
# 1527
unsigned firstLayer; 
# 1528
unsigned lastLayer; 
# 1529
}; 
#endif
# 1534 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1534
struct cudaPointerAttributes { 
# 1540
cudaMemoryType type; 
# 1551 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
int device; 
# 1557
void *devicePointer; 
# 1566 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
void *hostPointer; 
# 1567
}; 
#endif
# 1572 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1572
struct cudaFuncAttributes { 
# 1579
size_t sharedSizeBytes; 
# 1585
size_t constSizeBytes; 
# 1590
size_t localSizeBytes; 
# 1597
int maxThreadsPerBlock; 
# 1602
int numRegs; 
# 1609
int ptxVersion; 
# 1616
int binaryVersion; 
# 1622
int cacheModeCA; 
# 1629
int maxDynamicSharedSizeBytes; 
# 1638 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
int preferredShmemCarveout; 
# 1639
}; 
#endif
# 1644 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1644
enum cudaFuncAttribute { 
# 1646
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1647
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1648
cudaFuncAttributeClusterDimMustBeSet, 
# 1649
cudaFuncAttributeRequiredClusterWidth, 
# 1650
cudaFuncAttributeRequiredClusterHeight, 
# 1651
cudaFuncAttributeRequiredClusterDepth, 
# 1652
cudaFuncAttributeNonPortableClusterSizeAllowed, 
# 1653
cudaFuncAttributeClusterSchedulingPolicyPreference, 
# 1654
cudaFuncAttributeMax
# 1655
}; 
#endif
# 1660 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1660
enum cudaFuncCache { 
# 1662
cudaFuncCachePreferNone, 
# 1663
cudaFuncCachePreferShared, 
# 1664
cudaFuncCachePreferL1, 
# 1665
cudaFuncCachePreferEqual
# 1666
}; 
#endif
# 1672 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1672
enum cudaSharedMemConfig { 
# 1674
cudaSharedMemBankSizeDefault, 
# 1675
cudaSharedMemBankSizeFourByte, 
# 1676
cudaSharedMemBankSizeEightByte
# 1677
}; 
#endif
# 1682 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1682
enum cudaSharedCarveout { 
# 1683
cudaSharedmemCarveoutDefault = (-1), 
# 1684
cudaSharedmemCarveoutMaxShared = 100, 
# 1685
cudaSharedmemCarveoutMaxL1 = 0
# 1686
}; 
#endif
# 1691 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1691
enum cudaComputeMode { 
# 1693
cudaComputeModeDefault, 
# 1694
cudaComputeModeExclusive, 
# 1695
cudaComputeModeProhibited, 
# 1696
cudaComputeModeExclusiveProcess
# 1697
}; 
#endif
# 1702 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1702
enum cudaLimit { 
# 1704
cudaLimitStackSize, 
# 1705
cudaLimitPrintfFifoSize, 
# 1706
cudaLimitMallocHeapSize, 
# 1707
cudaLimitDevRuntimeSyncDepth, 
# 1708
cudaLimitDevRuntimePendingLaunchCount, 
# 1709
cudaLimitMaxL2FetchGranularity, 
# 1710
cudaLimitPersistingL2CacheSize
# 1711
}; 
#endif
# 1716 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1716
enum cudaMemoryAdvise { 
# 1718
cudaMemAdviseSetReadMostly = 1, 
# 1719
cudaMemAdviseUnsetReadMostly, 
# 1720
cudaMemAdviseSetPreferredLocation, 
# 1721
cudaMemAdviseUnsetPreferredLocation, 
# 1722
cudaMemAdviseSetAccessedBy, 
# 1723
cudaMemAdviseUnsetAccessedBy
# 1724
}; 
#endif
# 1729 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1729
enum cudaMemRangeAttribute { 
# 1731
cudaMemRangeAttributeReadMostly = 1, 
# 1732
cudaMemRangeAttributePreferredLocation, 
# 1733
cudaMemRangeAttributeAccessedBy, 
# 1734
cudaMemRangeAttributeLastPrefetchLocation
# 1735
}; 
#endif
# 1740 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1740
enum cudaOutputMode { 
# 1742
cudaKeyValuePair, 
# 1743
cudaCSV
# 1744
}; 
#endif
# 1749 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1749
enum cudaFlushGPUDirectRDMAWritesOptions { 
# 1750
cudaFlushGPUDirectRDMAWritesOptionHost = (1 << 0), 
# 1751
cudaFlushGPUDirectRDMAWritesOptionMemOps
# 1752
}; 
#endif
# 1757 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1757
enum cudaGPUDirectRDMAWritesOrdering { 
# 1758
cudaGPUDirectRDMAWritesOrderingNone, 
# 1759
cudaGPUDirectRDMAWritesOrderingOwner = 100, 
# 1760
cudaGPUDirectRDMAWritesOrderingAllDevices = 200
# 1761
}; 
#endif
# 1766 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1766
enum cudaFlushGPUDirectRDMAWritesScope { 
# 1767
cudaFlushGPUDirectRDMAWritesToOwner = 100, 
# 1768
cudaFlushGPUDirectRDMAWritesToAllDevices = 200
# 1769
}; 
#endif
# 1774 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1774
enum cudaFlushGPUDirectRDMAWritesTarget { 
# 1775
cudaFlushGPUDirectRDMAWritesTargetCurrentDevice
# 1776
}; 
#endif
# 1782 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1782
enum cudaDeviceAttr { 
# 1784
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1785
cudaDevAttrMaxBlockDimX, 
# 1786
cudaDevAttrMaxBlockDimY, 
# 1787
cudaDevAttrMaxBlockDimZ, 
# 1788
cudaDevAttrMaxGridDimX, 
# 1789
cudaDevAttrMaxGridDimY, 
# 1790
cudaDevAttrMaxGridDimZ, 
# 1791
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1792
cudaDevAttrTotalConstantMemory, 
# 1793
cudaDevAttrWarpSize, 
# 1794
cudaDevAttrMaxPitch, 
# 1795
cudaDevAttrMaxRegistersPerBlock, 
# 1796
cudaDevAttrClockRate, 
# 1797
cudaDevAttrTextureAlignment, 
# 1798
cudaDevAttrGpuOverlap, 
# 1799
cudaDevAttrMultiProcessorCount, 
# 1800
cudaDevAttrKernelExecTimeout, 
# 1801
cudaDevAttrIntegrated, 
# 1802
cudaDevAttrCanMapHostMemory, 
# 1803
cudaDevAttrComputeMode, 
# 1804
cudaDevAttrMaxTexture1DWidth, 
# 1805
cudaDevAttrMaxTexture2DWidth, 
# 1806
cudaDevAttrMaxTexture2DHeight, 
# 1807
cudaDevAttrMaxTexture3DWidth, 
# 1808
cudaDevAttrMaxTexture3DHeight, 
# 1809
cudaDevAttrMaxTexture3DDepth, 
# 1810
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1811
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1812
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1813
cudaDevAttrSurfaceAlignment, 
# 1814
cudaDevAttrConcurrentKernels, 
# 1815
cudaDevAttrEccEnabled, 
# 1816
cudaDevAttrPciBusId, 
# 1817
cudaDevAttrPciDeviceId, 
# 1818
cudaDevAttrTccDriver, 
# 1819
cudaDevAttrMemoryClockRate, 
# 1820
cudaDevAttrGlobalMemoryBusWidth, 
# 1821
cudaDevAttrL2CacheSize, 
# 1822
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1823
cudaDevAttrAsyncEngineCount, 
# 1824
cudaDevAttrUnifiedAddressing, 
# 1825
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1826
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1827
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1828
cudaDevAttrMaxTexture2DGatherHeight, 
# 1829
cudaDevAttrMaxTexture3DWidthAlt, 
# 1830
cudaDevAttrMaxTexture3DHeightAlt, 
# 1831
cudaDevAttrMaxTexture3DDepthAlt, 
# 1832
cudaDevAttrPciDomainId, 
# 1833
cudaDevAttrTexturePitchAlignment, 
# 1834
cudaDevAttrMaxTextureCubemapWidth, 
# 1835
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1836
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1837
cudaDevAttrMaxSurface1DWidth, 
# 1838
cudaDevAttrMaxSurface2DWidth, 
# 1839
cudaDevAttrMaxSurface2DHeight, 
# 1840
cudaDevAttrMaxSurface3DWidth, 
# 1841
cudaDevAttrMaxSurface3DHeight, 
# 1842
cudaDevAttrMaxSurface3DDepth, 
# 1843
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1844
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1845
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1846
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1847
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1848
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1849
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1850
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1851
cudaDevAttrMaxTexture1DLinearWidth, 
# 1852
cudaDevAttrMaxTexture2DLinearWidth, 
# 1853
cudaDevAttrMaxTexture2DLinearHeight, 
# 1854
cudaDevAttrMaxTexture2DLinearPitch, 
# 1855
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1856
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1857
cudaDevAttrComputeCapabilityMajor, 
# 1858
cudaDevAttrComputeCapabilityMinor, 
# 1859
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1860
cudaDevAttrStreamPrioritiesSupported, 
# 1861
cudaDevAttrGlobalL1CacheSupported, 
# 1862
cudaDevAttrLocalL1CacheSupported, 
# 1863
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1864
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1865
cudaDevAttrManagedMemory, 
# 1866
cudaDevAttrIsMultiGpuBoard, 
# 1867
cudaDevAttrMultiGpuBoardGroupID, 
# 1868
cudaDevAttrHostNativeAtomicSupported, 
# 1869
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1870
cudaDevAttrPageableMemoryAccess, 
# 1871
cudaDevAttrConcurrentManagedAccess, 
# 1872
cudaDevAttrComputePreemptionSupported, 
# 1873
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1874
cudaDevAttrReserved92, 
# 1875
cudaDevAttrReserved93, 
# 1876
cudaDevAttrReserved94, 
# 1877
cudaDevAttrCooperativeLaunch, 
# 1878
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1879
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1880
cudaDevAttrCanFlushRemoteWrites, 
# 1881
cudaDevAttrHostRegisterSupported, 
# 1882
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1883
cudaDevAttrDirectManagedMemAccessFromHost, 
# 1884
cudaDevAttrMaxBlocksPerMultiprocessor = 106, 
# 1885
cudaDevAttrMaxPersistingL2CacheSize = 108, 
# 1886
cudaDevAttrMaxAccessPolicyWindowSize, 
# 1887
cudaDevAttrReservedSharedMemoryPerBlock = 111, 
# 1888
cudaDevAttrSparseCudaArraySupported, 
# 1889
cudaDevAttrHostRegisterReadOnlySupported, 
# 1890
cudaDevAttrTimelineSemaphoreInteropSupported, 
# 1891
cudaDevAttrMaxTimelineSemaphoreInteropSupported = 114, 
# 1892
cudaDevAttrMemoryPoolsSupported, 
# 1893
cudaDevAttrGPUDirectRDMASupported, 
# 1894
cudaDevAttrGPUDirectRDMAFlushWritesOptions, 
# 1895
cudaDevAttrGPUDirectRDMAWritesOrdering, 
# 1896
cudaDevAttrMemoryPoolSupportedHandleTypes, 
# 1897
cudaDevAttrClusterLaunch, 
# 1898
cudaDevAttrDeferredMappingCudaArraySupported, 
# 1899
cudaDevAttrMax
# 1900
}; 
#endif
# 1905 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1905
enum cudaMemPoolAttr { 
# 1915 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaMemPoolReuseFollowEventDependencies = 1, 
# 1922
cudaMemPoolReuseAllowOpportunistic, 
# 1930
cudaMemPoolReuseAllowInternalDependencies, 
# 1941 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaMemPoolAttrReleaseThreshold, 
# 1947
cudaMemPoolAttrReservedMemCurrent, 
# 1954
cudaMemPoolAttrReservedMemHigh, 
# 1960
cudaMemPoolAttrUsedMemCurrent, 
# 1967
cudaMemPoolAttrUsedMemHigh
# 1968
}; 
#endif
# 1973 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1973
enum cudaMemLocationType { 
# 1974
cudaMemLocationTypeInvalid, 
# 1975
cudaMemLocationTypeDevice
# 1976
}; 
#endif
# 1983 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1983
struct cudaMemLocation { 
# 1984
cudaMemLocationType type; 
# 1985
int id; 
# 1986
}; 
#endif
# 1991 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1991
enum cudaMemAccessFlags { 
# 1992
cudaMemAccessFlagsProtNone, 
# 1993
cudaMemAccessFlagsProtRead, 
# 1994
cudaMemAccessFlagsProtReadWrite = 3
# 1995
}; 
#endif
# 2000 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2000
struct cudaMemAccessDesc { 
# 2001
cudaMemLocation location; 
# 2002
cudaMemAccessFlags flags; 
# 2003
}; 
#endif
# 2008 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2008
enum cudaMemAllocationType { 
# 2009
cudaMemAllocationTypeInvalid, 
# 2013
cudaMemAllocationTypePinned, 
# 2014
cudaMemAllocationTypeMax = 2147483647
# 2015
}; 
#endif
# 2020 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2020
enum cudaMemAllocationHandleType { 
# 2021
cudaMemHandleTypeNone, 
# 2022
cudaMemHandleTypePosixFileDescriptor, 
# 2023
cudaMemHandleTypeWin32, 
# 2024
cudaMemHandleTypeWin32Kmt = 4
# 2025
}; 
#endif
# 2030 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2030
struct cudaMemPoolProps { 
# 2031
cudaMemAllocationType allocType; 
# 2032
cudaMemAllocationHandleType handleTypes; 
# 2033
cudaMemLocation location; 
# 2040
void *win32SecurityAttributes; 
# 2041
unsigned char reserved[64]; 
# 2042
}; 
#endif
# 2047 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2047
struct cudaMemPoolPtrExportData { 
# 2048
unsigned char reserved[64]; 
# 2049
}; 
#endif
# 2054 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2054
struct cudaMemAllocNodeParams { 
# 2059
cudaMemPoolProps poolProps; 
# 2060
const cudaMemAccessDesc *accessDescs; 
# 2061
size_t accessDescCount; 
# 2062
size_t bytesize; 
# 2063
void *dptr; 
# 2064
}; 
#endif
# 2069 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2069
enum cudaGraphMemAttributeType { 
# 2074
cudaGraphMemAttrUsedMemCurrent, 
# 2081
cudaGraphMemAttrUsedMemHigh, 
# 2088
cudaGraphMemAttrReservedMemCurrent, 
# 2095
cudaGraphMemAttrReservedMemHigh
# 2096
}; 
#endif
# 2102 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2102
enum cudaDeviceP2PAttr { 
# 2103
cudaDevP2PAttrPerformanceRank = 1, 
# 2104
cudaDevP2PAttrAccessSupported, 
# 2105
cudaDevP2PAttrNativeAtomicSupported, 
# 2106
cudaDevP2PAttrCudaArrayAccessSupported
# 2107
}; 
#endif
# 2114 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2114
struct CUuuid_st { 
# 2115
char bytes[16]; 
# 2116
}; 
#endif
# 2117 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef CUuuid_st 
# 2117
CUuuid; 
#endif
# 2119 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef CUuuid_st 
# 2119
cudaUUID_t; 
#endif
# 2124 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2124
struct cudaDeviceProp { 
# 2126
char name[256]; 
# 2127
cudaUUID_t uuid; 
# 2128
char luid[8]; 
# 2129
unsigned luidDeviceNodeMask; 
# 2130
size_t totalGlobalMem; 
# 2131
size_t sharedMemPerBlock; 
# 2132
int regsPerBlock; 
# 2133
int warpSize; 
# 2134
size_t memPitch; 
# 2135
int maxThreadsPerBlock; 
# 2136
int maxThreadsDim[3]; 
# 2137
int maxGridSize[3]; 
# 2138
int clockRate; 
# 2139
size_t totalConstMem; 
# 2140
int major; 
# 2141
int minor; 
# 2142
size_t textureAlignment; 
# 2143
size_t texturePitchAlignment; 
# 2144
int deviceOverlap; 
# 2145
int multiProcessorCount; 
# 2146
int kernelExecTimeoutEnabled; 
# 2147
int integrated; 
# 2148
int canMapHostMemory; 
# 2149
int computeMode; 
# 2150
int maxTexture1D; 
# 2151
int maxTexture1DMipmap; 
# 2152
int maxTexture1DLinear; 
# 2153
int maxTexture2D[2]; 
# 2154
int maxTexture2DMipmap[2]; 
# 2155
int maxTexture2DLinear[3]; 
# 2156
int maxTexture2DGather[2]; 
# 2157
int maxTexture3D[3]; 
# 2158
int maxTexture3DAlt[3]; 
# 2159
int maxTextureCubemap; 
# 2160
int maxTexture1DLayered[2]; 
# 2161
int maxTexture2DLayered[3]; 
# 2162
int maxTextureCubemapLayered[2]; 
# 2163
int maxSurface1D; 
# 2164
int maxSurface2D[2]; 
# 2165
int maxSurface3D[3]; 
# 2166
int maxSurface1DLayered[2]; 
# 2167
int maxSurface2DLayered[3]; 
# 2168
int maxSurfaceCubemap; 
# 2169
int maxSurfaceCubemapLayered[2]; 
# 2170
size_t surfaceAlignment; 
# 2171
int concurrentKernels; 
# 2172
int ECCEnabled; 
# 2173
int pciBusID; 
# 2174
int pciDeviceID; 
# 2175
int pciDomainID; 
# 2176
int tccDriver; 
# 2177
int asyncEngineCount; 
# 2178
int unifiedAddressing; 
# 2179
int memoryClockRate; 
# 2180
int memoryBusWidth; 
# 2181
int l2CacheSize; 
# 2182
int persistingL2CacheMaxSize; 
# 2183
int maxThreadsPerMultiProcessor; 
# 2184
int streamPrioritiesSupported; 
# 2185
int globalL1CacheSupported; 
# 2186
int localL1CacheSupported; 
# 2187
size_t sharedMemPerMultiprocessor; 
# 2188
int regsPerMultiprocessor; 
# 2189
int managedMemory; 
# 2190
int isMultiGpuBoard; 
# 2191
int multiGpuBoardGroupID; 
# 2192
int hostNativeAtomicSupported; 
# 2193
int singleToDoublePrecisionPerfRatio; 
# 2194
int pageableMemoryAccess; 
# 2195
int concurrentManagedAccess; 
# 2196
int computePreemptionSupported; 
# 2197
int canUseHostPointerForRegisteredMem; 
# 2198
int cooperativeLaunch; 
# 2199
int cooperativeMultiDeviceLaunch; 
# 2200
size_t sharedMemPerBlockOptin; 
# 2201
int pageableMemoryAccessUsesHostPageTables; 
# 2202
int directManagedMemAccessFromHost; 
# 2203
int maxBlocksPerMultiProcessor; 
# 2204
int accessPolicyMaxWindowSize; 
# 2205
size_t reservedSharedMemPerBlock; 
# 2206
}; 
#endif
# 2302 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 2299
struct cudaIpcEventHandle_st { 
# 2301
char reserved[64]; 
# 2302
} cudaIpcEventHandle_t; 
#endif
# 2310 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 2307
struct cudaIpcMemHandle_st { 
# 2309
char reserved[64]; 
# 2310
} cudaIpcMemHandle_t; 
#endif
# 2315 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2315
enum cudaExternalMemoryHandleType { 
# 2319
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
# 2323
cudaExternalMemoryHandleTypeOpaqueWin32, 
# 2327
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
# 2331
cudaExternalMemoryHandleTypeD3D12Heap, 
# 2335
cudaExternalMemoryHandleTypeD3D12Resource, 
# 2339
cudaExternalMemoryHandleTypeD3D11Resource, 
# 2343
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
# 2347
cudaExternalMemoryHandleTypeNvSciBuf
# 2348
}; 
#endif
# 2390 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2390
struct cudaExternalMemoryHandleDesc { 
# 2394
cudaExternalMemoryHandleType type; 
# 2395
union { 
# 2401
int fd; 
# 2417 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
struct { 
# 2421
void *handle; 
# 2426
const void *name; 
# 2427
} win32; 
# 2432
const void *nvSciBufObject; 
# 2433
} handle; 
# 2437
unsigned long long size; 
# 2441
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2442
}; 
#endif
# 2447 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2447
struct cudaExternalMemoryBufferDesc { 
# 2451
unsigned long long offset; 
# 2455
unsigned long long size; 
# 2459
unsigned flags; 
# 2460
}; 
#endif
# 2465 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2465
struct cudaExternalMemoryMipmappedArrayDesc { 
# 2470
unsigned long long offset; 
# 2474
cudaChannelFormatDesc formatDesc; 
# 2478
cudaExtent extent; 
# 2483
unsigned flags; 
# 2487
unsigned numLevels; 
# 2488
}; 
#endif
# 2493 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2493
enum cudaExternalSemaphoreHandleType { 
# 2497
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
# 2501
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
# 2505
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
# 2509
cudaExternalSemaphoreHandleTypeD3D12Fence, 
# 2513
cudaExternalSemaphoreHandleTypeD3D11Fence, 
# 2517
cudaExternalSemaphoreHandleTypeNvSciSync, 
# 2521
cudaExternalSemaphoreHandleTypeKeyedMutex, 
# 2525
cudaExternalSemaphoreHandleTypeKeyedMutexKmt, 
# 2529
cudaExternalSemaphoreHandleTypeTimelineSemaphoreFd, 
# 2533
cudaExternalSemaphoreHandleTypeTimelineSemaphoreWin32
# 2534
}; 
#endif
# 2539 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2539
struct cudaExternalSemaphoreHandleDesc { 
# 2543
cudaExternalSemaphoreHandleType type; 
# 2544
union { 
# 2551
int fd; 
# 2567 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
struct { 
# 2571
void *handle; 
# 2576
const void *name; 
# 2577
} win32; 
# 2581
const void *nvSciSyncObj; 
# 2582
} handle; 
# 2586
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2587
}; 
#endif
# 2592 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2592
struct cudaExternalSemaphoreSignalParams_v1 { 
# 2593
struct { 
# 2597
struct { 
# 2601
unsigned long long value; 
# 2602
} fence; 
# 2603
union { 
# 2608
void *fence; 
# 2609
unsigned long long reserved; 
# 2610
} nvSciSync; 
# 2614
struct { 
# 2618
unsigned long long key; 
# 2619
} keyedMutex; 
# 2620
} params; 
# 2631 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
unsigned flags; 
# 2632
}; 
#endif
# 2637 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2637
struct cudaExternalSemaphoreWaitParams_v1 { 
# 2638
struct { 
# 2642
struct { 
# 2646
unsigned long long value; 
# 2647
} fence; 
# 2648
union { 
# 2653
void *fence; 
# 2654
unsigned long long reserved; 
# 2655
} nvSciSync; 
# 2659
struct { 
# 2663
unsigned long long key; 
# 2667
unsigned timeoutMs; 
# 2668
} keyedMutex; 
# 2669
} params; 
# 2680 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
unsigned flags; 
# 2681
}; 
#endif
# 2686 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2686
struct cudaExternalSemaphoreSignalParams { 
# 2687
struct { 
# 2691
struct { 
# 2695
unsigned long long value; 
# 2696
} fence; 
# 2697
union { 
# 2702
void *fence; 
# 2703
unsigned long long reserved; 
# 2704
} nvSciSync; 
# 2708
struct { 
# 2712
unsigned long long key; 
# 2713
} keyedMutex; 
# 2714
unsigned reserved[12]; 
# 2715
} params; 
# 2726 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
unsigned flags; 
# 2727
unsigned reserved[16]; 
# 2728
}; 
#endif
# 2733 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2733
struct cudaExternalSemaphoreWaitParams { 
# 2734
struct { 
# 2738
struct { 
# 2742
unsigned long long value; 
# 2743
} fence; 
# 2744
union { 
# 2749
void *fence; 
# 2750
unsigned long long reserved; 
# 2751
} nvSciSync; 
# 2755
struct { 
# 2759
unsigned long long key; 
# 2763
unsigned timeoutMs; 
# 2764
} keyedMutex; 
# 2765
unsigned reserved[10]; 
# 2766
} params; 
# 2777 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
unsigned flags; 
# 2778
unsigned reserved[16]; 
# 2779
}; 
#endif
# 2790 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef cudaError 
# 2790
cudaError_t; 
#endif
# 2795 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 2795
cudaStream_t; 
#endif
# 2800 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 2800
cudaEvent_t; 
#endif
# 2805 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 2805
cudaGraphicsResource_t; 
#endif
# 2810 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef cudaOutputMode 
# 2810
cudaOutputMode_t; 
#endif
# 2815 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
# 2815
cudaExternalMemory_t; 
#endif
# 2820 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
# 2820
cudaExternalSemaphore_t; 
#endif
# 2825 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUgraph_st *
# 2825
cudaGraph_t; 
#endif
# 2830 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUgraphNode_st *
# 2830
cudaGraphNode_t; 
#endif
# 2835 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUuserObject_st *
# 2835
cudaUserObject_t; 
#endif
# 2840 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUfunc_st *
# 2840
cudaFunction_t; 
#endif
# 2845 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUmemPoolHandle_st *
# 2845
cudaMemPool_t; 
#endif
# 2850 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2850
enum cudaCGScope { 
# 2851
cudaCGScopeInvalid, 
# 2852
cudaCGScopeGrid, 
# 2853
cudaCGScopeMultiGrid
# 2854
}; 
#endif
# 2859 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2859
struct cudaLaunchParams { 
# 2861
void *func; 
# 2862
dim3 gridDim; 
# 2863
dim3 blockDim; 
# 2864
void **args; 
# 2865
size_t sharedMem; 
# 2866
cudaStream_t stream; 
# 2867
}; 
#endif
# 2872 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2872
struct cudaKernelNodeParams { 
# 2873
void *func; 
# 2874
dim3 gridDim; 
# 2875
dim3 blockDim; 
# 2876
unsigned sharedMemBytes; 
# 2877
void **kernelParams; 
# 2878
void **extra; 
# 2879
}; 
#endif
# 2884 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2884
struct cudaExternalSemaphoreSignalNodeParams { 
# 2885
cudaExternalSemaphore_t *extSemArray; 
# 2886
const cudaExternalSemaphoreSignalParams *paramsArray; 
# 2887
unsigned numExtSems; 
# 2888
}; 
#endif
# 2893 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2893
struct cudaExternalSemaphoreWaitNodeParams { 
# 2894
cudaExternalSemaphore_t *extSemArray; 
# 2895
const cudaExternalSemaphoreWaitParams *paramsArray; 
# 2896
unsigned numExtSems; 
# 2897
}; 
#endif
# 2902 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2902
enum cudaGraphNodeType { 
# 2903
cudaGraphNodeTypeKernel, 
# 2904
cudaGraphNodeTypeMemcpy, 
# 2905
cudaGraphNodeTypeMemset, 
# 2906
cudaGraphNodeTypeHost, 
# 2907
cudaGraphNodeTypeGraph, 
# 2908
cudaGraphNodeTypeEmpty, 
# 2909
cudaGraphNodeTypeWaitEvent, 
# 2910
cudaGraphNodeTypeEventRecord, 
# 2911
cudaGraphNodeTypeExtSemaphoreSignal, 
# 2912
cudaGraphNodeTypeExtSemaphoreWait, 
# 2913
cudaGraphNodeTypeMemAlloc, 
# 2914
cudaGraphNodeTypeMemFree, 
# 2915
cudaGraphNodeTypeCount
# 2916
}; 
#endif
# 2921 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
# 2926
#if 0
# 2926
enum cudaGraphExecUpdateResult { 
# 2927
cudaGraphExecUpdateSuccess, 
# 2928
cudaGraphExecUpdateError, 
# 2929
cudaGraphExecUpdateErrorTopologyChanged, 
# 2930
cudaGraphExecUpdateErrorNodeTypeChanged, 
# 2931
cudaGraphExecUpdateErrorFunctionChanged, 
# 2932
cudaGraphExecUpdateErrorParametersChanged, 
# 2933
cudaGraphExecUpdateErrorNotSupported, 
# 2934
cudaGraphExecUpdateErrorUnsupportedFunctionChange, 
# 2935
cudaGraphExecUpdateErrorAttributesChanged
# 2936
}; 
#endif
# 2942 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2942
enum cudaGetDriverEntryPointFlags { 
# 2943
cudaEnableDefault, 
# 2944
cudaEnableLegacyStream, 
# 2945
cudaEnablePerThreadDefaultStream
# 2946
}; 
#endif
# 2951 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2951
enum cudaGraphDebugDotFlags { 
# 2952
cudaGraphDebugDotFlagsVerbose = (1 << 0), 
# 2953
cudaGraphDebugDotFlagsKernelNodeParams = (1 << 2), 
# 2954
cudaGraphDebugDotFlagsMemcpyNodeParams = (1 << 3), 
# 2955
cudaGraphDebugDotFlagsMemsetNodeParams = (1 << 4), 
# 2956
cudaGraphDebugDotFlagsHostNodeParams = (1 << 5), 
# 2957
cudaGraphDebugDotFlagsEventNodeParams = (1 << 6), 
# 2958
cudaGraphDebugDotFlagsExtSemasSignalNodeParams = (1 << 7), 
# 2959
cudaGraphDebugDotFlagsExtSemasWaitNodeParams = (1 << 8), 
# 2960
cudaGraphDebugDotFlagsKernelNodeAttributes = (1 << 9), 
# 2961
cudaGraphDebugDotFlagsHandles = (1 << 10)
# 2962
}; 
#endif
# 2967 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 2967
enum cudaGraphInstantiateFlags { 
# 2968
cudaGraphInstantiateFlagAutoFreeOnLaunch = 1, 
# 2969
cudaGraphInstantiateFlagUseNodePriority = 8
# 2971
}; 
#endif
# 3010 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 2976 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
enum cudaLaunchAttributeID { 
# 2977
cudaLaunchAttributeIgnore, 
# 2978
cudaLaunchAttributeAccessPolicyWindow, 
# 2979
cudaLaunchAttributeCooperative, 
# 2980
cudaLaunchAttributeSynchronizationPolicy, 
# 2981
cudaLaunchAttributeClusterDimension, 
# 2982
cudaLaunchAttributeClusterSchedulingPolicyPreference, 
# 2983
cudaLaunchAttributeProgrammaticStreamSerialization, 
# 2991
cudaLaunchAttributeProgrammaticEvent, 
# 3009 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaLaunchAttributePriority
# 3010
} cudaLaunchAttributeID; 
#endif
# 3033 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 3015
union cudaLaunchAttributeValue { 
# 3016
char pad[64]; 
# 3017
cudaAccessPolicyWindow accessPolicyWindow; 
# 3018
int cooperative; 
# 3019
cudaSynchronizationPolicy syncPolicy; 
# 3020
struct { 
# 3021
unsigned x; 
# 3022
unsigned y; 
# 3023
unsigned z; 
# 3024
} clusterDim; 
# 3025
cudaClusterSchedulingPolicy clusterSchedulingPolicyPreference; 
# 3026
int programmaticStreamSerializationAllowed; 
# 3027
struct { 
# 3028
cudaEvent_t event; 
# 3029
int flags; 
# 3030
int triggerAtBlockStart; 
# 3031
} programmaticEvent; 
# 3032
int priority; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3033
} cudaLaunchAttributeValue; 
#endif
# 3042 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 3038
struct cudaLaunchAttribute_st { 
# 3039
cudaLaunchAttributeID id; 
# 3040
char pad[(8) - sizeof(cudaLaunchAttributeID)]; 
# 3041
cudaLaunchAttributeValue val; 
# 3042
} cudaLaunchAttribute; 
#endif
# 3054 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 3047
struct cudaLaunchConfig_st { 
# 3048
dim3 gridDim; 
# 3049
dim3 blockDim; 
# 3050
size_t dynamicSmemBytes; 
# 3051
cudaStream_t stream; 
# 3052
cudaLaunchAttribute *attrs; 
# 3053
unsigned numAttrs; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3054
} cudaLaunchConfig_t; 
#endif
# 84 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 138
unsigned maxAnisotropy; 
# 142
cudaTextureFilterMode mipmapFilterMode; 
# 146
float mipmapLevelBias; 
# 150
float minMipmapLevelClamp; 
# 154
float maxMipmapLevelClamp; 
# 158
int disableTrilinearOptimization; 
# 159
int __cudaReserved[14]; 
# 160
}; 
#endif
# 165 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 165
struct cudaTextureDesc { 
# 170
cudaTextureAddressMode addressMode[3]; 
# 174
cudaTextureFilterMode filterMode; 
# 178
cudaTextureReadMode readMode; 
# 182
int sRGB; 
# 186
float borderColor[4]; 
# 190
int normalizedCoords; 
# 194
unsigned maxAnisotropy; 
# 198
cudaTextureFilterMode mipmapFilterMode; 
# 202
float mipmapLevelBias; 
# 206
float minMipmapLevelClamp; 
# 210
float maxMipmapLevelClamp; 
# 214
int disableTrilinearOptimization; 
# 215
}; 
#endif
# 217 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 217
struct cudaTextureDesc_v2 { 
# 222
cudaTextureAddressMode addressMode[3]; 
# 226
cudaTextureFilterMode filterMode; 
# 230
cudaTextureReadMode readMode; 
# 234
int sRGB; 
# 238
float borderColor[4]; 
# 242
int normalizedCoords; 
# 246
unsigned maxAnisotropy; 
# 250
cudaTextureFilterMode mipmapFilterMode; 
# 254
float mipmapLevelBias; 
# 258
float minMipmapLevelClamp; 
# 262
float maxMipmapLevelClamp; 
# 266
int disableTrilinearOptimization; 
# 270
int seamlessCubemap; 
# 271
}; 
#endif
# 276 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
typedef unsigned long long 
# 276
cudaTextureObject_t; 
#endif
# 87 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/library_types.h"
typedef 
# 55
enum cudaDataType_t { 
# 57
CUDA_R_16F = 2, 
# 58
CUDA_C_16F = 6, 
# 59
CUDA_R_16BF = 14, 
# 60
CUDA_C_16BF, 
# 61
CUDA_R_32F = 0, 
# 62
CUDA_C_32F = 4, 
# 63
CUDA_R_64F = 1, 
# 64
CUDA_C_64F = 5, 
# 65
CUDA_R_4I = 16, 
# 66
CUDA_C_4I, 
# 67
CUDA_R_4U, 
# 68
CUDA_C_4U, 
# 69
CUDA_R_8I = 3, 
# 70
CUDA_C_8I = 7, 
# 71
CUDA_R_8U, 
# 72
CUDA_C_8U, 
# 73
CUDA_R_16I = 20, 
# 74
CUDA_C_16I, 
# 75
CUDA_R_16U, 
# 76
CUDA_C_16U, 
# 77
CUDA_R_32I = 10, 
# 78
CUDA_C_32I, 
# 79
CUDA_R_32U, 
# 80
CUDA_C_32U, 
# 81
CUDA_R_64I = 24, 
# 82
CUDA_C_64I, 
# 83
CUDA_R_64U, 
# 84
CUDA_C_64U, 
# 85
CUDA_R_8F_E4M3, 
# 86
CUDA_R_8F_E5M2
# 87
} cudaDataType; 
# 95
typedef 
# 90
enum libraryPropertyType_t { 
# 92
MAJOR_VERSION, 
# 93
MINOR_VERSION, 
# 94
PATCH_LEVEL
# 95
} libraryPropertyType; 
# 131 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
extern "C" {
# 133
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 134
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 135
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 136
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 139
extern cudaError_t cudaDeviceSynchronize(); 
# 141
__attribute__((unused)) extern cudaError_t __cudaDeviceSynchronizeDeprecationAvoidance(); 
# 142
extern cudaError_t cudaGetLastError(); 
# 143
extern cudaError_t cudaPeekAtLastError(); 
# 144
extern const char *cudaGetErrorString(cudaError_t error); 
# 145
extern const char *cudaGetErrorName(cudaError_t error); 
# 146
extern cudaError_t cudaGetDeviceCount(int * count); 
# 147
extern cudaError_t cudaGetDevice(int * device); 
# 148
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 149
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 150
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 151
__attribute__((unused)) extern cudaError_t cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 152
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 153
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
# 154
__attribute__((unused)) extern cudaError_t cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 155
extern cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 156
__attribute__((unused)) extern cudaError_t cudaEventRecordWithFlags_ptsz(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 157
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 158
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 159
extern cudaError_t cudaFree(void * devPtr); 
# 160
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 161
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 162
__attribute__((unused)) extern cudaError_t cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 163
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 164
__attribute__((unused)) extern cudaError_t cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 165
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 166
__attribute__((unused)) extern cudaError_t cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 167
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 168
__attribute__((unused)) extern cudaError_t cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 169
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 170
__attribute__((unused)) extern cudaError_t cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 171
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 172
__attribute__((unused)) extern cudaError_t cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 173
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 194 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 222 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 223
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 224
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 242 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 243
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 246
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 247
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 249
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 250
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 251
__attribute__((unused)) extern cudaError_t cudaCGSynchronizeGrid(unsigned long long handle, unsigned flags); 
# 252
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 253
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 254
}
# 256
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 257
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 258
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 259
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 267 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern "C" {
# 307 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceReset(); 
# 329 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSynchronize(); 
# 416 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 449 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 472 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetTexture1DLinearMaxWidth(size_t * maxWidthInElements, const cudaChannelFormatDesc * fmtDesc, int device); 
# 506 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 543 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 587 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 618 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 662 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 689 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 719 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 767 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 808 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 851 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 915 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 951 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 983 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceFlushGPUDirectRDMAWrites(cudaFlushGPUDirectRDMAWritesTarget target, cudaFlushGPUDirectRDMAWritesScope scope); 
# 1026 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadExit(); 
# 1052 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSynchronize(); 
# 1101 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 1134 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1170 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1217 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1278 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(); 
# 1326 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaPeekAtLastError(); 
# 1342 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern const char *cudaGetErrorName(cudaError_t error); 
# 1358 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t error); 
# 1386 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1659 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1859 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1877 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetDefaultMemPool(cudaMemPool_t * memPool, int device); 
# 1901 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetMemPool(int device, cudaMemPool_t memPool); 
# 1921 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetMemPool(cudaMemPool_t * memPool, int device); 
# 1969 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
# 2009 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 2030 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 2074 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int device); 
# 2095 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDevice(int * device); 
# 2126 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 2191 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 2235 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 2275 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 2307 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2353 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2380 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2405 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2420 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCtxResetPersistingL2Cache(); 
# 2440 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src); 
# 2461 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
# 2485 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
# 2519 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2550 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags = 0); 
# 2558
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2625 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2649 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2674 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2758 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2797 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
# 2848 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
# 2876 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
# 2914 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
# 2946 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned long long * pId); 
# 3001 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetCaptureInfo_v2(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned long long * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, size_t * numDependencies_out = 0); 
# 3034 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t * dependencies, size_t numDependencies, unsigned flags = 0); 
# 3071 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 3108 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 3148 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 3195 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream = 0, unsigned flags = 0); 
# 3227 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 3257 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 3286 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 3330 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 3510 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
# 3565 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
# 3627 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
# 3651 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
# 3804 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
# 3871 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSignalExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3947 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaWaitExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3970 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
# 4037 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4099 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernelExC(const cudaLaunchConfig_t * config, const void * func, void ** args); 
# 4156 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4257 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 4304 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 4359 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 4392 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 4429 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 4453 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 4477 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForHost(double * d); 
# 4543 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
# 4600 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 4629 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyAvailableDynamicSMemPerBlock(size_t * dynamicSmemSize, const void * func, int numBlocks, int blockSize); 
# 4674 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 4709 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxPotentialClusterSize(int * clusterSize, const void * func, const cudaLaunchConfig_t * launchConfig); 
# 4748 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveClusters(int * numClusters, const void * func, const cudaLaunchConfig_t * launchConfig); 
# 4868 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 4901 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 4934 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 4977 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 5029 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 5067 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void * devPtr); 
# 5090 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeHost(void * ptr); 
# 5113 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 5136 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 5202 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 5295 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 5318 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostUnregister(void * ptr); 
# 5363 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 5385 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 5424 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 5569 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 5714 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 5747 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 5852 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 5883 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 6001 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 6027 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 6061 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 6087 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 6116 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetPlane(cudaArray_t * pPlaneArray, cudaArray_t hArray, unsigned planeIdx); 
# 6139 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaArray_t array, int device); 
# 6163 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMipmappedArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaMipmappedArray_t mipmap, int device); 
# 6191 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaArray_t array); 
# 6221 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMipmappedArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaMipmappedArray_t mipmap); 
# 6266 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 6301 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 6350 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6400 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6450 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 6497 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 6540 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 6583 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 6640 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6675 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 6738 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6796 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6853 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6904 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6955 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6984 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 7018 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 7064 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 7100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 7141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 7194 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 7222 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 7249 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 7319 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 7435 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 7494 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 7533 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 7593 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 7635 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 7678 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 7729 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7779 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7848 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocAsync(void ** devPtr, size_t size, cudaStream_t hStream); 
# 7874 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeAsync(void * devPtr, cudaStream_t hStream); 
# 7899 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep); 
# 7943 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolSetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 7991 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolGetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 8006 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolSetAccess(cudaMemPool_t memPool, const cudaMemAccessDesc * descList, size_t count); 
# 8019 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolGetAccess(cudaMemAccessFlags * flags, cudaMemPool_t memPool, cudaMemLocation * location); 
# 8039 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolCreate(cudaMemPool_t * memPool, const cudaMemPoolProps * poolProps); 
# 8061 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolDestroy(cudaMemPool_t memPool); 
# 8097 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocFromPoolAsync(void ** ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream); 
# 8122 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolExportToShareableHandle(void * shareableHandle, cudaMemPool_t memPool, cudaMemAllocationHandleType handleType, unsigned flags); 
# 8149 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolImportFromShareableHandle(cudaMemPool_t * memPool, void * shareableHandle, cudaMemAllocationHandleType handleType, unsigned flags); 
# 8172 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolExportPointer(cudaMemPoolPtrExportData * exportData, void * ptr); 
# 8201 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolImportPointer(void ** ptr, cudaMemPool_t memPool, cudaMemPoolPtrExportData * exportData); 
# 8353 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 8394 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 8436 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 8458 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 8522 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 8557 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 8596 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 8631 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 8663 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 8701 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 8730 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 8801 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 8860 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 8898 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 8938 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 8964 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 8993 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 9023 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 9068 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 9093 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 9128 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 9158 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 9375 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 9599 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateTextureObject_v2(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc_v2 * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 9619 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 9639 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 9659 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 9679 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectTextureDesc_v2(cudaTextureDesc_v2 * pTexDesc, cudaTextureObject_t texObject); 
# 9700 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 9745 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 9765 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 9784 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 9818 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 9843 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 9890 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
# 9987 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
# 10020 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
# 10045 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 10065 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst); 
# 10088 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
# 10112 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
# 10162 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
# 10221 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10290 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10358 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNode1D(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10390 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
# 10416 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 10455 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10501 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10547 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10594 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
# 10617 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
# 10640 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 10681 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
# 10704 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
# 10727 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 10767 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
# 10794 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
# 10831 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
# 10874 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEventRecordNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 10901 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 10928 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 10974 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEventWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 11001 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 11028 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 11077 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 11110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreSignalNodeParams * params_out); 
# 11137 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 11186 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 11219 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreWaitNodeParams * params_out); 
# 11246 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 11323 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemAllocNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaMemAllocNodeParams * nodeParams); 
# 11350 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, cudaMemAllocNodeParams * params_out); 
# 11410 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemFreeNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dptr); 
# 11434 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void * dptr_out); 
# 11462 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGraphMemTrim(int device); 
# 11499 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11533 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11561 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
# 11589 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
# 11620 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
# 11651 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
# 11682 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
# 11716 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
# 11747 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
# 11779 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
# 11810 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11841 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11871 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node); 
# 11909 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
# 11957 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiateWithFlags(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned long long flags); 
# 12001 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 12051 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 12106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 12169 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 12230 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 12284 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 12323 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 12369 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, cudaGraph_t childGraph); 
# 12413 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12457 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12504 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 12551 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 12591 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned isEnabled); 
# 12625 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned * isEnabled); 
# 12706 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t * hErrorNode_out, cudaGraphExecUpdateResult * updateResult_out); 
# 12731 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 12762 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 12785 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
# 12806 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDestroy(cudaGraph_t graph); 
# 12825 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDebugDotPrint(cudaGraph_t graph, const char * path, unsigned flags); 
# 12861 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectCreate(cudaUserObject_t * object_out, void * ptr, cudaHostFn_t destroy, unsigned initialRefcount, unsigned flags); 
# 12885 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectRetain(cudaUserObject_t object, unsigned count = 1); 
# 12913 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectRelease(cudaUserObject_t object, unsigned count = 1); 
# 12941 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1, unsigned flags = 0); 
# 12966 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1); 
# 13032 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDriverEntryPoint(const char * symbol, void ** funcPtr, unsigned long long flags); 
# 13037
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 13213 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetFuncBySymbol(cudaFunction_t * functionPtr, const void * symbolPtr); 
# 13365 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
}
# 124 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 125
{ 
# 126
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 127
} 
# 129
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 130
{ 
# 131
int e = (((int)sizeof(unsigned short)) * 8); 
# 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 134
} 
# 136
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 137
{ 
# 138
int e = (((int)sizeof(unsigned short)) * 8); 
# 140
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 141
} 
# 143
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 144
{ 
# 145
int e = (((int)sizeof(unsigned short)) * 8); 
# 147
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 148
} 
# 150
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 151
{ 
# 152
int e = (((int)sizeof(unsigned short)) * 8); 
# 154
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 155
} 
# 157
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 158
{ 
# 159
int e = (((int)sizeof(char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 166
} 
# 168
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 169
{ 
# 170
int e = (((int)sizeof(signed char)) * 8); 
# 172
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 173
} 
# 175
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 176
{ 
# 177
int e = (((int)sizeof(unsigned char)) * 8); 
# 179
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 180
} 
# 182
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 183
{ 
# 184
int e = (((int)sizeof(signed char)) * 8); 
# 186
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 187
} 
# 189
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 190
{ 
# 191
int e = (((int)sizeof(unsigned char)) * 8); 
# 193
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 194
} 
# 196
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 197
{ 
# 198
int e = (((int)sizeof(signed char)) * 8); 
# 200
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 201
} 
# 203
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 204
{ 
# 205
int e = (((int)sizeof(unsigned char)) * 8); 
# 207
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 208
} 
# 210
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 211
{ 
# 212
int e = (((int)sizeof(signed char)) * 8); 
# 214
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 215
} 
# 217
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 218
{ 
# 219
int e = (((int)sizeof(unsigned char)) * 8); 
# 221
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 222
} 
# 224
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 225
{ 
# 226
int e = (((int)sizeof(short)) * 8); 
# 228
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 229
} 
# 231
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 232
{ 
# 233
int e = (((int)sizeof(unsigned short)) * 8); 
# 235
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 236
} 
# 238
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 239
{ 
# 240
int e = (((int)sizeof(short)) * 8); 
# 242
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 243
} 
# 245
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 246
{ 
# 247
int e = (((int)sizeof(unsigned short)) * 8); 
# 249
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 250
} 
# 252
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 253
{ 
# 254
int e = (((int)sizeof(short)) * 8); 
# 256
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 257
} 
# 259
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 260
{ 
# 261
int e = (((int)sizeof(unsigned short)) * 8); 
# 263
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 264
} 
# 266
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 267
{ 
# 268
int e = (((int)sizeof(short)) * 8); 
# 270
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 271
} 
# 273
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 274
{ 
# 275
int e = (((int)sizeof(unsigned short)) * 8); 
# 277
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 278
} 
# 280
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 281
{ 
# 282
int e = (((int)sizeof(int)) * 8); 
# 284
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 285
} 
# 287
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 288
{ 
# 289
int e = (((int)sizeof(unsigned)) * 8); 
# 291
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 292
} 
# 294
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 295
{ 
# 296
int e = (((int)sizeof(int)) * 8); 
# 298
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 299
} 
# 301
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 302
{ 
# 303
int e = (((int)sizeof(unsigned)) * 8); 
# 305
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 306
} 
# 308
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 309
{ 
# 310
int e = (((int)sizeof(int)) * 8); 
# 312
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 313
} 
# 315
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 316
{ 
# 317
int e = (((int)sizeof(unsigned)) * 8); 
# 319
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 320
} 
# 322
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 323
{ 
# 324
int e = (((int)sizeof(int)) * 8); 
# 326
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 327
} 
# 329
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 330
{ 
# 331
int e = (((int)sizeof(unsigned)) * 8); 
# 333
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 334
} 
# 396 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 397
{ 
# 398
int e = (((int)sizeof(float)) * 8); 
# 400
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 401
} 
# 403
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 404
{ 
# 405
int e = (((int)sizeof(float)) * 8); 
# 407
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 408
} 
# 410
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 411
{ 
# 412
int e = (((int)sizeof(float)) * 8); 
# 414
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 415
} 
# 417
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 418
{ 
# 419
int e = (((int)sizeof(float)) * 8); 
# 421
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 422
} 
# 424
static inline cudaChannelFormatDesc cudaCreateChannelDescNV12() 
# 425
{ 
# 426
int e = (((int)sizeof(char)) * 8); 
# 428
return cudaCreateChannelDesc(e, e, e, 0, cudaChannelFormatKindNV12); 
# 429
} 
# 431
template< cudaChannelFormatKind > inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 432
{ 
# 433
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 434
} 
# 437
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X1> () 
# 438
{ 
# 439
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedNormalized8X1); 
# 440
} 
# 442
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X2> () 
# 443
{ 
# 444
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedNormalized8X2); 
# 445
} 
# 447
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X4> () 
# 448
{ 
# 449
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindSignedNormalized8X4); 
# 450
} 
# 453
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X1> () 
# 454
{ 
# 455
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized8X1); 
# 456
} 
# 458
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X2> () 
# 459
{ 
# 460
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedNormalized8X2); 
# 461
} 
# 463
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X4> () 
# 464
{ 
# 465
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedNormalized8X4); 
# 466
} 
# 469
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X1> () 
# 470
{ 
# 471
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindSignedNormalized16X1); 
# 472
} 
# 474
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X2> () 
# 475
{ 
# 476
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindSignedNormalized16X2); 
# 477
} 
# 479
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X4> () 
# 480
{ 
# 481
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindSignedNormalized16X4); 
# 482
} 
# 485
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X1> () 
# 486
{ 
# 487
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized16X1); 
# 488
} 
# 490
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X2> () 
# 491
{ 
# 492
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindUnsignedNormalized16X2); 
# 493
} 
# 495
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X4> () 
# 496
{ 
# 497
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindUnsignedNormalized16X4); 
# 498
} 
# 501
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindNV12> () 
# 502
{ 
# 503
return cudaCreateChannelDesc(8, 8, 8, 0, cudaChannelFormatKindNV12); 
# 504
} 
# 507
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1> () 
# 508
{ 
# 509
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1); 
# 510
} 
# 513
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1SRGB> () 
# 514
{ 
# 515
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1SRGB); 
# 516
} 
# 519
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2> () 
# 520
{ 
# 521
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2); 
# 522
} 
# 525
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2SRGB> () 
# 526
{ 
# 527
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2SRGB); 
# 528
} 
# 531
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3> () 
# 532
{ 
# 533
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3); 
# 534
} 
# 537
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3SRGB> () 
# 538
{ 
# 539
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3SRGB); 
# 540
} 
# 543
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed4> () 
# 544
{ 
# 545
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed4); 
# 546
} 
# 549
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed4> () 
# 550
{ 
# 551
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedBlockCompressed4); 
# 552
} 
# 555
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed5> () 
# 556
{ 
# 557
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed5); 
# 558
} 
# 561
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed5> () 
# 562
{ 
# 563
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedBlockCompressed5); 
# 564
} 
# 567
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed6H> () 
# 568
{ 
# 569
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindUnsignedBlockCompressed6H); 
# 570
} 
# 573
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed6H> () 
# 574
{ 
# 575
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindSignedBlockCompressed6H); 
# 576
} 
# 579
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7> () 
# 580
{ 
# 581
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7); 
# 582
} 
# 585
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7SRGB> () 
# 586
{ 
# 587
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7SRGB); 
# 588
} 
# 79 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 73 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_functions.h"
static inline char1 make_char1(signed char x); 
# 75
static inline uchar1 make_uchar1(unsigned char x); 
# 77
static inline char2 make_char2(signed char x, signed char y); 
# 79
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 81
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 83
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 85
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 87
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 89
static inline short1 make_short1(short x); 
# 91
static inline ushort1 make_ushort1(unsigned short x); 
# 93
static inline short2 make_short2(short x, short y); 
# 95
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 97
static inline short3 make_short3(short x, short y, short z); 
# 99
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 101
static inline short4 make_short4(short x, short y, short z, short w); 
# 103
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 105
static inline int1 make_int1(int x); 
# 107
static inline uint1 make_uint1(unsigned x); 
# 109
static inline int2 make_int2(int x, int y); 
# 111
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 113
static inline int3 make_int3(int x, int y, int z); 
# 115
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 117
static inline int4 make_int4(int x, int y, int z, int w); 
# 119
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 121
static inline long1 make_long1(long x); 
# 123
static inline ulong1 make_ulong1(unsigned long x); 
# 125
static inline long2 make_long2(long x, long y); 
# 127
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 129
static inline long3 make_long3(long x, long y, long z); 
# 131
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 133
static inline long4 make_long4(long x, long y, long z, long w); 
# 135
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 137
static inline float1 make_float1(float x); 
# 139
static inline float2 make_float2(float x, float y); 
# 141
static inline float3 make_float3(float x, float y, float z); 
# 143
static inline float4 make_float4(float x, float y, float z, float w); 
# 145
static inline longlong1 make_longlong1(long long x); 
# 147
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 149
static inline longlong2 make_longlong2(long long x, long long y); 
# 151
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 153
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 155
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 157
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 159
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 161
static inline double1 make_double1(double x); 
# 163
static inline double2 make_double2(double x, double y); 
# 165
static inline double3 make_double3(double x, double y, double z); 
# 167
static inline double4 make_double4(double x, double y, double z, double w); 
# 73 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/vector_functions.hpp"
static inline char1 make_char1(signed char x) 
# 74
{ 
# 75
char1 t; (t.x) = x; return t; 
# 76
} 
# 78
static inline uchar1 make_uchar1(unsigned char x) 
# 79
{ 
# 80
uchar1 t; (t.x) = x; return t; 
# 81
} 
# 83
static inline char2 make_char2(signed char x, signed char y) 
# 84
{ 
# 85
char2 t; (t.x) = x; (t.y) = y; return t; 
# 86
} 
# 88
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 89
{ 
# 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 91
} 
# 93
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 94
{ 
# 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 96
} 
# 98
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 99
{ 
# 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 101
} 
# 103
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 104
{ 
# 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 106
} 
# 108
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 109
{ 
# 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 111
} 
# 113
static inline short1 make_short1(short x) 
# 114
{ 
# 115
short1 t; (t.x) = x; return t; 
# 116
} 
# 118
static inline ushort1 make_ushort1(unsigned short x) 
# 119
{ 
# 120
ushort1 t; (t.x) = x; return t; 
# 121
} 
# 123
static inline short2 make_short2(short x, short y) 
# 124
{ 
# 125
short2 t; (t.x) = x; (t.y) = y; return t; 
# 126
} 
# 128
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 129
{ 
# 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 131
} 
# 133
static inline short3 make_short3(short x, short y, short z) 
# 134
{ 
# 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 136
} 
# 138
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 139
{ 
# 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 141
} 
# 143
static inline short4 make_short4(short x, short y, short z, short w) 
# 144
{ 
# 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 146
} 
# 148
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 149
{ 
# 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 151
} 
# 153
static inline int1 make_int1(int x) 
# 154
{ 
# 155
int1 t; (t.x) = x; return t; 
# 156
} 
# 158
static inline uint1 make_uint1(unsigned x) 
# 159
{ 
# 160
uint1 t; (t.x) = x; return t; 
# 161
} 
# 163
static inline int2 make_int2(int x, int y) 
# 164
{ 
# 165
int2 t; (t.x) = x; (t.y) = y; return t; 
# 166
} 
# 168
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 169
{ 
# 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 171
} 
# 173
static inline int3 make_int3(int x, int y, int z) 
# 174
{ 
# 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 176
} 
# 178
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 179
{ 
# 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 181
} 
# 183
static inline int4 make_int4(int x, int y, int z, int w) 
# 184
{ 
# 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 186
} 
# 188
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 189
{ 
# 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 191
} 
# 193
static inline long1 make_long1(long x) 
# 194
{ 
# 195
long1 t; (t.x) = x; return t; 
# 196
} 
# 198
static inline ulong1 make_ulong1(unsigned long x) 
# 199
{ 
# 200
ulong1 t; (t.x) = x; return t; 
# 201
} 
# 203
static inline long2 make_long2(long x, long y) 
# 204
{ 
# 205
long2 t; (t.x) = x; (t.y) = y; return t; 
# 206
} 
# 208
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 209
{ 
# 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 211
} 
# 213
static inline long3 make_long3(long x, long y, long z) 
# 214
{ 
# 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 216
} 
# 218
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 219
{ 
# 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 221
} 
# 223
static inline long4 make_long4(long x, long y, long z, long w) 
# 224
{ 
# 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 226
} 
# 228
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 229
{ 
# 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 231
} 
# 233
static inline float1 make_float1(float x) 
# 234
{ 
# 235
float1 t; (t.x) = x; return t; 
# 236
} 
# 238
static inline float2 make_float2(float x, float y) 
# 239
{ 
# 240
float2 t; (t.x) = x; (t.y) = y; return t; 
# 241
} 
# 243
static inline float3 make_float3(float x, float y, float z) 
# 244
{ 
# 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 246
} 
# 248
static inline float4 make_float4(float x, float y, float z, float w) 
# 249
{ 
# 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 251
} 
# 253
static inline longlong1 make_longlong1(long long x) 
# 254
{ 
# 255
longlong1 t; (t.x) = x; return t; 
# 256
} 
# 258
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 259
{ 
# 260
ulonglong1 t; (t.x) = x; return t; 
# 261
} 
# 263
static inline longlong2 make_longlong2(long long x, long long y) 
# 264
{ 
# 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 266
} 
# 268
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 269
{ 
# 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 271
} 
# 273
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 274
{ 
# 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 276
} 
# 278
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 279
{ 
# 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 281
} 
# 283
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 284
{ 
# 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 286
} 
# 288
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 289
{ 
# 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 291
} 
# 293
static inline double1 make_double1(double x) 
# 294
{ 
# 295
double1 t; (t.x) = x; return t; 
# 296
} 
# 298
static inline double2 make_double2(double x, double y) 
# 299
{ 
# 300
double2 t; (t.x) = x; (t.y) = y; return t; 
# 301
} 
# 303
static inline double3 make_double3(double x, double y, double z) 
# 304
{ 
# 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 306
} 
# 308
static inline double4 make_double4(double x, double y, double z, double w) 
# 309
{ 
# 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 311
} 
# 27 "/usr/include/string.h" 3
extern "C" {
# 42 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 43
 __attribute((__nonnull__(1, 2))); 
# 46
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 47
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 62
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 65
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 66
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 70
extern "C++" {
# 72
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 73
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 74
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 75
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 90 "/usr/include/string.h" 3
}
# 101
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 104
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 115
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 125
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 126
 __attribute((__nonnull__(1, 2))); 
# 128
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 130
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 136
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 140
extern int strcmp(const char * __s1, const char * __s2) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 143
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern int strcoll(const char * __s1, const char * __s2) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 152
 __attribute((__nonnull__(2))); 
# 39 "/usr/include/xlocale.h" 3
typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; 
# 42
typedef __locale_t locale_t; 
# 162 "/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, __locale_t __l) throw()
# 163
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 165
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, __locale_t __l) throw()
# 166
 __attribute((__nonnull__(2, 4))); 
# 172
extern char *strdup(const char * __s) throw()
# 173
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 180
extern char *strndup(const char * __string, size_t __n) throw()
# 181
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 210 "/usr/include/string.h" 3
extern "C++" {
# 212
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 213
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 214
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 215
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 230 "/usr/include/string.h" 3
}
# 237
extern "C++" {
# 239
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 240
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 241
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 242
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 257 "/usr/include/string.h" 3
}
# 268
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 269
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 270
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 271
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 281
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 282
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 285
extern size_t strspn(const char * __s, const char * __accept) throw()
# 286
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 289
extern "C++" {
# 291
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 292
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 293
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 294
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 309 "/usr/include/string.h" 3
}
# 316
extern "C++" {
# 318
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 319
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 320
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 321
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 336 "/usr/include/string.h" 3
}
# 344
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 345
 __attribute((__nonnull__(2))); 
# 350
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 353
 __attribute((__nonnull__(2, 3))); 
# 355
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 357
 __attribute((__nonnull__(2, 3))); 
# 363
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 364
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 365
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 367
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 378 "/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 380
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 384
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 386
 __attribute((__nonnull__(1, 2))); 
# 387
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 389
 __attribute((__nonnull__(1, 2))); 
# 395
extern size_t strlen(const char * __s) throw()
# 396
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 402
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 403
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 409
extern char *strerror(int __errnum) throw(); 
# 434 "/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 435
 __attribute((__nonnull__(2))); 
# 441
extern char *strerror_l(int __errnum, __locale_t __l) throw(); 
# 447
extern void __bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 451
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 452
 __attribute((__nonnull__(1, 2))); 
# 455
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 458
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 459
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 463
extern "C++" {
# 465
extern char *index(char * __s, int __c) throw() __asm__("index")
# 466
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 467
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 468
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 483 "/usr/include/string.h" 3
}
# 491
extern "C++" {
# 493
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 494
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 495
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 496
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 511 "/usr/include/string.h" 3
}
# 519
extern int ffs(int __i) throw() __attribute((const)); 
# 524
extern int ffsl(long __l) throw() __attribute((const)); 
# 526
__extension__ extern int ffsll(long long __ll) throw()
# 527
 __attribute((const)); 
# 532
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 533
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 536
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 537
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 543
extern int strcasecmp_l(const char * __s1, const char * __s2, __locale_t __loc) throw()
# 545
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 547
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, __locale_t __loc) throw()
# 549
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 555
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 557
 __attribute((__nonnull__(1, 2))); 
# 562
extern char *strsignal(int __sig) throw(); 
# 565
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 566
 __attribute((__nonnull__(1, 2))); 
# 567
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 568
 __attribute((__nonnull__(1, 2))); 
# 572
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 574
 __attribute((__nonnull__(1, 2))); 
# 575
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 577
 __attribute((__nonnull__(1, 2))); 
# 582
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 583
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 586
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 589
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 597
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 598
 __attribute((__nonnull__(1))); 
# 599
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 600
 __attribute((__nonnull__(1))); 
# 642 "/usr/include/string.h" 3
}
# 29 "/usr/include/time.h" 3
extern "C" {
# 30 "/usr/include/bits/types.h" 3
typedef unsigned char __u_char; 
# 31
typedef unsigned short __u_short; 
# 32
typedef unsigned __u_int; 
# 33
typedef unsigned long __u_long; 
# 36
typedef signed char __int8_t; 
# 37
typedef unsigned char __uint8_t; 
# 38
typedef signed short __int16_t; 
# 39
typedef unsigned short __uint16_t; 
# 40
typedef signed int __int32_t; 
# 41
typedef unsigned __uint32_t; 
# 43
typedef signed long __int64_t; 
# 44
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
# 53
typedef unsigned long __u_quad_t; 
# 133 "/usr/include/bits/types.h" 3
typedef unsigned long __dev_t; 
# 134
typedef unsigned __uid_t; 
# 135
typedef unsigned __gid_t; 
# 136
typedef unsigned long __ino_t; 
# 137
typedef unsigned long __ino64_t; 
# 138
typedef unsigned __mode_t; 
# 139
typedef unsigned long __nlink_t; 
# 140
typedef long __off_t; 
# 141
typedef long __off64_t; 
# 142
typedef int __pid_t; 
# 143
typedef struct { int __val[2]; } __fsid_t; 
# 144
typedef long __clock_t; 
# 145
typedef unsigned long __rlim_t; 
# 146
typedef unsigned long __rlim64_t; 
# 147
typedef unsigned __id_t; 
# 148
typedef long __time_t; 
# 149
typedef unsigned __useconds_t; 
# 150
typedef long __suseconds_t; 
# 152
typedef int __daddr_t; 
# 153
typedef int __key_t; 
# 156
typedef int __clockid_t; 
# 159
typedef void *__timer_t; 
# 162
typedef long __blksize_t; 
# 167
typedef long __blkcnt_t; 
# 168
typedef long __blkcnt64_t; 
# 171
typedef unsigned long __fsblkcnt_t; 
# 172
typedef unsigned long __fsblkcnt64_t; 
# 175
typedef unsigned long __fsfilcnt_t; 
# 176
typedef unsigned long __fsfilcnt64_t; 
# 179
typedef long __fsword_t; 
# 181
typedef long __ssize_t; 
# 184
typedef long __syscall_slong_t; 
# 186
typedef unsigned long __syscall_ulong_t; 
# 190
typedef __off64_t __loff_t; 
# 191
typedef __quad_t *__qaddr_t; 
# 192
typedef char *__caddr_t; 
# 195
typedef long __intptr_t; 
# 198
typedef unsigned __socklen_t; 
# 30 "/usr/include/bits/time.h" 3
struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; 
# 25 "/usr/include/bits/timex.h" 3
struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int:32; int:32; int:32; int:32; 
# 51
int:32; int:32; int:32; int:32; 
# 52
int:32; int:32; int:32; 
# 53
}; 
# 90 "/usr/include/bits/time.h" 3
extern "C" {
# 93
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 95
}
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t; 
# 75 "/usr/include/time.h" 3
typedef __time_t time_t; 
# 91 "/usr/include/time.h" 3
typedef __clockid_t clockid_t; 
# 103 "/usr/include/time.h" 3
typedef __timer_t timer_t; 
# 120 "/usr/include/time.h" 3
struct timespec { 
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; 
# 133
struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; 
# 161
struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; 
# 168
struct sigevent; 
# 174
typedef __pid_t pid_t; 
# 189 "/usr/include/time.h" 3
extern clock_t clock() throw(); 
# 192
extern time_t time(time_t * __timer) throw(); 
# 195
extern double difftime(time_t __time1, time_t __time0) throw()
# 196
 __attribute((const)); 
# 199
extern time_t mktime(tm * __tp) throw(); 
# 205
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 213
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 223
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 230
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, __locale_t __loc) throw(); 
# 239
extern tm *gmtime(const time_t * __timer) throw(); 
# 243
extern tm *localtime(const time_t * __timer) throw(); 
# 249
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 254
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 261
extern char *asctime(const tm * __tp) throw(); 
# 264
extern char *ctime(const time_t * __timer) throw(); 
# 272
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 276
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 282
extern char *__tzname[2]; 
# 283
extern int __daylight; 
# 284
extern long __timezone; 
# 289
extern char *tzname[2]; 
# 293
extern void tzset() throw(); 
# 297
extern int daylight; 
# 298
extern long timezone; 
# 304
extern int stime(const time_t * __when) throw(); 
# 319 "/usr/include/time.h" 3
extern time_t timegm(tm * __tp) throw(); 
# 322
extern time_t timelocal(tm * __tp) throw(); 
# 325
extern int dysize(int __year) throw() __attribute((const)); 
# 334 "/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 339
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 342
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 345
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 353
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 358
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 363
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 368
extern int timer_delete(timer_t __timerid) throw(); 
# 371
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 376
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 380
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 386
extern int timespec_get(timespec * __ts, int __base) throw()
# 387
 __attribute((__nonnull__(1))); 
# 403 "/usr/include/time.h" 3
extern int getdate_err; 
# 412 "/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 426 "/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 430
}
# 88 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
extern "C" {
# 91
extern clock_t clock() throw(); 
# 96 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
extern void *memset(void *, int, size_t) throw(); 
# 97 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
extern void *memcpy(void *, const void *, size_t) throw(); 
# 99 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
}
# 121 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern "C" {
# 219 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int abs(int a) throw(); 
# 227 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long labs(long a) throw(); 
# 235 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llabs(long long a) throw(); 
# 285 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fabs(double x) throw(); 
# 328 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fabsf(float x) throw(); 
# 338 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline int min(const int a, const int b); 
# 345
extern inline unsigned umin(const unsigned a, const unsigned b); 
# 352
extern inline long long llmin(const long long a, const long long b); 
# 359
extern inline unsigned long long ullmin(const unsigned long long a, const unsigned long long b); 
# 380 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fminf(float x, float y) throw(); 
# 400 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fmin(double x, double y) throw(); 
# 413 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline int max(const int a, const int b); 
# 421
extern inline unsigned umax(const unsigned a, const unsigned b); 
# 428
extern inline long long llmax(const long long a, const long long b); 
# 435
extern inline unsigned long long ullmax(const unsigned long long a, const unsigned long long b); 
# 456 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fmaxf(float x, float y) throw(); 
# 476 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fmax(double, double) throw(); 
# 520 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sin(double x) throw(); 
# 553 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cos(double x) throw(); 
# 572 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 588 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 633 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double tan(double x) throw(); 
# 702 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sqrt(double x) throw(); 
# 774 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rsqrt(double x); 
# 844 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rsqrtf(float x); 
# 900 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log2(double x) throw(); 
# 965 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double exp2(double x) throw(); 
# 1030 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float exp2f(float x) throw(); 
# 1097 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double exp10(double x) throw(); 
# 1160 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float exp10f(float x) throw(); 
# 1253 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double expm1(double x) throw(); 
# 1345 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float expm1f(float x) throw(); 
# 1401 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float log2f(float x) throw(); 
# 1455 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log10(double x) throw(); 
# 1525 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log(double x) throw(); 
# 1621 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log1p(double x) throw(); 
# 1720 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float log1pf(float x) throw(); 
# 1784 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double floor(double x) throw(); 
# 1863 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double exp(double x) throw(); 
# 1904 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cosh(double x) throw(); 
# 1954 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sinh(double x) throw(); 
# 2004 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double tanh(double x) throw(); 
# 2059 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double acosh(double x) throw(); 
# 2117 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float acoshf(float x) throw(); 
# 2170 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double asinh(double x) throw(); 
# 2223 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float asinhf(float x) throw(); 
# 2277 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double atanh(double x) throw(); 
# 2331 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float atanhf(float x) throw(); 
# 2380 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double ldexp(double x, int exp) throw(); 
# 2426 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float ldexpf(float x, int exp) throw(); 
# 2478 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double logb(double x) throw(); 
# 2533 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float logbf(float x) throw(); 
# 2573 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int ilogb(double x) throw(); 
# 2613 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int ilogbf(float x) throw(); 
# 2689 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double scalbn(double x, int n) throw(); 
# 2765 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float scalbnf(float x, int n) throw(); 
# 2841 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double scalbln(double x, long n) throw(); 
# 2917 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float scalblnf(float x, long n) throw(); 
# 2994 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double frexp(double x, int * nptr) throw(); 
# 3068 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float frexpf(float x, int * nptr) throw(); 
# 3120 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double round(double x) throw(); 
# 3175 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float roundf(float x) throw(); 
# 3193 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lround(double x) throw(); 
# 3211 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lroundf(float x) throw(); 
# 3229 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llround(double x) throw(); 
# 3247 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llroundf(float x) throw(); 
# 3375 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rintf(float x) throw(); 
# 3392 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lrint(double x) throw(); 
# 3409 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lrintf(float x) throw(); 
# 3426 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llrint(double x) throw(); 
# 3443 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llrintf(float x) throw(); 
# 3496 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double nearbyint(double x) throw(); 
# 3549 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float nearbyintf(float x) throw(); 
# 3611 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double ceil(double x) throw(); 
# 3661 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double trunc(double x) throw(); 
# 3714 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float truncf(float x) throw(); 
# 3740 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fdim(double x, double y) throw(); 
# 3766 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fdimf(float x, float y) throw(); 
# 4066 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double atan2(double y, double x) throw(); 
# 4137 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double atan(double x) throw(); 
# 4160 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double acos(double x) throw(); 
# 4211 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double asin(double x) throw(); 
# 4279 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double hypot(double x, double y) throw(); 
# 4402 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float hypotf(float x, float y) throw(); 
# 5188 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cbrt(double x) throw(); 
# 5274 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cbrtf(float x) throw(); 
# 5329 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rcbrt(double x); 
# 5379 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rcbrtf(float x); 
# 5439 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sinpi(double x); 
# 5499 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sinpif(float x); 
# 5551 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cospi(double x); 
# 5603 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cospif(float x); 
# 5633 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincospi(double x, double * sptr, double * cptr); 
# 5663 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincospif(float x, float * sptr, float * cptr); 
# 5996 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double pow(double x, double y) throw(); 
# 6052 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double modf(double x, double * iptr) throw(); 
# 6111 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fmod(double x, double y) throw(); 
# 6207 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double remainder(double x, double y) throw(); 
# 6306 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float remainderf(float x, float y) throw(); 
# 6378 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double remquo(double x, double y, int * quo) throw(); 
# 6450 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float remquof(float x, float y, int * quo) throw(); 
# 6491 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double j0(double x) throw(); 
# 6533 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float j0f(float x) throw(); 
# 6602 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double j1(double x) throw(); 
# 6671 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float j1f(float x) throw(); 
# 6714 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double jn(int n, double x) throw(); 
# 6757 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float jnf(int n, float x) throw(); 
# 6818 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double y0(double x) throw(); 
# 6879 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float y0f(float x) throw(); 
# 6940 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double y1(double x) throw(); 
# 7001 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float y1f(float x) throw(); 
# 7064 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double yn(int n, double x) throw(); 
# 7127 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float ynf(int n, float x) throw(); 
# 7316 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erf(double x) throw(); 
# 7398 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erff(float x) throw(); 
# 7470 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfinv(double x); 
# 7535 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfinvf(float x); 
# 7574 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfc(double x) throw(); 
# 7612 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfcf(float x) throw(); 
# 7729 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double lgamma(double x) throw(); 
# 7791 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfcinv(double x); 
# 7846 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfcinvf(float x); 
# 7914 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double normcdfinv(double x); 
# 7982 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float normcdfinvf(float x); 
# 8025 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double normcdf(double x); 
# 8068 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float normcdff(float x); 
# 8132 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfcx(double x); 
# 8196 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfcxf(float x); 
# 8315 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float lgammaf(float x) throw(); 
# 8413 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double tgamma(double x) throw(); 
# 8511 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float tgammaf(float x) throw(); 
# 8524 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double copysign(double x, double y) throw(); 
# 8537 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float copysignf(float x, float y) throw(); 
# 8556 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double nextafter(double x, double y) throw(); 
# 8575 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float nextafterf(float x, float y) throw(); 
# 8591 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double nan(const char * tagp) throw(); 
# 8607 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float nanf(const char * tagp) throw(); 
# 8614 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isinff(float) throw(); 
# 8615 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isnanf(float) throw(); 
# 8625 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __finite(double) throw(); 
# 8626 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __finitef(float) throw(); 
# 8627 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __signbit(double) throw(); 
# 8628 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isnan(double) throw(); 
# 8629 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isinf(double) throw(); 
# 8632 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __signbitf(float) throw(); 
# 8791 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fma(double x, double y, double z) throw(); 
# 8949 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fmaf(float x, float y, float z) throw(); 
# 8960 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __signbitl(long double) throw(); 
# 8966 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __finitel(long double) throw(); 
# 8967 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isinfl(long double) throw(); 
# 8968 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isnanl(long double) throw(); 
# 9018 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float acosf(float x) throw(); 
# 9077 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float asinf(float x) throw(); 
# 9157 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float atanf(float x) throw(); 
# 9454 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float atan2f(float y, float x) throw(); 
# 9488 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cosf(float x) throw(); 
# 9530 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sinf(float x) throw(); 
# 9572 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float tanf(float x) throw(); 
# 9613 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float coshf(float x) throw(); 
# 9663 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sinhf(float x) throw(); 
# 9713 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float tanhf(float x) throw(); 
# 9765 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float logf(float x) throw(); 
# 9845 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float expf(float x) throw(); 
# 9897 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float log10f(float x) throw(); 
# 9952 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float modff(float x, float * iptr) throw(); 
# 10282 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float powf(float x, float y) throw(); 
# 10351 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sqrtf(float x) throw(); 
# 10410 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float ceilf(float x) throw(); 
# 10471 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float floorf(float x) throw(); 
# 10529 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fmodf(float x, float y) throw(); 
# 10544 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
}
# 278 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/ppc64le-redhat-linux/bits/c++config.h" 3
namespace std { 
# 280
typedef unsigned long size_t; 
# 281
typedef long ptrdiff_t; 
# 284
typedef __decltype((nullptr)) nullptr_t; 
# 286
}
# 454 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/ppc64le-redhat-linux/bits/c++config.h" 3
namespace std { 
# 456
inline namespace __gnu_cxx_ldbl128 { }
# 457
}
# 67 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/cpp_type_traits.h" 3
extern "C++" {
# 69
namespace std __attribute((__visibility__("default"))) { 
# 73
struct __true_type { }; 
# 74
struct __false_type { }; 
# 76
template< bool > 
# 77
struct __truth_type { 
# 78
typedef __false_type __type; }; 
# 81
template<> struct __truth_type< true>  { 
# 82
typedef __true_type __type; }; 
# 86
template< class _Sp, class _Tp> 
# 87
struct __traitor { 
# 89
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 90
typedef typename __truth_type< __value> ::__type __type; 
# 91
}; 
# 94
template< class , class > 
# 95
struct __are_same { 
# 97
enum { __value}; 
# 98
typedef __false_type __type; 
# 99
}; 
# 101
template< class _Tp> 
# 102
struct __are_same< _Tp, _Tp>  { 
# 104
enum { __value = 1}; 
# 105
typedef __true_type __type; 
# 106
}; 
# 109
template< class _Tp> 
# 110
struct __is_void { 
# 112
enum { __value}; 
# 113
typedef __false_type __type; 
# 114
}; 
# 117
template<> struct __is_void< void>  { 
# 119
enum { __value = 1}; 
# 120
typedef __true_type __type; 
# 121
}; 
# 126
template< class _Tp> 
# 127
struct __is_integer { 
# 129
enum { __value}; 
# 130
typedef __false_type __type; 
# 131
}; 
# 138
template<> struct __is_integer< bool>  { 
# 140
enum { __value = 1}; 
# 141
typedef __true_type __type; 
# 142
}; 
# 145
template<> struct __is_integer< char>  { 
# 147
enum { __value = 1}; 
# 148
typedef __true_type __type; 
# 149
}; 
# 152
template<> struct __is_integer< signed char>  { 
# 154
enum { __value = 1}; 
# 155
typedef __true_type __type; 
# 156
}; 
# 159
template<> struct __is_integer< unsigned char>  { 
# 161
enum { __value = 1}; 
# 162
typedef __true_type __type; 
# 163
}; 
# 167
template<> struct __is_integer< wchar_t>  { 
# 169
enum { __value = 1}; 
# 170
typedef __true_type __type; 
# 171
}; 
# 185 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char16_t>  { 
# 187
enum { __value = 1}; 
# 188
typedef __true_type __type; 
# 189
}; 
# 192
template<> struct __is_integer< char32_t>  { 
# 194
enum { __value = 1}; 
# 195
typedef __true_type __type; 
# 196
}; 
# 200
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 287 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 288
struct __is_floating { 
# 290
enum { __value}; 
# 291
typedef __false_type __type; 
# 292
}; 
# 296
template<> struct __is_floating< float>  { 
# 298
enum { __value = 1}; 
# 299
typedef __true_type __type; 
# 300
}; 
# 303
template<> struct __is_floating< double>  { 
# 305
enum { __value = 1}; 
# 306
typedef __true_type __type; 
# 307
}; 
# 310
template<> struct __is_floating< long double>  { 
# 312
enum { __value = 1}; 
# 313
typedef __true_type __type; 
# 314
}; 
# 319
template< class _Tp> 
# 320
struct __is_pointer { 
# 322
enum { __value}; 
# 323
typedef __false_type __type; 
# 324
}; 
# 326
template< class _Tp> 
# 327
struct __is_pointer< _Tp *>  { 
# 329
enum { __value = 1}; 
# 330
typedef __true_type __type; 
# 331
}; 
# 336
template< class _Tp> 
# 337
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 339
}; 
# 344
template< class _Tp> 
# 345
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 347
}; 
# 352
template< class _Tp> 
# 353
struct __is_char { 
# 355
enum { __value}; 
# 356
typedef __false_type __type; 
# 357
}; 
# 360
template<> struct __is_char< char>  { 
# 362
enum { __value = 1}; 
# 363
typedef __true_type __type; 
# 364
}; 
# 368
template<> struct __is_char< wchar_t>  { 
# 370
enum { __value = 1}; 
# 371
typedef __true_type __type; 
# 372
}; 
# 375
template< class _Tp> 
# 376
struct __is_byte { 
# 378
enum { __value}; 
# 379
typedef __false_type __type; 
# 380
}; 
# 383
template<> struct __is_byte< char>  { 
# 385
enum { __value = 1}; 
# 386
typedef __true_type __type; 
# 387
}; 
# 390
template<> struct __is_byte< signed char>  { 
# 392
enum { __value = 1}; 
# 393
typedef __true_type __type; 
# 394
}; 
# 397
template<> struct __is_byte< unsigned char>  { 
# 399
enum { __value = 1}; 
# 400
typedef __true_type __type; 
# 401
}; 
# 423 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/cpp_type_traits.h" 3
template< class > struct iterator_traits; 
# 426
template< class _Tp> 
# 427
struct __is_nonvolatile_trivially_copyable { 
# 429
enum { __value = __is_trivially_copyable(_Tp)}; 
# 430
}; 
# 435
template< class _Tp> 
# 436
struct __is_nonvolatile_trivially_copyable< volatile _Tp>  { 
# 438
enum { __value}; 
# 439
}; 
# 442
template< class _OutputIter, class _InputIter> 
# 443
struct __memcpyable { 
# 445
enum { __value}; 
# 446
}; 
# 448
template< class _Tp> 
# 449
struct __memcpyable< _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 451
}; 
# 453
template< class _Tp> 
# 454
struct __memcpyable< _Tp *, const _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 456
}; 
# 463
template< class _Iter1, class _Iter2> 
# 464
struct __memcmpable { 
# 466
enum { __value}; 
# 467
}; 
# 470
template< class _Tp> 
# 471
struct __memcmpable< _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 473
}; 
# 475
template< class _Tp> 
# 476
struct __memcmpable< const _Tp *, _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 478
}; 
# 480
template< class _Tp> 
# 481
struct __memcmpable< _Tp *, const _Tp *>  : public __is_nonvolatile_trivially_copyable< _Tp>  { 
# 483
}; 
# 491
template< class _Tp, bool _TreatAsBytes = __is_byte< _Tp> ::__value> 
# 498
struct __is_memcmp_ordered { 
# 500
static const bool __value = (((_Tp)(-1)) > ((_Tp)1)); 
# 501
}; 
# 503
template< class _Tp> 
# 504
struct __is_memcmp_ordered< _Tp, false>  { 
# 506
static const bool __value = false; 
# 507
}; 
# 510
template< class _Tp, class _Up, bool  = sizeof(_Tp) == sizeof(_Up)> 
# 511
struct __is_memcmp_ordered_with { 
# 513
static const bool __value = (__is_memcmp_ordered< _Tp> ::__value && __is_memcmp_ordered< _Up> ::__value); 
# 515
}; 
# 517
template< class _Tp, class _Up> 
# 518
struct __is_memcmp_ordered_with< _Tp, _Up, false>  { 
# 520
static const bool __value = false; 
# 521
}; 
# 548 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 549
struct __is_move_iterator { 
# 551
enum { __value}; 
# 552
typedef __false_type __type; 
# 553
}; 
# 557
template< class _Iterator> inline _Iterator 
# 560
__miter_base(_Iterator __it) 
# 561
{ return __it; } 
# 564
}
# 565
}
# 37 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/ext/type_traits.h" 3
extern "C++" {
# 39
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 44
template< bool , class > 
# 45
struct __enable_if { 
# 46
}; 
# 48
template< class _Tp> 
# 49
struct __enable_if< true, _Tp>  { 
# 50
typedef _Tp __type; }; 
# 54
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 55
struct __conditional_type { 
# 56
typedef _Iftrue __type; }; 
# 58
template< class _Iftrue, class _Iffalse> 
# 59
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 60
typedef _Iffalse __type; }; 
# 64
template< class _Tp> 
# 65
struct __add_unsigned { 
# 68
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 71
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 72
}; 
# 75
template<> struct __add_unsigned< char>  { 
# 76
typedef unsigned char __type; }; 
# 79
template<> struct __add_unsigned< signed char>  { 
# 80
typedef unsigned char __type; }; 
# 83
template<> struct __add_unsigned< short>  { 
# 84
typedef unsigned short __type; }; 
# 87
template<> struct __add_unsigned< int>  { 
# 88
typedef unsigned __type; }; 
# 91
template<> struct __add_unsigned< long>  { 
# 92
typedef unsigned long __type; }; 
# 95
template<> struct __add_unsigned< long long>  { 
# 96
typedef unsigned long long __type; }; 
# 100
template<> struct __add_unsigned< bool> ; 
# 103
template<> struct __add_unsigned< wchar_t> ; 
# 107
template< class _Tp> 
# 108
struct __remove_unsigned { 
# 111
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 114
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 115
}; 
# 118
template<> struct __remove_unsigned< char>  { 
# 119
typedef signed char __type; }; 
# 122
template<> struct __remove_unsigned< unsigned char>  { 
# 123
typedef signed char __type; }; 
# 126
template<> struct __remove_unsigned< unsigned short>  { 
# 127
typedef short __type; }; 
# 130
template<> struct __remove_unsigned< unsigned>  { 
# 131
typedef int __type; }; 
# 134
template<> struct __remove_unsigned< unsigned long>  { 
# 135
typedef long __type; }; 
# 138
template<> struct __remove_unsigned< unsigned long long>  { 
# 139
typedef long long __type; }; 
# 143
template<> struct __remove_unsigned< bool> ; 
# 146
template<> struct __remove_unsigned< wchar_t> ; 
# 150
template< class _Type> inline bool 
# 152
__is_null_pointer(_Type *__ptr) 
# 153
{ return __ptr == 0; } 
# 155
template< class _Type> inline bool 
# 157
__is_null_pointer(_Type) 
# 158
{ return false; } 
# 162
inline bool __is_null_pointer(std::nullptr_t) 
# 163
{ return true; } 
# 168
template< class _Tp, bool  = std::template __is_integer< _Tp> ::__value> 
# 169
struct __promote { 
# 170
typedef double __type; }; 
# 175
template< class _Tp> 
# 176
struct __promote< _Tp, false>  { 
# 177
}; 
# 180
template<> struct __promote< long double>  { 
# 181
typedef long double __type; }; 
# 184
template<> struct __promote< double>  { 
# 185
typedef double __type; }; 
# 188
template<> struct __promote< float>  { 
# 189
typedef float __type; }; 
# 196
template< class _Tp, class _Up, class 
# 197
_Tp2 = typename __promote< _Tp> ::__type, class 
# 198
_Up2 = typename __promote< _Up> ::__type> 
# 199
struct __promote_2 { 
# 201
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 202
}; 
# 204
template< class _Tp, class _Up, class _Vp, class 
# 205
_Tp2 = typename __promote< _Tp> ::__type, class 
# 206
_Up2 = typename __promote< _Up> ::__type, class 
# 207
_Vp2 = typename __promote< _Vp> ::__type> 
# 208
struct __promote_3 { 
# 210
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 211
}; 
# 213
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 214
_Tp2 = typename __promote< _Tp> ::__type, class 
# 215
_Up2 = typename __promote< _Up> ::__type, class 
# 216
_Vp2 = typename __promote< _Vp> ::__type, class 
# 217
_Wp2 = typename __promote< _Wp> ::__type> 
# 218
struct __promote_4 { 
# 220
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 221
}; 
# 224
}
# 225
}
# 29 "/usr/include/math.h" 3
extern "C" {
# 34 "/usr/include/bits/mathdef.h" 3
typedef float float_t; 
# 35
typedef double double_t; 
# 54 "/usr/include/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 56
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 58
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 60
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 63
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 65
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 67
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 72
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 74
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 76
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 81
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 88
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 90
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 92
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 100
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 103
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 106
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 109
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 112
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 115
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 123
extern double pow10(double __x) throw(); extern double __pow10(double __x) throw(); 
# 129
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 132
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 135
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 142
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 145
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 154
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 157
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 163
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 170
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 179
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 182
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 185
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 188
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 193
extern int __isinf(double __value) throw() __attribute((const)); 
# 196
extern int __finite(double __value) throw() __attribute((const)); 
# 202
extern int isinf(double __value) throw() __attribute((const)); 
# 205
extern int finite(double __value) throw() __attribute((const)); 
# 208
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 212
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 218
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 225
extern double nan(const char * __tagb) throw() __attribute((const)); extern double __nan(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnan(double __value) throw() __attribute((const)); 
# 235
extern int isnan(double __value) throw() __attribute((const)); 
# 238
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 239
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 240
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 241
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 242
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 243
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 250
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 251
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 252
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 259
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 265
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 272
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 280
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 283
extern double nextafter(double __x, double __y) throw() __attribute((const)); extern double __nextafter(double __x, double __y) throw() __attribute((const)); 
# 285
extern double nexttoward(double __x, long double __y) throw() __attribute((const)); extern double __nexttoward(double __x, long double __y) throw() __attribute((const)); 
# 289
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 293
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 297
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 302
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 306
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 310
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 314
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 319
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 326
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 327
extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 331
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 332
extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 336
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 339
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 342
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 346
extern int __fpclassify(double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbit(double __value) throw()
# 351
 __attribute((const)); 
# 355
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 364
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 54 "/usr/include/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 56
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 58
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 60
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 63
extern float cosf(float __x) throw(); 
# 65
extern float sinf(float __x) throw(); 
# 67
extern float tanf(float __x) throw(); 
# 72
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 74
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 76
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 81
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 88
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 90
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 92
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 100
extern float expf(float __x) throw(); 
# 103
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 106
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 109
extern float logf(float __x) throw(); 
# 112
extern float log10f(float __x) throw(); 
# 115
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern float exp10f(float __x) throw(); 
# 123
extern float pow10f(float __x) throw(); extern float __pow10f(float __x) throw(); 
# 129
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 132
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 135
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 142
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 145
extern float log2f(float __x) throw(); 
# 154
extern float powf(float __x, float __y) throw(); 
# 157
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 163
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 170
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 179
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 182
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 185
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 188
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 193
extern int __isinff(float __value) throw() __attribute((const)); 
# 196
extern int __finitef(float __value) throw() __attribute((const)); 
# 202
extern int isinff(float __value) throw() __attribute((const)); 
# 205
extern int finitef(float __value) throw() __attribute((const)); 
# 208
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 212
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 218
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 225
extern float nanf(const char * __tagb) throw() __attribute((const)); extern float __nanf(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanf(float __value) throw() __attribute((const)); 
# 235
extern int isnanf(float __value) throw() __attribute((const)); 
# 238
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 239
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 240
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 241
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 242
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 243
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 250
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 251
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 252
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 259
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 265
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 272
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 280
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 283
extern float nextafterf(float __x, float __y) throw() __attribute((const)); extern float __nextafterf(float __x, float __y) throw() __attribute((const)); 
# 285
extern float nexttowardf(float __x, long double __y) throw() __attribute((const)); extern float __nexttowardf(float __x, long double __y) throw() __attribute((const)); 
# 289
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 293
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 297
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 302
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 306
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 310
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 314
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 319
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 326
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 327
extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 331
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 332
extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 336
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 339
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 342
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyf(float __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitf(float __value) throw()
# 351
 __attribute((const)); 
# 355
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 364
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 54 "/usr/include/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 56
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 58
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 60
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 63
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 65
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 67
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 72
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 74
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 76
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 81
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 88
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 90
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 92
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 100
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 103
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 106
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 109
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 112
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 115
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 123
extern long double pow10l(long double __x) throw(); extern long double __pow10l(long double __x) throw(); 
# 129
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 132
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 135
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 142
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 145
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 154
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 157
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 163
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 170
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 179
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 182
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 185
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 188
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 193
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 196
extern int __finitel(long double __value) throw() __attribute((const)); 
# 202
extern int isinfl(long double __value) throw() __attribute((const)); 
# 205
extern int finitel(long double __value) throw() __attribute((const)); 
# 208
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 212
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 218
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 225
extern long double nanl(const char * __tagb) throw() __attribute((const)); extern long double __nanl(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 235
extern int isnanl(long double __value) throw() __attribute((const)); 
# 238
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 239
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 240
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 241
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 242
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 243
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 250
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 251
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 252
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 259
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 265
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 272
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 280
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 283
extern long double nextafterl(long double __x, long double __y) throw() __attribute((const)); extern long double __nextafterl(long double __x, long double __y) throw() __attribute((const)); 
# 285
extern long double nexttowardl(long double __x, long double __y) throw() __attribute((const)); extern long double __nexttowardl(long double __x, long double __y) throw() __attribute((const)); 
# 289
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 293
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 297
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 302
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 306
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 310
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 314
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 319
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 326
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 327
extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 331
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 332
extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 336
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 339
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 342
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyl(long double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitl(long double __value) throw()
# 351
 __attribute((const)); 
# 355
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 364
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 149 "/usr/include/math.h" 3
extern int signgam; 
# 191 "/usr/include/math.h" 3
enum { 
# 192
FP_NAN, 
# 195
FP_INFINITE, 
# 198
FP_ZERO, 
# 201
FP_SUBNORMAL, 
# 204
FP_NORMAL
# 207
}; 
# 295 "/usr/include/math.h" 3
typedef 
# 289
enum { 
# 290
_IEEE_ = (-1), 
# 291
_SVID_ = 0, 
# 292
_XOPEN_, 
# 293
_POSIX_, 
# 294
_ISOC_
# 295
} _LIB_VERSION_TYPE; 
# 300
extern _LIB_VERSION_TYPE _LIB_VERSION; 
# 311 "/usr/include/math.h" 3
struct __exception { 
# 316
int type; 
# 317
char *name; 
# 318
double arg1; 
# 319
double arg2; 
# 320
double retval; 
# 321
}; 
# 324
extern int matherr(__exception * __exc) throw(); 
# 475 "/usr/include/math.h" 3
}
# 34 "/usr/include/stdlib.h" 3
extern "C" {
# 44 "/usr/include/bits/byteswap.h" 3
static inline unsigned __bswap_32(unsigned __bsx) 
# 45
{ 
# 46
return __builtin_bswap32(__bsx); 
# 47
} 
# 75 "/usr/include/bits/byteswap.h" 3
static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 76
{ 
# 77
return __builtin_bswap64(__bsx); 
# 78
} 
# 66 "/usr/include/bits/waitstatus.h" 3
union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig:7; 
# 73
unsigned __w_coredump:1; 
# 74
unsigned __w_retcode:8; 
# 75
unsigned:16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval:8; 
# 88
unsigned __w_stopsig:8; 
# 89
unsigned:16; 
# 96
} __wait_stopped; 
# 97
}; 
# 101 "/usr/include/stdlib.h" 3
typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; 
# 109
typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; 
# 121
__extension__ typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; 
# 139 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() throw(); 
# 144
extern double atof(const char * __nptr) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 147
extern int atoi(const char * __nptr) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 150
extern long atol(const char * __nptr) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 157
__extension__ extern long long atoll(const char * __nptr) throw()
# 158
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 164
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 172
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 173
 __attribute((__nonnull__(1))); 
# 175
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 177
 __attribute((__nonnull__(1))); 
# 183
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 185
 __attribute((__nonnull__(1))); 
# 187
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 195
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 197
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 209
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 211
 __attribute((__nonnull__(1))); 
# 214
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 216
 __attribute((__nonnull__(1))); 
# 239 "/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 241
 __attribute((__nonnull__(1, 4))); 
# 243
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 246
 __attribute((__nonnull__(1, 4))); 
# 249
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 252
 __attribute((__nonnull__(1, 4))); 
# 255
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 258
 __attribute((__nonnull__(1, 4))); 
# 260
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 262
 __attribute((__nonnull__(1, 3))); 
# 264
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 266
 __attribute((__nonnull__(1, 3))); 
# 268
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 271
 __attribute((__nonnull__(1, 3))); 
# 305 "/usr/include/stdlib.h" 3
extern char *l64a(long __n) throw(); 
# 308
extern long a64l(const char * __s) throw()
# 309
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 44
typedef __loff_t loff_t; 
# 48
typedef __ino_t ino_t; 
# 55
typedef __ino64_t ino64_t; 
# 60
typedef __dev_t dev_t; 
# 65
typedef __gid_t gid_t; 
# 70
typedef __mode_t mode_t; 
# 75
typedef __nlink_t nlink_t; 
# 80
typedef __uid_t uid_t; 
# 86
typedef __off_t off_t; 
# 93
typedef __off64_t off64_t; 
# 104 "/usr/include/sys/types.h" 3
typedef __id_t id_t; 
# 109
typedef __ssize_t ssize_t; 
# 115
typedef __daddr_t daddr_t; 
# 116
typedef __caddr_t caddr_t; 
# 122
typedef __key_t key_t; 
# 136 "/usr/include/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 140
typedef __suseconds_t suseconds_t; 
# 150 "/usr/include/sys/types.h" 3
typedef unsigned long ulong; 
# 151
typedef unsigned short ushort; 
# 152
typedef unsigned uint; 
# 194 "/usr/include/sys/types.h" 3
typedef signed char int8_t __attribute((__mode__(__QI__))); 
# 195
typedef short int16_t __attribute((__mode__(__HI__))); 
# 196
typedef int int32_t __attribute((__mode__(__SI__))); 
# 197
typedef long int64_t __attribute((__mode__(__DI__))); 
# 200
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
# 201
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
# 202
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
# 203
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 
# 205
typedef long register_t __attribute((__mode__(__word__))); 
# 23 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t; 
# 31
typedef 
# 29
struct { 
# 30
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 31
} __sigset_t; 
# 37 "/usr/include/sys/select.h" 3
typedef __sigset_t sigset_t; 
# 54 "/usr/include/sys/select.h" 3
typedef long __fd_mask; 
# 75 "/usr/include/sys/select.h" 3
typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 75
} fd_set; 
# 82
typedef __fd_mask fd_mask; 
# 96 "/usr/include/sys/select.h" 3
extern "C" {
# 106 "/usr/include/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 118 "/usr/include/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 131 "/usr/include/sys/select.h" 3
}
# 29 "/usr/include/sys/sysmacros.h" 3
extern "C" {
# 32
__extension__ extern unsigned gnu_dev_major(unsigned long long __dev) throw()
# 33
 __attribute((const)); 
# 35
__extension__ extern unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 36
 __attribute((const)); 
# 38
__extension__ extern unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 40
 __attribute((const)); 
# 63 "/usr/include/sys/sysmacros.h" 3
}
# 228 "/usr/include/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 235
typedef __blkcnt_t blkcnt_t; 
# 239
typedef __fsblkcnt_t fsblkcnt_t; 
# 243
typedef __fsfilcnt_t fsfilcnt_t; 
# 262 "/usr/include/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 263
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 264
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 49 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 52
union pthread_attr_t { 
# 54
char __size[56]; 
# 55
long __align; 
# 56
}; 
# 58
typedef pthread_attr_t pthread_attr_t; 
# 68
typedef 
# 64
struct __pthread_internal_list { 
# 66
__pthread_internal_list *__prev; 
# 67
__pthread_internal_list *__next; 
# 68
} __pthread_list_t; 
# 116 "/usr/include/bits/pthreadtypes.h" 3
typedef 
# 80 "/usr/include/bits/pthreadtypes.h" 3
union { 
# 81
struct __pthread_mutex_s { 
# 83
int __lock; 
# 84
unsigned __count; 
# 85
int __owner; 
# 87
unsigned __nusers; 
# 91
int __kind; 
# 93
short __spins; 
# 94
short __elision; 
# 95
__pthread_list_t __list; 
# 113 "/usr/include/bits/pthreadtypes.h" 3
} __data; 
# 114
char __size[40]; 
# 115
long __align; 
# 116
} pthread_mutex_t; 
# 122
typedef 
# 119
union { 
# 120
char __size[4]; 
# 121
int __align; 
# 122
} pthread_mutexattr_t; 
# 142
typedef 
# 128
union { 
# 130
struct { 
# 131
int __lock; 
# 132
unsigned __futex; 
# 133
__extension__ unsigned long long __total_seq; 
# 134
__extension__ unsigned long long __wakeup_seq; 
# 135
__extension__ unsigned long long __woken_seq; 
# 136
void *__mutex; 
# 137
unsigned __nwaiters; 
# 138
unsigned __broadcast_seq; 
# 139
} __data; 
# 140
char __size[48]; 
# 141
__extension__ long long __align; 
# 142
} pthread_cond_t; 
# 148
typedef 
# 145
union { 
# 146
char __size[4]; 
# 147
int __align; 
# 148
} pthread_condattr_t; 
# 152
typedef unsigned pthread_key_t; 
# 156
typedef int pthread_once_t; 
# 201 "/usr/include/bits/pthreadtypes.h" 3
typedef 
# 163 "/usr/include/bits/pthreadtypes.h" 3
union { 
# 166
struct { 
# 167
int __lock; 
# 168
unsigned __nr_readers; 
# 169
unsigned __readers_wakeup; 
# 170
unsigned __writer_wakeup; 
# 171
unsigned __nr_readers_queued; 
# 172
unsigned __nr_writers_queued; 
# 173
int __writer; 
# 174
int __shared; 
# 175
unsigned long __pad1; 
# 176
unsigned long __pad2; 
# 179
unsigned __flags; 
# 180
} __data; 
# 199 "/usr/include/bits/pthreadtypes.h" 3
char __size[56]; 
# 200
long __align; 
# 201
} pthread_rwlock_t; 
# 207
typedef 
# 204
union { 
# 205
char __size[8]; 
# 206
long __align; 
# 207
} pthread_rwlockattr_t; 
# 213
typedef volatile int pthread_spinlock_t; 
# 222
typedef 
# 219
union { 
# 220
char __size[32]; 
# 221
long __align; 
# 222
} pthread_barrier_t; 
# 228
typedef 
# 225
union { 
# 226
char __size[4]; 
# 227
int __align; 
# 228
} pthread_barrierattr_t; 
# 273 "/usr/include/sys/types.h" 3
}
# 321 "/usr/include/stdlib.h" 3
extern long random() throw(); 
# 324
extern void srandom(unsigned __seed) throw(); 
# 330
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 331
 __attribute((__nonnull__(2))); 
# 335
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 343
struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; 
# 354
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 355
 __attribute((__nonnull__(1, 2))); 
# 357
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 358
 __attribute((__nonnull__(2))); 
# 360
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 363
 __attribute((__nonnull__(2, 4))); 
# 365
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 367
 __attribute((__nonnull__(1, 2))); 
# 374
extern int rand() throw(); 
# 376
extern void srand(unsigned __seed) throw(); 
# 381
extern int rand_r(unsigned * __seed) throw(); 
# 389
extern double drand48() throw(); 
# 390
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 393
extern long lrand48() throw(); 
# 394
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 395
 __attribute((__nonnull__(1))); 
# 398
extern long mrand48() throw(); 
# 399
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 400
 __attribute((__nonnull__(1))); 
# 403
extern void srand48(long __seedval) throw(); 
# 404
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 405
 __attribute((__nonnull__(1))); 
# 406
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 412
struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
unsigned long long __a; 
# 419
}; 
# 422
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 423
 __attribute((__nonnull__(1, 2))); 
# 424
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 426
 __attribute((__nonnull__(1, 2))); 
# 429
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 431
 __attribute((__nonnull__(1, 2))); 
# 432
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 435
 __attribute((__nonnull__(1, 2))); 
# 438
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 440
 __attribute((__nonnull__(1, 2))); 
# 441
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 444
 __attribute((__nonnull__(1, 2))); 
# 447
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 448
 __attribute((__nonnull__(2))); 
# 450
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 453
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 455
 __attribute((__nonnull__(1, 2))); 
# 465
extern void *malloc(size_t __size) throw() __attribute((__malloc__)); 
# 467
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 468
 __attribute((__malloc__)); 
# 479
extern void *realloc(void * __ptr, size_t __size) throw()
# 480
 __attribute((__warn_unused_result__)); 
# 482
extern void free(void * __ptr) throw(); 
# 487
extern void cfree(void * __ptr) throw(); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 497 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__)); 
# 502
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 503
 __attribute((__nonnull__(1))); 
# 508
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 509
 __attribute((__malloc__, __alloc_size__(2))); 
# 514
extern void abort() throw() __attribute((__noreturn__)); 
# 518
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 523
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 524
 __attribute((__nonnull__(1))); 
# 534
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 535
 __attribute((__nonnull__(1))); 
# 542
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 548
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 556
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 563
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 569
extern char *secure_getenv(const char * __name) throw()
# 570
 __attribute((__nonnull__(1))); 
# 577
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 583
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 584
 __attribute((__nonnull__(2))); 
# 587
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 594
extern int clearenv() throw(); 
# 605 "/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 619 "/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 629 "/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 641 "/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 651 "/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 652
 __attribute((__nonnull__(1))); 
# 662 "/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 673 "/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 683 "/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 693 "/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 694
 __attribute((__nonnull__(1))); 
# 705 "/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 706
 __attribute((__nonnull__(1))); 
# 716
extern int system(const char * __command); 
# 723
extern char *canonicalize_file_name(const char * __name) throw()
# 724
 __attribute((__nonnull__(1))); 
# 733 "/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 741
typedef int (*__compar_fn_t)(const void *, const void *); 
# 744
typedef __compar_fn_t comparison_fn_t; 
# 748
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 754
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 756
 __attribute((__nonnull__(1, 2, 5))); 
# 760
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 761
 __attribute((__nonnull__(1, 4))); 
# 763
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 765
 __attribute((__nonnull__(1, 4))); 
# 770
extern int abs(int __x) throw() __attribute((const)); 
# 771
extern long labs(long __x) throw() __attribute((const)); 
# 775
__extension__ extern long long llabs(long long __x) throw()
# 776
 __attribute((const)); 
# 784
extern div_t div(int __numer, int __denom) throw()
# 785
 __attribute((const)); 
# 786
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 787
 __attribute((const)); 
# 792
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 794
 __attribute((const)); 
# 807 "/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 808
 __attribute((__nonnull__(3, 4))); 
# 813
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 814
 __attribute((__nonnull__(3, 4))); 
# 819
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 820
 __attribute((__nonnull__(3))); 
# 825
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 827
 __attribute((__nonnull__(3, 4))); 
# 828
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 830
 __attribute((__nonnull__(3, 4))); 
# 831
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 832
 __attribute((__nonnull__(3))); 
# 837
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 839
 __attribute((__nonnull__(3, 4, 5))); 
# 840
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 842
 __attribute((__nonnull__(3, 4, 5))); 
# 844
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 847
 __attribute((__nonnull__(3, 4, 5))); 
# 848
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 851
 __attribute((__nonnull__(3, 4, 5))); 
# 859
extern int mblen(const char * __s, size_t __n) throw(); 
# 862
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 866
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 870
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 873
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 884
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 895 "/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 898
 __attribute((__nonnull__(1, 2, 3))); 
# 904
extern void setkey(const char * __key) throw() __attribute((__nonnull__(1))); 
# 912
extern int posix_openpt(int __oflag); 
# 920
extern int grantpt(int __fd) throw(); 
# 924
extern int unlockpt(int __fd) throw(); 
# 929
extern char *ptsname(int __fd) throw(); 
# 936
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 937
 __attribute((__nonnull__(2))); 
# 940
extern int getpt(); 
# 947
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 948
 __attribute((__nonnull__(1))); 
# 964 "/usr/include/stdlib.h" 3
}
# 46 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/std_abs.h" 3
extern "C++" {
# 48
namespace std __attribute((__visibility__("default"))) { 
# 52
using ::abs;
# 56
inline long abs(long __i) { return __builtin_labs(__i); } 
# 61
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 71 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/std_abs.h" 3
constexpr double abs(double __x) 
# 72
{ return __builtin_fabs(__x); } 
# 75
constexpr float abs(float __x) 
# 76
{ return __builtin_fabsf(__x); } 
# 79
constexpr long double abs(long double __x) 
# 80
{ return __builtin_fabsl(__x); } 
# 108 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/std_abs.h" 3
}
# 109
}
# 77 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cmath" 3
extern "C++" {
# 79
namespace std __attribute((__visibility__("default"))) { 
# 83
using ::acos;
# 87
constexpr float acos(float __x) 
# 88
{ return __builtin_acosf(__x); } 
# 91
constexpr long double acos(long double __x) 
# 92
{ return __builtin_acosl(__x); } 
# 95
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
acos(_Tp __x) 
# 100
{ return __builtin_acos(__x); } 
# 102
using ::asin;
# 106
constexpr float asin(float __x) 
# 107
{ return __builtin_asinf(__x); } 
# 110
constexpr long double asin(long double __x) 
# 111
{ return __builtin_asinl(__x); } 
# 114
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
asin(_Tp __x) 
# 119
{ return __builtin_asin(__x); } 
# 121
using ::atan;
# 125
constexpr float atan(float __x) 
# 126
{ return __builtin_atanf(__x); } 
# 129
constexpr long double atan(long double __x) 
# 130
{ return __builtin_atanl(__x); } 
# 133
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
atan(_Tp __x) 
# 138
{ return __builtin_atan(__x); } 
# 140
using ::atan2;
# 144
constexpr float atan2(float __y, float __x) 
# 145
{ return __builtin_atan2f(__y, __x); } 
# 148
constexpr long double atan2(long double __y, long double __x) 
# 149
{ return __builtin_atan2l(__y, __x); } 
# 152
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 155
atan2(_Tp __y, _Up __x) 
# 156
{ 
# 157
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 158
return atan2((__type)__y, (__type)__x); 
# 159
} 
# 161
using ::ceil;
# 165
constexpr float ceil(float __x) 
# 166
{ return __builtin_ceilf(__x); } 
# 169
constexpr long double ceil(long double __x) 
# 170
{ return __builtin_ceill(__x); } 
# 173
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 177
ceil(_Tp __x) 
# 178
{ return __builtin_ceil(__x); } 
# 180
using ::cos;
# 184
constexpr float cos(float __x) 
# 185
{ return __builtin_cosf(__x); } 
# 188
constexpr long double cos(long double __x) 
# 189
{ return __builtin_cosl(__x); } 
# 192
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
cos(_Tp __x) 
# 197
{ return __builtin_cos(__x); } 
# 199
using ::cosh;
# 203
constexpr float cosh(float __x) 
# 204
{ return __builtin_coshf(__x); } 
# 207
constexpr long double cosh(long double __x) 
# 208
{ return __builtin_coshl(__x); } 
# 211
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cosh(_Tp __x) 
# 216
{ return __builtin_cosh(__x); } 
# 218
using ::exp;
# 222
constexpr float exp(float __x) 
# 223
{ return __builtin_expf(__x); } 
# 226
constexpr long double exp(long double __x) 
# 227
{ return __builtin_expl(__x); } 
# 230
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
exp(_Tp __x) 
# 235
{ return __builtin_exp(__x); } 
# 237
using ::fabs;
# 241
constexpr float fabs(float __x) 
# 242
{ return __builtin_fabsf(__x); } 
# 245
constexpr long double fabs(long double __x) 
# 246
{ return __builtin_fabsl(__x); } 
# 249
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
fabs(_Tp __x) 
# 254
{ return __builtin_fabs(__x); } 
# 256
using ::floor;
# 260
constexpr float floor(float __x) 
# 261
{ return __builtin_floorf(__x); } 
# 264
constexpr long double floor(long double __x) 
# 265
{ return __builtin_floorl(__x); } 
# 268
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
floor(_Tp __x) 
# 273
{ return __builtin_floor(__x); } 
# 275
using ::fmod;
# 279
constexpr float fmod(float __x, float __y) 
# 280
{ return __builtin_fmodf(__x, __y); } 
# 283
constexpr long double fmod(long double __x, long double __y) 
# 284
{ return __builtin_fmodl(__x, __y); } 
# 287
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 290
fmod(_Tp __x, _Up __y) 
# 291
{ 
# 292
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 293
return fmod((__type)__x, (__type)__y); 
# 294
} 
# 296
using ::frexp;
# 300
inline float frexp(float __x, int *__exp) 
# 301
{ return __builtin_frexpf(__x, __exp); } 
# 304
inline long double frexp(long double __x, int *__exp) 
# 305
{ return __builtin_frexpl(__x, __exp); } 
# 308
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 312
frexp(_Tp __x, int *__exp) 
# 313
{ return __builtin_frexp(__x, __exp); } 
# 315
using ::ldexp;
# 319
constexpr float ldexp(float __x, int __exp) 
# 320
{ return __builtin_ldexpf(__x, __exp); } 
# 323
constexpr long double ldexp(long double __x, int __exp) 
# 324
{ return __builtin_ldexpl(__x, __exp); } 
# 327
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
ldexp(_Tp __x, int __exp) 
# 332
{ return __builtin_ldexp(__x, __exp); } 
# 334
using ::log;
# 338
constexpr float log(float __x) 
# 339
{ return __builtin_logf(__x); } 
# 342
constexpr long double log(long double __x) 
# 343
{ return __builtin_logl(__x); } 
# 346
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
log(_Tp __x) 
# 351
{ return __builtin_log(__x); } 
# 353
using ::log10;
# 357
constexpr float log10(float __x) 
# 358
{ return __builtin_log10f(__x); } 
# 361
constexpr long double log10(long double __x) 
# 362
{ return __builtin_log10l(__x); } 
# 365
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log10(_Tp __x) 
# 370
{ return __builtin_log10(__x); } 
# 372
using ::modf;
# 376
inline float modf(float __x, float *__iptr) 
# 377
{ return __builtin_modff(__x, __iptr); } 
# 380
inline long double modf(long double __x, long double *__iptr) 
# 381
{ return __builtin_modfl(__x, __iptr); } 
# 384
using ::pow;
# 388
constexpr float pow(float __x, float __y) 
# 389
{ return __builtin_powf(__x, __y); } 
# 392
constexpr long double pow(long double __x, long double __y) 
# 393
{ return __builtin_powl(__x, __y); } 
# 412 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cmath" 3
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 415
pow(_Tp __x, _Up __y) 
# 416
{ 
# 417
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 418
return pow((__type)__x, (__type)__y); 
# 419
} 
# 421
using ::sin;
# 425
constexpr float sin(float __x) 
# 426
{ return __builtin_sinf(__x); } 
# 429
constexpr long double sin(long double __x) 
# 430
{ return __builtin_sinl(__x); } 
# 433
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 437
sin(_Tp __x) 
# 438
{ return __builtin_sin(__x); } 
# 440
using ::sinh;
# 444
constexpr float sinh(float __x) 
# 445
{ return __builtin_sinhf(__x); } 
# 448
constexpr long double sinh(long double __x) 
# 449
{ return __builtin_sinhl(__x); } 
# 452
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sinh(_Tp __x) 
# 457
{ return __builtin_sinh(__x); } 
# 459
using ::sqrt;
# 463
constexpr float sqrt(float __x) 
# 464
{ return __builtin_sqrtf(__x); } 
# 467
constexpr long double sqrt(long double __x) 
# 468
{ return __builtin_sqrtl(__x); } 
# 471
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sqrt(_Tp __x) 
# 476
{ return __builtin_sqrt(__x); } 
# 478
using ::tan;
# 482
constexpr float tan(float __x) 
# 483
{ return __builtin_tanf(__x); } 
# 486
constexpr long double tan(long double __x) 
# 487
{ return __builtin_tanl(__x); } 
# 490
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
tan(_Tp __x) 
# 495
{ return __builtin_tan(__x); } 
# 497
using ::tanh;
# 501
constexpr float tanh(float __x) 
# 502
{ return __builtin_tanhf(__x); } 
# 505
constexpr long double tanh(long double __x) 
# 506
{ return __builtin_tanhl(__x); } 
# 509
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tanh(_Tp __x) 
# 514
{ return __builtin_tanh(__x); } 
# 537 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cmath" 3
constexpr int fpclassify(float __x) 
# 538
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 539
} 
# 542
constexpr int fpclassify(double __x) 
# 543
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 544
} 
# 547
constexpr int fpclassify(long double __x) 
# 548
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 549
} 
# 553
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 556
fpclassify(_Tp __x) 
# 557
{ return (__x != 0) ? 4 : 2; } 
# 562
constexpr bool isfinite(float __x) 
# 563
{ return __builtin_isfinite(__x); } 
# 566
constexpr bool isfinite(double __x) 
# 567
{ return __builtin_isfinite(__x); } 
# 570
constexpr bool isfinite(long double __x) 
# 571
{ return __builtin_isfinite(__x); } 
# 575
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 578
isfinite(_Tp __x) 
# 579
{ return true; } 
# 584
constexpr bool isinf(float __x) 
# 585
{ return __builtin_isinf(__x); } 
# 589
using ::isinf;
# 597
constexpr bool isinf(long double __x) 
# 598
{ return __builtin_isinf(__x); } 
# 602
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 605
isinf(_Tp __x) 
# 606
{ return false; } 
# 611
constexpr bool isnan(float __x) 
# 612
{ return __builtin_isnan(__x); } 
# 616
using ::isnan;
# 624
constexpr bool isnan(long double __x) 
# 625
{ return __builtin_isnan(__x); } 
# 629
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 632
isnan(_Tp __x) 
# 633
{ return false; } 
# 638
constexpr bool isnormal(float __x) 
# 639
{ return __builtin_isnormal(__x); } 
# 642
constexpr bool isnormal(double __x) 
# 643
{ return __builtin_isnormal(__x); } 
# 646
constexpr bool isnormal(long double __x) 
# 647
{ return __builtin_isnormal(__x); } 
# 651
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 654
isnormal(_Tp __x) 
# 655
{ return (__x != 0) ? true : false; } 
# 661
constexpr bool signbit(float __x) 
# 662
{ return __builtin_signbit(__x); } 
# 665
constexpr bool signbit(double __x) 
# 666
{ return __builtin_signbit(__x); } 
# 669
constexpr bool signbit(long double __x) 
# 670
{ return __builtin_signbit(__x); } 
# 674
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 677
signbit(_Tp __x) 
# 678
{ return (__x < 0) ? true : false; } 
# 683
constexpr bool isgreater(float __x, float __y) 
# 684
{ return __builtin_isgreater(__x, __y); } 
# 687
constexpr bool isgreater(double __x, double __y) 
# 688
{ return __builtin_isgreater(__x, __y); } 
# 691
constexpr bool isgreater(long double __x, long double __y) 
# 692
{ return __builtin_isgreater(__x, __y); } 
# 696
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 700
isgreater(_Tp __x, _Up __y) 
# 701
{ 
# 702
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 703
return __builtin_isgreater((__type)__x, (__type)__y); 
# 704
} 
# 709
constexpr bool isgreaterequal(float __x, float __y) 
# 710
{ return __builtin_isgreaterequal(__x, __y); } 
# 713
constexpr bool isgreaterequal(double __x, double __y) 
# 714
{ return __builtin_isgreaterequal(__x, __y); } 
# 717
constexpr bool isgreaterequal(long double __x, long double __y) 
# 718
{ return __builtin_isgreaterequal(__x, __y); } 
# 722
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 726
isgreaterequal(_Tp __x, _Up __y) 
# 727
{ 
# 728
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 729
return __builtin_isgreaterequal((__type)__x, (__type)__y); 
# 730
} 
# 735
constexpr bool isless(float __x, float __y) 
# 736
{ return __builtin_isless(__x, __y); } 
# 739
constexpr bool isless(double __x, double __y) 
# 740
{ return __builtin_isless(__x, __y); } 
# 743
constexpr bool isless(long double __x, long double __y) 
# 744
{ return __builtin_isless(__x, __y); } 
# 748
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 752
isless(_Tp __x, _Up __y) 
# 753
{ 
# 754
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 755
return __builtin_isless((__type)__x, (__type)__y); 
# 756
} 
# 761
constexpr bool islessequal(float __x, float __y) 
# 762
{ return __builtin_islessequal(__x, __y); } 
# 765
constexpr bool islessequal(double __x, double __y) 
# 766
{ return __builtin_islessequal(__x, __y); } 
# 769
constexpr bool islessequal(long double __x, long double __y) 
# 770
{ return __builtin_islessequal(__x, __y); } 
# 774
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 778
islessequal(_Tp __x, _Up __y) 
# 779
{ 
# 780
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 781
return __builtin_islessequal((__type)__x, (__type)__y); 
# 782
} 
# 787
constexpr bool islessgreater(float __x, float __y) 
# 788
{ return __builtin_islessgreater(__x, __y); } 
# 791
constexpr bool islessgreater(double __x, double __y) 
# 792
{ return __builtin_islessgreater(__x, __y); } 
# 795
constexpr bool islessgreater(long double __x, long double __y) 
# 796
{ return __builtin_islessgreater(__x, __y); } 
# 800
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 804
islessgreater(_Tp __x, _Up __y) 
# 805
{ 
# 806
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 807
return __builtin_islessgreater((__type)__x, (__type)__y); 
# 808
} 
# 813
constexpr bool isunordered(float __x, float __y) 
# 814
{ return __builtin_isunordered(__x, __y); } 
# 817
constexpr bool isunordered(double __x, double __y) 
# 818
{ return __builtin_isunordered(__x, __y); } 
# 821
constexpr bool isunordered(long double __x, long double __y) 
# 822
{ return __builtin_isunordered(__x, __y); } 
# 826
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 830
isunordered(_Tp __x, _Up __y) 
# 831
{ 
# 832
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 833
return __builtin_isunordered((__type)__x, (__type)__y); 
# 834
} 
# 1065 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cmath" 3
using ::double_t;
# 1066
using ::float_t;
# 1069
using ::acosh;
# 1070
using ::acoshf;
# 1071
using ::acoshl;
# 1073
using ::asinh;
# 1074
using ::asinhf;
# 1075
using ::asinhl;
# 1077
using ::atanh;
# 1078
using ::atanhf;
# 1079
using ::atanhl;
# 1081
using ::cbrt;
# 1082
using ::cbrtf;
# 1083
using ::cbrtl;
# 1085
using ::copysign;
# 1086
using ::copysignf;
# 1087
using ::copysignl;
# 1089
using ::erf;
# 1090
using ::erff;
# 1091
using ::erfl;
# 1093
using ::erfc;
# 1094
using ::erfcf;
# 1095
using ::erfcl;
# 1097
using ::exp2;
# 1098
using ::exp2f;
# 1099
using ::exp2l;
# 1101
using ::expm1;
# 1102
using ::expm1f;
# 1103
using ::expm1l;
# 1105
using ::fdim;
# 1106
using ::fdimf;
# 1107
using ::fdiml;
# 1109
using ::fma;
# 1110
using ::fmaf;
# 1111
using ::fmal;
# 1113
using ::fmax;
# 1114
using ::fmaxf;
# 1115
using ::fmaxl;
# 1117
using ::fmin;
# 1118
using ::fminf;
# 1119
using ::fminl;
# 1121
using ::hypot;
# 1122
using ::hypotf;
# 1123
using ::hypotl;
# 1125
using ::ilogb;
# 1126
using ::ilogbf;
# 1127
using ::ilogbl;
# 1129
using ::lgamma;
# 1130
using ::lgammaf;
# 1131
using ::lgammal;
# 1134
using ::llrint;
# 1135
using ::llrintf;
# 1136
using ::llrintl;
# 1138
using ::llround;
# 1139
using ::llroundf;
# 1140
using ::llroundl;
# 1143
using ::log1p;
# 1144
using ::log1pf;
# 1145
using ::log1pl;
# 1147
using ::log2;
# 1148
using ::log2f;
# 1149
using ::log2l;
# 1151
using ::logb;
# 1152
using ::logbf;
# 1153
using ::logbl;
# 1155
using ::lrint;
# 1156
using ::lrintf;
# 1157
using ::lrintl;
# 1159
using ::lround;
# 1160
using ::lroundf;
# 1161
using ::lroundl;
# 1163
using ::nan;
# 1164
using ::nanf;
# 1165
using ::nanl;
# 1167
using ::nearbyint;
# 1168
using ::nearbyintf;
# 1169
using ::nearbyintl;
# 1171
using ::nextafter;
# 1172
using ::nextafterf;
# 1173
using ::nextafterl;
# 1175
using ::nexttoward;
# 1176
using ::nexttowardf;
# 1177
using ::nexttowardl;
# 1179
using ::remainder;
# 1180
using ::remainderf;
# 1181
using ::remainderl;
# 1183
using ::remquo;
# 1184
using ::remquof;
# 1185
using ::remquol;
# 1187
using ::rint;
# 1188
using ::rintf;
# 1189
using ::rintl;
# 1191
using ::round;
# 1192
using ::roundf;
# 1193
using ::roundl;
# 1195
using ::scalbln;
# 1196
using ::scalblnf;
# 1197
using ::scalblnl;
# 1199
using ::scalbn;
# 1200
using ::scalbnf;
# 1201
using ::scalbnl;
# 1203
using ::tgamma;
# 1204
using ::tgammaf;
# 1205
using ::tgammal;
# 1207
using ::trunc;
# 1208
using ::truncf;
# 1209
using ::truncl;
# 1214
constexpr float acosh(float __x) 
# 1215
{ return __builtin_acoshf(__x); } 
# 1218
constexpr long double acosh(long double __x) 
# 1219
{ return __builtin_acoshl(__x); } 
# 1223
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1226
acosh(_Tp __x) 
# 1227
{ return __builtin_acosh(__x); } 
# 1232
constexpr float asinh(float __x) 
# 1233
{ return __builtin_asinhf(__x); } 
# 1236
constexpr long double asinh(long double __x) 
# 1237
{ return __builtin_asinhl(__x); } 
# 1241
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1244
asinh(_Tp __x) 
# 1245
{ return __builtin_asinh(__x); } 
# 1250
constexpr float atanh(float __x) 
# 1251
{ return __builtin_atanhf(__x); } 
# 1254
constexpr long double atanh(long double __x) 
# 1255
{ return __builtin_atanhl(__x); } 
# 1259
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1262
atanh(_Tp __x) 
# 1263
{ return __builtin_atanh(__x); } 
# 1268
constexpr float cbrt(float __x) 
# 1269
{ return __builtin_cbrtf(__x); } 
# 1272
constexpr long double cbrt(long double __x) 
# 1273
{ return __builtin_cbrtl(__x); } 
# 1277
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1280
cbrt(_Tp __x) 
# 1281
{ return __builtin_cbrt(__x); } 
# 1286
constexpr float copysign(float __x, float __y) 
# 1287
{ return __builtin_copysignf(__x, __y); } 
# 1290
constexpr long double copysign(long double __x, long double __y) 
# 1291
{ return __builtin_copysignl(__x, __y); } 
# 1295
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1297
copysign(_Tp __x, _Up __y) 
# 1298
{ 
# 1299
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1300
return copysign((__type)__x, (__type)__y); 
# 1301
} 
# 1306
constexpr float erf(float __x) 
# 1307
{ return __builtin_erff(__x); } 
# 1310
constexpr long double erf(long double __x) 
# 1311
{ return __builtin_erfl(__x); } 
# 1315
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1318
erf(_Tp __x) 
# 1319
{ return __builtin_erf(__x); } 
# 1324
constexpr float erfc(float __x) 
# 1325
{ return __builtin_erfcf(__x); } 
# 1328
constexpr long double erfc(long double __x) 
# 1329
{ return __builtin_erfcl(__x); } 
# 1333
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1336
erfc(_Tp __x) 
# 1337
{ return __builtin_erfc(__x); } 
# 1342
constexpr float exp2(float __x) 
# 1343
{ return __builtin_exp2f(__x); } 
# 1346
constexpr long double exp2(long double __x) 
# 1347
{ return __builtin_exp2l(__x); } 
# 1351
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1354
exp2(_Tp __x) 
# 1355
{ return __builtin_exp2(__x); } 
# 1360
constexpr float expm1(float __x) 
# 1361
{ return __builtin_expm1f(__x); } 
# 1364
constexpr long double expm1(long double __x) 
# 1365
{ return __builtin_expm1l(__x); } 
# 1369
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1372
expm1(_Tp __x) 
# 1373
{ return __builtin_expm1(__x); } 
# 1378
constexpr float fdim(float __x, float __y) 
# 1379
{ return __builtin_fdimf(__x, __y); } 
# 1382
constexpr long double fdim(long double __x, long double __y) 
# 1383
{ return __builtin_fdiml(__x, __y); } 
# 1387
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1389
fdim(_Tp __x, _Up __y) 
# 1390
{ 
# 1391
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1392
return fdim((__type)__x, (__type)__y); 
# 1393
} 
# 1398
constexpr float fma(float __x, float __y, float __z) 
# 1399
{ return __builtin_fmaf(__x, __y, __z); } 
# 1402
constexpr long double fma(long double __x, long double __y, long double __z) 
# 1403
{ return __builtin_fmal(__x, __y, __z); } 
# 1407
template< class _Tp, class _Up, class _Vp> constexpr typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type 
# 1409
fma(_Tp __x, _Up __y, _Vp __z) 
# 1410
{ 
# 1411
typedef typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type __type; 
# 1412
return fma((__type)__x, (__type)__y, (__type)__z); 
# 1413
} 
# 1418
constexpr float fmax(float __x, float __y) 
# 1419
{ return __builtin_fmaxf(__x, __y); } 
# 1422
constexpr long double fmax(long double __x, long double __y) 
# 1423
{ return __builtin_fmaxl(__x, __y); } 
# 1427
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1429
fmax(_Tp __x, _Up __y) 
# 1430
{ 
# 1431
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1432
return fmax((__type)__x, (__type)__y); 
# 1433
} 
# 1438
constexpr float fmin(float __x, float __y) 
# 1439
{ return __builtin_fminf(__x, __y); } 
# 1442
constexpr long double fmin(long double __x, long double __y) 
# 1443
{ return __builtin_fminl(__x, __y); } 
# 1447
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1449
fmin(_Tp __x, _Up __y) 
# 1450
{ 
# 1451
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1452
return fmin((__type)__x, (__type)__y); 
# 1453
} 
# 1458
constexpr float hypot(float __x, float __y) 
# 1459
{ return __builtin_hypotf(__x, __y); } 
# 1462
constexpr long double hypot(long double __x, long double __y) 
# 1463
{ return __builtin_hypotl(__x, __y); } 
# 1467
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1469
hypot(_Tp __x, _Up __y) 
# 1470
{ 
# 1471
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1472
return hypot((__type)__x, (__type)__y); 
# 1473
} 
# 1478
constexpr int ilogb(float __x) 
# 1479
{ return __builtin_ilogbf(__x); } 
# 1482
constexpr int ilogb(long double __x) 
# 1483
{ return __builtin_ilogbl(__x); } 
# 1487
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 1491
ilogb(_Tp __x) 
# 1492
{ return __builtin_ilogb(__x); } 
# 1497
constexpr float lgamma(float __x) 
# 1498
{ return __builtin_lgammaf(__x); } 
# 1501
constexpr long double lgamma(long double __x) 
# 1502
{ return __builtin_lgammal(__x); } 
# 1506
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1509
lgamma(_Tp __x) 
# 1510
{ return __builtin_lgamma(__x); } 
# 1515
constexpr long long llrint(float __x) 
# 1516
{ return __builtin_llrintf(__x); } 
# 1519
constexpr long long llrint(long double __x) 
# 1520
{ return __builtin_llrintl(__x); } 
# 1524
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1527
llrint(_Tp __x) 
# 1528
{ return __builtin_llrint(__x); } 
# 1533
constexpr long long llround(float __x) 
# 1534
{ return __builtin_llroundf(__x); } 
# 1537
constexpr long long llround(long double __x) 
# 1538
{ return __builtin_llroundl(__x); } 
# 1542
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1545
llround(_Tp __x) 
# 1546
{ return __builtin_llround(__x); } 
# 1551
constexpr float log1p(float __x) 
# 1552
{ return __builtin_log1pf(__x); } 
# 1555
constexpr long double log1p(long double __x) 
# 1556
{ return __builtin_log1pl(__x); } 
# 1560
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1563
log1p(_Tp __x) 
# 1564
{ return __builtin_log1p(__x); } 
# 1570
constexpr float log2(float __x) 
# 1571
{ return __builtin_log2f(__x); } 
# 1574
constexpr long double log2(long double __x) 
# 1575
{ return __builtin_log2l(__x); } 
# 1579
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1582
log2(_Tp __x) 
# 1583
{ return __builtin_log2(__x); } 
# 1588
constexpr float logb(float __x) 
# 1589
{ return __builtin_logbf(__x); } 
# 1592
constexpr long double logb(long double __x) 
# 1593
{ return __builtin_logbl(__x); } 
# 1597
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1600
logb(_Tp __x) 
# 1601
{ return __builtin_logb(__x); } 
# 1606
constexpr long lrint(float __x) 
# 1607
{ return __builtin_lrintf(__x); } 
# 1610
constexpr long lrint(long double __x) 
# 1611
{ return __builtin_lrintl(__x); } 
# 1615
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1618
lrint(_Tp __x) 
# 1619
{ return __builtin_lrint(__x); } 
# 1624
constexpr long lround(float __x) 
# 1625
{ return __builtin_lroundf(__x); } 
# 1628
constexpr long lround(long double __x) 
# 1629
{ return __builtin_lroundl(__x); } 
# 1633
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1636
lround(_Tp __x) 
# 1637
{ return __builtin_lround(__x); } 
# 1642
constexpr float nearbyint(float __x) 
# 1643
{ return __builtin_nearbyintf(__x); } 
# 1646
constexpr long double nearbyint(long double __x) 
# 1647
{ return __builtin_nearbyintl(__x); } 
# 1651
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1654
nearbyint(_Tp __x) 
# 1655
{ return __builtin_nearbyint(__x); } 
# 1660
constexpr float nextafter(float __x, float __y) 
# 1661
{ return __builtin_nextafterf(__x, __y); } 
# 1664
constexpr long double nextafter(long double __x, long double __y) 
# 1665
{ return __builtin_nextafterl(__x, __y); } 
# 1669
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1671
nextafter(_Tp __x, _Up __y) 
# 1672
{ 
# 1673
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1674
return nextafter((__type)__x, (__type)__y); 
# 1675
} 
# 1680
constexpr float nexttoward(float __x, long double __y) 
# 1681
{ return __builtin_nexttowardf(__x, __y); } 
# 1684
constexpr long double nexttoward(long double __x, long double __y) 
# 1685
{ return __builtin_nexttowardl(__x, __y); } 
# 1689
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1692
nexttoward(_Tp __x, long double __y) 
# 1693
{ return __builtin_nexttoward(__x, __y); } 
# 1698
constexpr float remainder(float __x, float __y) 
# 1699
{ return __builtin_remainderf(__x, __y); } 
# 1702
constexpr long double remainder(long double __x, long double __y) 
# 1703
{ return __builtin_remainderl(__x, __y); } 
# 1707
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1709
remainder(_Tp __x, _Up __y) 
# 1710
{ 
# 1711
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1712
return remainder((__type)__x, (__type)__y); 
# 1713
} 
# 1718
inline float remquo(float __x, float __y, int *__pquo) 
# 1719
{ return __builtin_remquof(__x, __y, __pquo); } 
# 1722
inline long double remquo(long double __x, long double __y, int *__pquo) 
# 1723
{ return __builtin_remquol(__x, __y, __pquo); } 
# 1727
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1729
remquo(_Tp __x, _Up __y, int *__pquo) 
# 1730
{ 
# 1731
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1732
return remquo((__type)__x, (__type)__y, __pquo); 
# 1733
} 
# 1738
constexpr float rint(float __x) 
# 1739
{ return __builtin_rintf(__x); } 
# 1742
constexpr long double rint(long double __x) 
# 1743
{ return __builtin_rintl(__x); } 
# 1747
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1750
rint(_Tp __x) 
# 1751
{ return __builtin_rint(__x); } 
# 1756
constexpr float round(float __x) 
# 1757
{ return __builtin_roundf(__x); } 
# 1760
constexpr long double round(long double __x) 
# 1761
{ return __builtin_roundl(__x); } 
# 1765
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1768
round(_Tp __x) 
# 1769
{ return __builtin_round(__x); } 
# 1774
constexpr float scalbln(float __x, long __ex) 
# 1775
{ return __builtin_scalblnf(__x, __ex); } 
# 1778
constexpr long double scalbln(long double __x, long __ex) 
# 1779
{ return __builtin_scalblnl(__x, __ex); } 
# 1783
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1786
scalbln(_Tp __x, long __ex) 
# 1787
{ return __builtin_scalbln(__x, __ex); } 
# 1792
constexpr float scalbn(float __x, int __ex) 
# 1793
{ return __builtin_scalbnf(__x, __ex); } 
# 1796
constexpr long double scalbn(long double __x, int __ex) 
# 1797
{ return __builtin_scalbnl(__x, __ex); } 
# 1801
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1804
scalbn(_Tp __x, int __ex) 
# 1805
{ return __builtin_scalbn(__x, __ex); } 
# 1810
constexpr float tgamma(float __x) 
# 1811
{ return __builtin_tgammaf(__x); } 
# 1814
constexpr long double tgamma(long double __x) 
# 1815
{ return __builtin_tgammal(__x); } 
# 1819
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1822
tgamma(_Tp __x) 
# 1823
{ return __builtin_tgamma(__x); } 
# 1828
constexpr float trunc(float __x) 
# 1829
{ return __builtin_truncf(__x); } 
# 1832
constexpr long double trunc(long double __x) 
# 1833
{ return __builtin_truncl(__x); } 
# 1837
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1840
trunc(_Tp __x) 
# 1841
{ return __builtin_trunc(__x); } 
# 1932 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cmath" 3
}
# 1938
}
# 38 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/math.h" 3
using std::abs;
# 39
using std::acos;
# 40
using std::asin;
# 41
using std::atan;
# 42
using std::atan2;
# 43
using std::cos;
# 44
using std::sin;
# 45
using std::tan;
# 46
using std::cosh;
# 47
using std::sinh;
# 48
using std::tanh;
# 49
using std::exp;
# 50
using std::frexp;
# 51
using std::ldexp;
# 52
using std::log;
# 53
using std::log10;
# 54
using std::modf;
# 55
using std::pow;
# 56
using std::sqrt;
# 57
using std::ceil;
# 58
using std::fabs;
# 59
using std::floor;
# 60
using std::fmod;
# 63
using std::fpclassify;
# 64
using std::isfinite;
# 65
using std::isinf;
# 66
using std::isnan;
# 67
using std::isnormal;
# 68
using std::signbit;
# 69
using std::isgreater;
# 70
using std::isgreaterequal;
# 71
using std::isless;
# 72
using std::islessequal;
# 73
using std::islessgreater;
# 74
using std::isunordered;
# 78
using std::acosh;
# 79
using std::asinh;
# 80
using std::atanh;
# 81
using std::cbrt;
# 82
using std::copysign;
# 83
using std::erf;
# 84
using std::erfc;
# 85
using std::exp2;
# 86
using std::expm1;
# 87
using std::fdim;
# 88
using std::fma;
# 89
using std::fmax;
# 90
using std::fmin;
# 91
using std::hypot;
# 92
using std::ilogb;
# 93
using std::lgamma;
# 94
using std::llrint;
# 95
using std::llround;
# 96
using std::log1p;
# 97
using std::log2;
# 98
using std::logb;
# 99
using std::lrint;
# 100
using std::lround;
# 101
using std::nearbyint;
# 102
using std::nextafter;
# 103
using std::nexttoward;
# 104
using std::remainder;
# 105
using std::remquo;
# 106
using std::rint;
# 107
using std::round;
# 108
using std::scalbln;
# 109
using std::scalbn;
# 110
using std::tgamma;
# 111
using std::trunc;
# 121 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cstdlib" 3
extern "C++" {
# 123
namespace std __attribute((__visibility__("default"))) { 
# 127
using ::div_t;
# 128
using ::ldiv_t;
# 130
using ::abort;
# 134
using ::atexit;
# 137
using ::at_quick_exit;
# 140
using ::atof;
# 141
using ::atoi;
# 142
using ::atol;
# 143
using ::bsearch;
# 144
using ::calloc;
# 145
using ::div;
# 146
using ::exit;
# 147
using ::free;
# 148
using ::getenv;
# 149
using ::labs;
# 150
using ::ldiv;
# 151
using ::malloc;
# 153
using ::mblen;
# 154
using ::mbstowcs;
# 155
using ::mbtowc;
# 157
using ::qsort;
# 160
using ::quick_exit;
# 163
using ::rand;
# 164
using ::realloc;
# 165
using ::srand;
# 166
using ::strtod;
# 167
using ::strtol;
# 168
using ::strtoul;
# 169
using ::system;
# 171
using ::wcstombs;
# 172
using ::wctomb;
# 177
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 182
}
# 195 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 200
using ::lldiv_t;
# 206
using ::_Exit;
# 210
using ::llabs;
# 213
inline lldiv_t div(long long __n, long long __d) 
# 214
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 216
using ::lldiv;
# 227 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/cstdlib" 3
using ::atoll;
# 228
using ::strtoll;
# 229
using ::strtoull;
# 231
using ::strtof;
# 232
using ::strtold;
# 235
}
# 237
namespace std { 
# 240
using __gnu_cxx::lldiv_t;
# 242
using __gnu_cxx::_Exit;
# 244
using __gnu_cxx::llabs;
# 245
using __gnu_cxx::div;
# 246
using __gnu_cxx::lldiv;
# 248
using __gnu_cxx::atoll;
# 249
using __gnu_cxx::strtof;
# 250
using __gnu_cxx::strtoll;
# 251
using __gnu_cxx::strtoull;
# 252
using __gnu_cxx::strtold;
# 253
}
# 257
}
# 38 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/stdlib.h" 3
using std::abort;
# 39
using std::atexit;
# 40
using std::exit;
# 43
using std::at_quick_exit;
# 46
using std::quick_exit;
# 54
using std::abs;
# 55
using std::atof;
# 56
using std::atoi;
# 57
using std::atol;
# 58
using std::bsearch;
# 59
using std::calloc;
# 60
using std::div;
# 61
using std::free;
# 62
using std::getenv;
# 63
using std::labs;
# 64
using std::ldiv;
# 65
using std::malloc;
# 67
using std::mblen;
# 68
using std::mbstowcs;
# 69
using std::mbtowc;
# 71
using std::qsort;
# 72
using std::rand;
# 73
using std::realloc;
# 74
using std::srand;
# 75
using std::strtod;
# 76
using std::strtol;
# 77
using std::strtoul;
# 78
using std::system;
# 80
using std::wcstombs;
# 81
using std::wctomb;
# 10622 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
namespace std { 
# 10623
constexpr bool signbit(float x); 
# 10624
constexpr bool signbit(double x); 
# 10625
constexpr bool signbit(long double x); 
# 10626
constexpr bool isfinite(float x); 
# 10627
constexpr bool isfinite(double x); 
# 10628
constexpr bool isfinite(long double x); 
# 10629
constexpr bool isnan(float x); 
# 10632
extern "C" int isnan(double x) throw(); 
# 10636
constexpr bool isnan(long double x); 
# 10637
constexpr bool isinf(float x); 
# 10640
extern "C" int isinf(double x) throw(); 
# 10644
constexpr bool isinf(long double x); 
# 10645
}
# 10798 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
namespace std { 
# 10800
template< class T> extern T __pow_helper(T, int); 
# 10801
template< class T> extern T __cmath_power(T, unsigned); 
# 10802
}
# 10804
using std::abs;
# 10805
using std::fabs;
# 10806
using std::ceil;
# 10807
using std::floor;
# 10808
using std::sqrt;
# 10810
using std::pow;
# 10812
using std::log;
# 10813
using std::log10;
# 10814
using std::fmod;
# 10815
using std::modf;
# 10816
using std::exp;
# 10817
using std::frexp;
# 10818
using std::ldexp;
# 10819
using std::asin;
# 10820
using std::sin;
# 10821
using std::sinh;
# 10822
using std::acos;
# 10823
using std::cos;
# 10824
using std::cosh;
# 10825
using std::atan;
# 10826
using std::atan2;
# 10827
using std::tan;
# 10828
using std::tanh;
# 11199 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
namespace std { 
# 11208 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline long long abs(long long); 
# 11218 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline long abs(long); 
# 11219
extern constexpr float abs(float); 
# 11220
extern constexpr double abs(double); 
# 11221
extern constexpr float fabs(float); 
# 11222
extern constexpr float ceil(float); 
# 11223
extern constexpr float floor(float); 
# 11224
extern constexpr float sqrt(float); 
# 11225
extern constexpr float pow(float, float); 
# 11230
template< class _Tp, class _Up> extern constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type pow(_Tp, _Up); 
# 11240
extern constexpr float log(float); 
# 11241
extern constexpr float log10(float); 
# 11242
extern constexpr float fmod(float, float); 
# 11243
extern inline float modf(float, float *); 
# 11244
extern constexpr float exp(float); 
# 11245
extern inline float frexp(float, int *); 
# 11246
extern constexpr float ldexp(float, int); 
# 11247
extern constexpr float asin(float); 
# 11248
extern constexpr float sin(float); 
# 11249
extern constexpr float sinh(float); 
# 11250
extern constexpr float acos(float); 
# 11251
extern constexpr float cos(float); 
# 11252
extern constexpr float cosh(float); 
# 11253
extern constexpr float atan(float); 
# 11254
extern constexpr float atan2(float, float); 
# 11255
extern constexpr float tan(float); 
# 11256
extern constexpr float tanh(float); 
# 11335 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
}
# 11441 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
namespace std { 
# 11442
constexpr float logb(float a); 
# 11443
constexpr int ilogb(float a); 
# 11444
constexpr float scalbn(float a, int b); 
# 11445
constexpr float scalbln(float a, long b); 
# 11446
constexpr float exp2(float a); 
# 11447
constexpr float expm1(float a); 
# 11448
constexpr float log2(float a); 
# 11449
constexpr float log1p(float a); 
# 11450
constexpr float acosh(float a); 
# 11451
constexpr float asinh(float a); 
# 11452
constexpr float atanh(float a); 
# 11453
constexpr float hypot(float a, float b); 
# 11454
constexpr float cbrt(float a); 
# 11455
constexpr float erf(float a); 
# 11456
constexpr float erfc(float a); 
# 11457
constexpr float lgamma(float a); 
# 11458
constexpr float tgamma(float a); 
# 11459
constexpr float copysign(float a, float b); 
# 11460
constexpr float nextafter(float a, float b); 
# 11461
constexpr float remainder(float a, float b); 
# 11462
inline float remquo(float a, float b, int * quo); 
# 11463
constexpr float round(float a); 
# 11464
constexpr long lround(float a); 
# 11465
constexpr long long llround(float a); 
# 11466
constexpr float trunc(float a); 
# 11467
constexpr float rint(float a); 
# 11468
constexpr long lrint(float a); 
# 11469
constexpr long long llrint(float a); 
# 11470
constexpr float nearbyint(float a); 
# 11471
constexpr float fdim(float a, float b); 
# 11472
constexpr float fma(float a, float b, float c); 
# 11473
constexpr float fmax(float a, float b); 
# 11474
constexpr float fmin(float a, float b); 
# 11475
}
# 11580 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline float exp10(const float a); 
# 11582
static inline float rsqrt(const float a); 
# 11584
static inline float rcbrt(const float a); 
# 11586
static inline float sinpi(const float a); 
# 11588
static inline float cospi(const float a); 
# 11590
static inline void sincospi(const float a, float *const sptr, float *const cptr); 
# 11592
static inline void sincos(const float a, float *const sptr, float *const cptr); 
# 11594
static inline float j0(const float a); 
# 11596
static inline float j1(const float a); 
# 11598
static inline float jn(const int n, const float a); 
# 11600
static inline float y0(const float a); 
# 11602
static inline float y1(const float a); 
# 11604
static inline float yn(const int n, const float a); 
# 11606
__attribute__((unused)) static inline float cyl_bessel_i0(const float a); 
# 11608
__attribute__((unused)) static inline float cyl_bessel_i1(const float a); 
# 11610
static inline float erfinv(const float a); 
# 11612
static inline float erfcinv(const float a); 
# 11614
static inline float normcdfinv(const float a); 
# 11616
static inline float normcdf(const float a); 
# 11618
static inline float erfcx(const float a); 
# 11620
static inline double copysign(const double a, const float b); 
# 11622
static inline double copysign(const float a, const double b); 
# 11630
static inline unsigned min(const unsigned a, const unsigned b); 
# 11638
static inline unsigned min(const int a, const unsigned b); 
# 11646
static inline unsigned min(const unsigned a, const int b); 
# 11654
static inline long min(const long a, const long b); 
# 11662
static inline unsigned long min(const unsigned long a, const unsigned long b); 
# 11670
static inline unsigned long min(const long a, const unsigned long b); 
# 11678
static inline unsigned long min(const unsigned long a, const long b); 
# 11686
static inline long long min(const long long a, const long long b); 
# 11694
static inline unsigned long long min(const unsigned long long a, const unsigned long long b); 
# 11702
static inline unsigned long long min(const long long a, const unsigned long long b); 
# 11710
static inline unsigned long long min(const unsigned long long a, const long long b); 
# 11721 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline float min(const float a, const float b); 
# 11732 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline double min(const double a, const double b); 
# 11742 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline double min(const float a, const double b); 
# 11752 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline double min(const double a, const float b); 
# 11760
static inline unsigned max(const unsigned a, const unsigned b); 
# 11768
static inline unsigned max(const int a, const unsigned b); 
# 11776
static inline unsigned max(const unsigned a, const int b); 
# 11784
static inline long max(const long a, const long b); 
# 11792
static inline unsigned long max(const unsigned long a, const unsigned long b); 
# 11800
static inline unsigned long max(const long a, const unsigned long b); 
# 11808
static inline unsigned long max(const unsigned long a, const long b); 
# 11816
static inline long long max(const long long a, const long long b); 
# 11824
static inline unsigned long long max(const unsigned long long a, const unsigned long long b); 
# 11832
static inline unsigned long long max(const long long a, const unsigned long long b); 
# 11840
static inline unsigned long long max(const unsigned long long a, const long long b); 
# 11851 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline float max(const float a, const float b); 
# 11862 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline double max(const double a, const double b); 
# 11872 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline double max(const float a, const double b); 
# 11882 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline double max(const double a, const float b); 
# 11893 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern "C" {
# 11894
__attribute__((unused)) inline void *__nv_aligned_device_malloc(size_t size, size_t align) 
# 11895
{int volatile ___ = 1;(void)size;(void)align;
# 11898
::exit(___);}
#if 0
# 11895
{ 
# 11896
__attribute__((unused)) void *__nv_aligned_device_malloc_impl(size_t, size_t); 
# 11897
return __nv_aligned_device_malloc_impl(size, align); 
# 11898
} 
#endif
# 11899 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
}
# 758 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
static inline float exp10(const float a) 
# 759
{ 
# 760
return exp10f(a); 
# 761
} 
# 763
static inline float rsqrt(const float a) 
# 764
{ 
# 765
return rsqrtf(a); 
# 766
} 
# 768
static inline float rcbrt(const float a) 
# 769
{ 
# 770
return rcbrtf(a); 
# 771
} 
# 773
static inline float sinpi(const float a) 
# 774
{ 
# 775
return sinpif(a); 
# 776
} 
# 778
static inline float cospi(const float a) 
# 779
{ 
# 780
return cospif(a); 
# 781
} 
# 783
static inline void sincospi(const float a, float *const sptr, float *const cptr) 
# 784
{ 
# 785
sincospif(a, sptr, cptr); 
# 786
} 
# 788
static inline void sincos(const float a, float *const sptr, float *const cptr) 
# 789
{ 
# 790
sincosf(a, sptr, cptr); 
# 791
} 
# 793
static inline float j0(const float a) 
# 794
{ 
# 795
return j0f(a); 
# 796
} 
# 798
static inline float j1(const float a) 
# 799
{ 
# 800
return j1f(a); 
# 801
} 
# 803
static inline float jn(const int n, const float a) 
# 804
{ 
# 805
return jnf(n, a); 
# 806
} 
# 808
static inline float y0(const float a) 
# 809
{ 
# 810
return y0f(a); 
# 811
} 
# 813
static inline float y1(const float a) 
# 814
{ 
# 815
return y1f(a); 
# 816
} 
# 818
static inline float yn(const int n, const float a) 
# 819
{ 
# 820
return ynf(n, a); 
# 821
} 
# 823
__attribute__((unused)) static inline float cyl_bessel_i0(const float a) 
# 824
{int volatile ___ = 1;(void)a;
# 826
::exit(___);}
#if 0
# 824
{ 
# 825
return cyl_bessel_i0f(a); 
# 826
} 
#endif
# 828 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
__attribute__((unused)) static inline float cyl_bessel_i1(const float a) 
# 829
{int volatile ___ = 1;(void)a;
# 831
::exit(___);}
#if 0
# 829
{ 
# 830
return cyl_bessel_i1f(a); 
# 831
} 
#endif
# 833 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
static inline float erfinv(const float a) 
# 834
{ 
# 835
return erfinvf(a); 
# 836
} 
# 838
static inline float erfcinv(const float a) 
# 839
{ 
# 840
return erfcinvf(a); 
# 841
} 
# 843
static inline float normcdfinv(const float a) 
# 844
{ 
# 845
return normcdfinvf(a); 
# 846
} 
# 848
static inline float normcdf(const float a) 
# 849
{ 
# 850
return normcdff(a); 
# 851
} 
# 853
static inline float erfcx(const float a) 
# 854
{ 
# 855
return erfcxf(a); 
# 856
} 
# 858
static inline double copysign(const double a, const float b) 
# 859
{ 
# 860
return copysign(a, static_cast< double>(b)); 
# 861
} 
# 863
static inline double copysign(const float a, const double b) 
# 864
{ 
# 865
return copysign(static_cast< double>(a), b); 
# 866
} 
# 868
static inline unsigned min(const unsigned a, const unsigned b) 
# 869
{ 
# 870
return umin(a, b); 
# 871
} 
# 873
static inline unsigned min(const int a, const unsigned b) 
# 874
{ 
# 875
return umin(static_cast< unsigned>(a), b); 
# 876
} 
# 878
static inline unsigned min(const unsigned a, const int b) 
# 879
{ 
# 880
return umin(a, static_cast< unsigned>(b)); 
# 881
} 
# 883
static inline long min(const long a, const long b) 
# 884
{ 
# 885
long retval; 
# 891
if (sizeof(long) == sizeof(int)) { 
# 895
retval = (static_cast< long>(min(static_cast< int>(a), static_cast< int>(b)))); 
# 896
} else { 
# 897
retval = (static_cast< long>(llmin(static_cast< long long>(a), static_cast< long long>(b)))); 
# 898
}  
# 899
return retval; 
# 900
} 
# 902
static inline unsigned long min(const unsigned long a, const unsigned long b) 
# 903
{ 
# 904
unsigned long retval; 
# 908
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 912
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 913
} else { 
# 914
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 915
}  
# 916
return retval; 
# 917
} 
# 919
static inline unsigned long min(const long a, const unsigned long b) 
# 920
{ 
# 921
unsigned long retval; 
# 925
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 929
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 930
} else { 
# 931
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 932
}  
# 933
return retval; 
# 934
} 
# 936
static inline unsigned long min(const unsigned long a, const long b) 
# 937
{ 
# 938
unsigned long retval; 
# 942
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 946
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 947
} else { 
# 948
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 949
}  
# 950
return retval; 
# 951
} 
# 953
static inline long long min(const long long a, const long long b) 
# 954
{ 
# 955
return llmin(a, b); 
# 956
} 
# 958
static inline unsigned long long min(const unsigned long long a, const unsigned long long b) 
# 959
{ 
# 960
return ullmin(a, b); 
# 961
} 
# 963
static inline unsigned long long min(const long long a, const unsigned long long b) 
# 964
{ 
# 965
return ullmin(static_cast< unsigned long long>(a), b); 
# 966
} 
# 968
static inline unsigned long long min(const unsigned long long a, const long long b) 
# 969
{ 
# 970
return ullmin(a, static_cast< unsigned long long>(b)); 
# 971
} 
# 973
static inline float min(const float a, const float b) 
# 974
{ 
# 975
return fminf(a, b); 
# 976
} 
# 978
static inline double min(const double a, const double b) 
# 979
{ 
# 980
return fmin(a, b); 
# 981
} 
# 983
static inline double min(const float a, const double b) 
# 984
{ 
# 985
return fmin(static_cast< double>(a), b); 
# 986
} 
# 988
static inline double min(const double a, const float b) 
# 989
{ 
# 990
return fmin(a, static_cast< double>(b)); 
# 991
} 
# 993
static inline unsigned max(const unsigned a, const unsigned b) 
# 994
{ 
# 995
return umax(a, b); 
# 996
} 
# 998
static inline unsigned max(const int a, const unsigned b) 
# 999
{ 
# 1000
return umax(static_cast< unsigned>(a), b); 
# 1001
} 
# 1003
static inline unsigned max(const unsigned a, const int b) 
# 1004
{ 
# 1005
return umax(a, static_cast< unsigned>(b)); 
# 1006
} 
# 1008
static inline long max(const long a, const long b) 
# 1009
{ 
# 1010
long retval; 
# 1015
if (sizeof(long) == sizeof(int)) { 
# 1019
retval = (static_cast< long>(max(static_cast< int>(a), static_cast< int>(b)))); 
# 1020
} else { 
# 1021
retval = (static_cast< long>(llmax(static_cast< long long>(a), static_cast< long long>(b)))); 
# 1022
}  
# 1023
return retval; 
# 1024
} 
# 1026
static inline unsigned long max(const unsigned long a, const unsigned long b) 
# 1027
{ 
# 1028
unsigned long retval; 
# 1032
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1036
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1037
} else { 
# 1038
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1039
}  
# 1040
return retval; 
# 1041
} 
# 1043
static inline unsigned long max(const long a, const unsigned long b) 
# 1044
{ 
# 1045
unsigned long retval; 
# 1049
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1053
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1054
} else { 
# 1055
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1056
}  
# 1057
return retval; 
# 1058
} 
# 1060
static inline unsigned long max(const unsigned long a, const long b) 
# 1061
{ 
# 1062
unsigned long retval; 
# 1066
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1070
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1071
} else { 
# 1072
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1073
}  
# 1074
return retval; 
# 1075
} 
# 1077
static inline long long max(const long long a, const long long b) 
# 1078
{ 
# 1079
return llmax(a, b); 
# 1080
} 
# 1082
static inline unsigned long long max(const unsigned long long a, const unsigned long long b) 
# 1083
{ 
# 1084
return ullmax(a, b); 
# 1085
} 
# 1087
static inline unsigned long long max(const long long a, const unsigned long long b) 
# 1088
{ 
# 1089
return ullmax(static_cast< unsigned long long>(a), b); 
# 1090
} 
# 1092
static inline unsigned long long max(const unsigned long long a, const long long b) 
# 1093
{ 
# 1094
return ullmax(a, static_cast< unsigned long long>(b)); 
# 1095
} 
# 1097
static inline float max(const float a, const float b) 
# 1098
{ 
# 1099
return fmaxf(a, b); 
# 1100
} 
# 1102
static inline double max(const double a, const double b) 
# 1103
{ 
# 1104
return fmax(a, b); 
# 1105
} 
# 1107
static inline double max(const float a, const double b) 
# 1108
{ 
# 1109
return fmax(static_cast< double>(a), b); 
# 1110
} 
# 1112
static inline double max(const double a, const float b) 
# 1113
{ 
# 1114
return fmax(a, static_cast< double>(b)); 
# 1115
} 
# 1126 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
inline int min(const int a, const int b) 
# 1127
{ 
# 1128
return (a < b) ? a : b; 
# 1129
} 
# 1131
inline unsigned umin(const unsigned a, const unsigned b) 
# 1132
{ 
# 1133
return (a < b) ? a : b; 
# 1134
} 
# 1136
inline long long llmin(const long long a, const long long b) 
# 1137
{ 
# 1138
return (a < b) ? a : b; 
# 1139
} 
# 1141
inline unsigned long long ullmin(const unsigned long long a, const unsigned long long 
# 1142
b) 
# 1143
{ 
# 1144
return (a < b) ? a : b; 
# 1145
} 
# 1147
inline int max(const int a, const int b) 
# 1148
{ 
# 1149
return (a > b) ? a : b; 
# 1150
} 
# 1152
inline unsigned umax(const unsigned a, const unsigned b) 
# 1153
{ 
# 1154
return (a > b) ? a : b; 
# 1155
} 
# 1157
inline long long llmax(const long long a, const long long b) 
# 1158
{ 
# 1159
return (a > b) ? a : b; 
# 1160
} 
# 1162
inline unsigned long long ullmax(const unsigned long long a, const unsigned long long 
# 1163
b) 
# 1164
{ 
# 1165
return (a > b) ? a : b; 
# 1166
} 
# 74 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 75
struct surface : public surfaceReference { 
# 78
surface() 
# 79
{ 
# 80
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 81
} 
# 83
surface(cudaChannelFormatDesc desc) 
# 84
{ 
# 85
(channelDesc) = desc; 
# 86
} 
# 88
}; 
# 90
template< int dim> 
# 91
struct surface< void, dim>  : public surfaceReference { 
# 94
surface() 
# 95
{ 
# 96
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 97
} 
# 99
}; 
# 74 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 75
struct texture : public textureReference { 
# 78
texture(int norm = 0, cudaTextureFilterMode 
# 79
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 80
aMode = cudaAddressModeClamp) 
# 81
{ 
# 82
(normalized) = norm; 
# 83
(filterMode) = fMode; 
# 84
((addressMode)[0]) = aMode; 
# 85
((addressMode)[1]) = aMode; 
# 86
((addressMode)[2]) = aMode; 
# 87
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 88
(sRGB) = 0; 
# 89
} 
# 91
texture(int norm, cudaTextureFilterMode 
# 92
fMode, cudaTextureAddressMode 
# 93
aMode, cudaChannelFormatDesc 
# 94
desc) 
# 95
{ 
# 96
(normalized) = norm; 
# 97
(filterMode) = fMode; 
# 98
((addressMode)[0]) = aMode; 
# 99
((addressMode)[1]) = aMode; 
# 100
((addressMode)[2]) = aMode; 
# 101
(channelDesc) = desc; 
# 102
(sRGB) = 0; 
# 103
} 
# 105
}; 
# 89 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
extern "C" {
# 3207 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
}
# 3229 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline int mulhi(const int a, const int b); 
# 3231
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline unsigned mulhi(const unsigned a, const unsigned b); 
# 3233
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline unsigned mulhi(const int a, const unsigned b); 
# 3235
__attribute((deprecated("mulhi() is deprecated in favor of __mulhi() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline unsigned mulhi(const unsigned a, const int b); 
# 3237
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline long long mul64hi(const long long a, const long long b); 
# 3239
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const unsigned long long b); 
# 3241
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline unsigned long long mul64hi(const long long a, const unsigned long long b); 
# 3243
__attribute((deprecated("mul64hi() is deprecated in favor of __mul64hi() and may be removed in a future release (Use -Wno-deprecated-declarations to supp" "ress this warning)."))) __attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const long long b); 
# 3245
__attribute((deprecated("float_as_int() is deprecated in favor of __float_as_int() and may be removed in a future release (Use -Wno-deprecated-declaratio" "ns to suppress this warning)."))) __attribute__((unused)) static inline int float_as_int(const float a); 
# 3247
__attribute((deprecated("int_as_float() is deprecated in favor of __int_as_float() and may be removed in a future release (Use -Wno-deprecated-declaratio" "ns to suppress this warning)."))) __attribute__((unused)) static inline float int_as_float(const int a); 
# 3249
__attribute((deprecated("float_as_uint() is deprecated in favor of __float_as_uint() and may be removed in a future release (Use -Wno-deprecated-declarat" "ions to suppress this warning)."))) __attribute__((unused)) static inline unsigned float_as_uint(const float a); 
# 3251
__attribute((deprecated("uint_as_float() is deprecated in favor of __uint_as_float() and may be removed in a future release (Use -Wno-deprecated-declarat" "ions to suppress this warning)."))) __attribute__((unused)) static inline float uint_as_float(const unsigned a); 
# 3253
__attribute((deprecated("saturate() is deprecated in favor of __saturatef() and may be removed in a future release (Use -Wno-deprecated-declarations to s" "uppress this warning)."))) __attribute__((unused)) static inline float saturate(const float a); 
# 3255
__attribute((deprecated("mul24() is deprecated in favor of __mul24() and may be removed in a future release (Use -Wno-deprecated-declarations to suppress" " this warning)."))) __attribute__((unused)) static inline int mul24(const int a, const int b); 
# 3257
__attribute((deprecated("umul24() is deprecated in favor of __umul24() and may be removed in a future release (Use -Wno-deprecated-declarations to suppre" "ss this warning)."))) __attribute__((unused)) static inline unsigned umul24(const unsigned a, const unsigned b); 
# 3259
__attribute((deprecated("float2int() is deprecated in favor of __float2int_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated-d" "eclarations to suppress this warning)."))) __attribute__((unused)) static inline int float2int(const float a, const cudaRoundMode mode = cudaRoundZero); 
# 3261
__attribute((deprecated("float2uint() is deprecated in favor of __float2uint_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated" "-declarations to suppress this warning)."))) __attribute__((unused)) static inline unsigned float2uint(const float a, const cudaRoundMode mode = cudaRoundZero); 
# 3263
__attribute((deprecated("int2float() is deprecated in favor of __int2float_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated-d" "eclarations to suppress this warning)."))) __attribute__((unused)) static inline float int2float(const int a, const cudaRoundMode mode = cudaRoundNearest); 
# 3265
__attribute((deprecated("uint2float() is deprecated in favor of __uint2float_ru|_rd|_rn|_rz() and may be removed in a future release (Use -Wno-deprecated" "-declarations to suppress this warning)."))) __attribute__((unused)) static inline float uint2float(const unsigned a, const cudaRoundMode mode = cudaRoundNearest); 
# 90 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int mulhi(const int a, const int b) 
# 91
{int volatile ___ = 1;(void)a;(void)b;
# 93
::exit(___);}
#if 0
# 91
{ 
# 92
return __mulhi(a, b); 
# 93
} 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(const unsigned a, const unsigned b) 
# 96
{int volatile ___ = 1;(void)a;(void)b;
# 98
::exit(___);}
#if 0
# 96
{ 
# 97
return __umulhi(a, b); 
# 98
} 
#endif
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(const int a, const unsigned b) 
# 101
{int volatile ___ = 1;(void)a;(void)b;
# 103
::exit(___);}
#if 0
# 101
{ 
# 102
return __umulhi(static_cast< unsigned>(a), b); 
# 103
} 
#endif
# 105 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(const unsigned a, const int b) 
# 106
{int volatile ___ = 1;(void)a;(void)b;
# 108
::exit(___);}
#if 0
# 106
{ 
# 107
return __umulhi(a, static_cast< unsigned>(b)); 
# 108
} 
#endif
# 110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline long long mul64hi(const long long a, const long long b) 
# 111
{int volatile ___ = 1;(void)a;(void)b;
# 113
::exit(___);}
#if 0
# 111
{ 
# 112
return __mul64hi(a, b); 
# 113
} 
#endif
# 115 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const unsigned long long b) 
# 116
{int volatile ___ = 1;(void)a;(void)b;
# 118
::exit(___);}
#if 0
# 116
{ 
# 117
return __umul64hi(a, b); 
# 118
} 
#endif
# 120 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(const long long a, const unsigned long long b) 
# 121
{int volatile ___ = 1;(void)a;(void)b;
# 123
::exit(___);}
#if 0
# 121
{ 
# 122
return __umul64hi(static_cast< unsigned long long>(a), b); 
# 123
} 
#endif
# 125 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(const unsigned long long a, const long long b) 
# 126
{int volatile ___ = 1;(void)a;(void)b;
# 128
::exit(___);}
#if 0
# 126
{ 
# 127
return __umul64hi(a, static_cast< unsigned long long>(b)); 
# 128
} 
#endif
# 130 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int float_as_int(const float a) 
# 131
{int volatile ___ = 1;(void)a;
# 133
::exit(___);}
#if 0
# 131
{ 
# 132
return __float_as_int(a); 
# 133
} 
#endif
# 135 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float int_as_float(const int a) 
# 136
{int volatile ___ = 1;(void)a;
# 138
::exit(___);}
#if 0
# 136
{ 
# 137
return __int_as_float(a); 
# 138
} 
#endif
# 140 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned float_as_uint(const float a) 
# 141
{int volatile ___ = 1;(void)a;
# 143
::exit(___);}
#if 0
# 141
{ 
# 142
return __float_as_uint(a); 
# 143
} 
#endif
# 145 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float uint_as_float(const unsigned a) 
# 146
{int volatile ___ = 1;(void)a;
# 148
::exit(___);}
#if 0
# 146
{ 
# 147
return __uint_as_float(a); 
# 148
} 
#endif
# 149 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float saturate(const float a) 
# 150
{int volatile ___ = 1;(void)a;
# 152
::exit(___);}
#if 0
# 150
{ 
# 151
return __saturatef(a); 
# 152
} 
#endif
# 154 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int mul24(const int a, const int b) 
# 155
{int volatile ___ = 1;(void)a;(void)b;
# 157
::exit(___);}
#if 0
# 155
{ 
# 156
return __mul24(a, b); 
# 157
} 
#endif
# 159 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned umul24(const unsigned a, const unsigned b) 
# 160
{int volatile ___ = 1;(void)a;(void)b;
# 162
::exit(___);}
#if 0
# 160
{ 
# 161
return __umul24(a, b); 
# 162
} 
#endif
# 164 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int float2int(const float a, const cudaRoundMode mode) 
# 165
{int volatile ___ = 1;(void)a;(void)mode;
# 170
::exit(___);}
#if 0
# 165
{ 
# 166
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 170
} 
#endif
# 172 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned float2uint(const float a, const cudaRoundMode mode) 
# 173
{int volatile ___ = 1;(void)a;(void)mode;
# 178
::exit(___);}
#if 0
# 173
{ 
# 174
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 178
} 
#endif
# 180 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float int2float(const int a, const cudaRoundMode mode) 
# 181
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 181
{ 
# 182
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 186
} 
#endif
# 188 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float uint2float(const unsigned a, const cudaRoundMode mode) 
# 189
{int volatile ___ = 1;(void)a;(void)mode;
# 194
::exit(___);}
#if 0
# 189
{ 
# 190
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 194
} 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 120 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 120
{ } 
#endif
# 122 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 122
{ } 
#endif
# 124 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 128
{ } 
#endif
# 130 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 132
{ } 
#endif
# 134 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 134
{ } 
#endif
# 136 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 138
{ } 
#endif
# 140 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 140
{ } 
#endif
# 142 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 144
{ } 
#endif
# 146 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 146
{ } 
#endif
# 171 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
extern "C" {
# 180
}
# 189 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 191 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 193
{ } 
#endif
# 195 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 195
{ } 
#endif
# 197 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 197
{ } 
#endif
# 87 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.h"
extern "C" {
# 1139 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.h"
}
# 1147
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1149
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1151
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1153
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1155
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1157
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1159
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1161
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1163
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1165
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1167
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1169
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1171
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 93 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 94
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 99
::exit(___);}
#if 0
# 94
{ 
# 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 99
} 
#endif
# 101 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 102
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 107
::exit(___);}
#if 0
# 102
{ 
# 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 107
} 
#endif
# 109 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 110
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 115
::exit(___);}
#if 0
# 110
{ 
# 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 115
} 
#endif
# 117 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 118
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 123
::exit(___);}
#if 0
# 118
{ 
# 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 123
} 
#endif
# 125 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 126
{int volatile ___ = 1;(void)a;(void)mode;
# 131
::exit(___);}
#if 0
# 126
{ 
# 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 131
} 
#endif
# 133 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 134
{int volatile ___ = 1;(void)a;(void)mode;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 139
} 
#endif
# 141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 142
{int volatile ___ = 1;(void)a;(void)mode;
# 147
::exit(___);}
#if 0
# 142
{ 
# 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 147
} 
#endif
# 149 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 150
{int volatile ___ = 1;(void)a;(void)mode;
# 155
::exit(___);}
#if 0
# 150
{ 
# 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 155
} 
#endif
# 157 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 158
{int volatile ___ = 1;(void)a;(void)mode;
# 163
::exit(___);}
#if 0
# 158
{ 
# 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 163
} 
#endif
# 165 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 166
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 166
{ 
# 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 171
} 
#endif
# 173 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 178 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 181
::exit(___);}
#if 0
# 179
{ 
# 180
return (double)a; 
# 181
} 
#endif
# 183 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 184
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 184
{ 
# 185
return (double)a; 
# 186
} 
#endif
# 89 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 104 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 104
{ } 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 303 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 303
{ } 
#endif
# 306 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 306
{ } 
#endif
# 309 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 309
{ } 
#endif
# 312 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 312
{ } 
#endif
# 315 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 315
{ } 
#endif
# 318 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 318
{ } 
#endif
# 321 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 321
{ } 
#endif
# 324 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 324
{ } 
#endif
# 327 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 327
{ } 
#endif
# 330 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 330
{ } 
#endif
# 333 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 333
{ } 
#endif
# 336 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 336
{ } 
#endif
# 339 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 339
{ } 
#endif
# 342 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 342
{ } 
#endif
# 345 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 345
{ } 
#endif
# 348 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 348
{ } 
#endif
# 351 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 351
{ } 
#endif
# 354 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 354
{ } 
#endif
# 357 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 357
{ } 
#endif
# 360 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 360
{ } 
#endif
# 363 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 363
{ } 
#endif
# 366 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 366
{ } 
#endif
# 369 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 369
{ } 
#endif
# 372 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 372
{ } 
#endif
# 375 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 375
{ } 
#endif
# 378 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 378
{ } 
#endif
# 381 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 381
{ } 
#endif
# 384 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 384
{ } 
#endif
# 387 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 387
{ } 
#endif
# 390 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 390
{ } 
#endif
# 393 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 393
{ } 
#endif
# 396 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 396
{ } 
#endif
# 399 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 399
{ } 
#endif
# 402 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 402
{ } 
#endif
# 405 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 405
{ } 
#endif
# 408 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 408
{ } 
#endif
# 411 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 411
{ } 
#endif
# 414 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 414
{ } 
#endif
# 417 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 417
{ } 
#endif
# 420 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 420
{ } 
#endif
# 423 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 423
{ } 
#endif
# 426 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 426
{ } 
#endif
# 429 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 429
{ } 
#endif
# 432 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 432
{ } 
#endif
# 435 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 435
{ } 
#endif
# 438 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 439
{ } 
#endif
# 442 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 443
{ } 
#endif
# 446 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 447
compare, unsigned long long 
# 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 448
{ } 
#endif
# 451 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 452
compare, unsigned long long 
# 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 453
{ } 
#endif
# 456 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 456
{ } 
#endif
# 459 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 459
{ } 
#endif
# 462 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 462
{ } 
#endif
# 465 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 465
{ } 
#endif
# 468 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 468
{ } 
#endif
# 471 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 471
{ } 
#endif
# 474 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 474
{ } 
#endif
# 477 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 477
{ } 
#endif
# 480 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 480
{ } 
#endif
# 483 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 483
{ } 
#endif
# 486 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 486
{ } 
#endif
# 489 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 489
{ } 
#endif
# 492 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 492
{ } 
#endif
# 495 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 495
{ } 
#endif
# 498 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 498
{ } 
#endif
# 501 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 501
{ } 
#endif
# 504 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 504
{ } 
#endif
# 507 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 507
{ } 
#endif
# 510 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 510
{ } 
#endif
# 513 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 513
{ } 
#endif
# 516 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 516
{ } 
#endif
# 519 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 519
{ } 
#endif
# 522 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 522
{ } 
#endif
# 525 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 525
{ } 
#endif
# 90 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
extern "C" {
# 1503 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
}
# 1510
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1510
{ } 
#endif
# 1512 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1512
{ } 
#endif
# 1514 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1514
{ } 
#endif
# 1516 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1516
{ } 
#endif
# 1521 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1521
{ } 
#endif
# 1522 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1522
{ } 
#endif
# 1523 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1523
{ } 
#endif
# 1524 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1524
{ } 
#endif
# 1526 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGridConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1526
{ } 
#endif
# 1528 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_global(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1528
{ } 
#endif
# 1529 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_shared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1529
{ } 
#endif
# 1530 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1530
{ } 
#endif
# 1531 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_local(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1531
{ } 
#endif
# 1533 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_grid_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1533
{ } 
#endif
# 1536 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_global_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1536
{ } 
#endif
# 1537 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_shared_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1537
{ } 
#endif
# 1538 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1538
{ } 
#endif
# 1539 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_local_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1539
{ } 
#endif
# 1541 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_grid_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1541
{ } 
#endif
# 102 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 110
{ } 
#endif
# 119 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 121
{ } 
#endif
# 122 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 122
{ } 
#endif
# 123 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 125 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 133 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 148 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 159
{ } 
#endif
# 162 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 177 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 187 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 87 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 87
{ } 
#endif
# 88 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 88
{ } 
#endif
# 90 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 91 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 116 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 116
{ } 
#endif
# 117 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 123 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 151 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 159 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 160
{ } 
#endif
# 162 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 195 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 195
{ } 
#endif
# 196 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 196
{ } 
#endif
# 198 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 199
{ } 
#endif
# 200 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 211 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 223 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 224 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 224
{ } 
#endif
# 225 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 231 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldlu(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 231
{ } 
#endif
# 232 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldlu(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 232
{ } 
#endif
# 234 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldlu(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 234
{ } 
#endif
# 235 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldlu(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 235
{ } 
#endif
# 236 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldlu(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 236
{ } 
#endif
# 237 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldlu(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 237
{ } 
#endif
# 238 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldlu(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 238
{ } 
#endif
# 239 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldlu(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 239
{ } 
#endif
# 240 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldlu(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 240
{ } 
#endif
# 241 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldlu(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 241
{ } 
#endif
# 242 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldlu(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 242
{ } 
#endif
# 243 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldlu(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 243
{ } 
#endif
# 244 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldlu(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 244
{ } 
#endif
# 245 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldlu(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 245
{ } 
#endif
# 247 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldlu(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 247
{ } 
#endif
# 248 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldlu(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 248
{ } 
#endif
# 249 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldlu(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 249
{ } 
#endif
# 250 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldlu(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 250
{ } 
#endif
# 251 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldlu(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 251
{ } 
#endif
# 252 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldlu(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 252
{ } 
#endif
# 253 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldlu(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 253
{ } 
#endif
# 254 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldlu(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 254
{ } 
#endif
# 255 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldlu(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 255
{ } 
#endif
# 256 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldlu(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 256
{ } 
#endif
# 257 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldlu(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 257
{ } 
#endif
# 259 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldlu(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 259
{ } 
#endif
# 260 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldlu(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 260
{ } 
#endif
# 261 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldlu(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 261
{ } 
#endif
# 262 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldlu(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 262
{ } 
#endif
# 263 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldlu(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 263
{ } 
#endif
# 267 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcv(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 267
{ } 
#endif
# 268 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcv(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 268
{ } 
#endif
# 270 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcv(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 270
{ } 
#endif
# 271 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcv(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 271
{ } 
#endif
# 272 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcv(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 272
{ } 
#endif
# 273 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcv(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 273
{ } 
#endif
# 274 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcv(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 274
{ } 
#endif
# 275 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcv(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 275
{ } 
#endif
# 276 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcv(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 276
{ } 
#endif
# 277 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcv(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 277
{ } 
#endif
# 278 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcv(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 278
{ } 
#endif
# 279 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcv(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 279
{ } 
#endif
# 280 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcv(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 280
{ } 
#endif
# 281 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcv(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 281
{ } 
#endif
# 283 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcv(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 283
{ } 
#endif
# 284 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcv(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 284
{ } 
#endif
# 285 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcv(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 285
{ } 
#endif
# 286 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcv(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 286
{ } 
#endif
# 287 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcv(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 287
{ } 
#endif
# 288 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcv(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 288
{ } 
#endif
# 289 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcv(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 289
{ } 
#endif
# 290 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcv(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 290
{ } 
#endif
# 291 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcv(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 291
{ } 
#endif
# 292 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcv(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 292
{ } 
#endif
# 293 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcv(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 293
{ } 
#endif
# 295 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcv(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 295
{ } 
#endif
# 296 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcv(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 296
{ } 
#endif
# 297 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcv(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 297
{ } 
#endif
# 298 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcv(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 298
{ } 
#endif
# 299 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcv(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 299
{ } 
#endif
# 303 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 303
{ } 
#endif
# 304 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 304
{ } 
#endif
# 306 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 306
{ } 
#endif
# 307 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 307
{ } 
#endif
# 308 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 308
{ } 
#endif
# 309 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 309
{ } 
#endif
# 310 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 310
{ } 
#endif
# 311 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 311
{ } 
#endif
# 312 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 312
{ } 
#endif
# 313 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 313
{ } 
#endif
# 314 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 314
{ } 
#endif
# 315 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 315
{ } 
#endif
# 316 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 316
{ } 
#endif
# 317 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 317
{ } 
#endif
# 319 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 319
{ } 
#endif
# 320 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 320
{ } 
#endif
# 321 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 321
{ } 
#endif
# 322 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 322
{ } 
#endif
# 323 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 323
{ } 
#endif
# 324 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 324
{ } 
#endif
# 325 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 325
{ } 
#endif
# 326 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 326
{ } 
#endif
# 327 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 327
{ } 
#endif
# 328 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 328
{ } 
#endif
# 329 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 329
{ } 
#endif
# 331 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 331
{ } 
#endif
# 332 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 332
{ } 
#endif
# 333 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 333
{ } 
#endif
# 334 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 334
{ } 
#endif
# 335 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 335
{ } 
#endif
# 339 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 339
{ } 
#endif
# 340 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 340
{ } 
#endif
# 342 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 342
{ } 
#endif
# 343 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 343
{ } 
#endif
# 344 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 344
{ } 
#endif
# 345 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 345
{ } 
#endif
# 346 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 346
{ } 
#endif
# 347 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 347
{ } 
#endif
# 348 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 348
{ } 
#endif
# 349 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 349
{ } 
#endif
# 350 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 350
{ } 
#endif
# 351 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 351
{ } 
#endif
# 352 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 352
{ } 
#endif
# 353 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 353
{ } 
#endif
# 355 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 355
{ } 
#endif
# 356 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 356
{ } 
#endif
# 357 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 357
{ } 
#endif
# 358 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 358
{ } 
#endif
# 359 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 359
{ } 
#endif
# 360 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 360
{ } 
#endif
# 361 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 361
{ } 
#endif
# 362 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 362
{ } 
#endif
# 363 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 363
{ } 
#endif
# 364 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 364
{ } 
#endif
# 365 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 365
{ } 
#endif
# 367 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 367
{ } 
#endif
# 368 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 368
{ } 
#endif
# 369 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 369
{ } 
#endif
# 370 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 370
{ } 
#endif
# 371 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 371
{ } 
#endif
# 375 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 375
{ } 
#endif
# 376 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 376
{ } 
#endif
# 378 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 378
{ } 
#endif
# 379 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 379
{ } 
#endif
# 380 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 380
{ } 
#endif
# 381 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 381
{ } 
#endif
# 382 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 382
{ } 
#endif
# 383 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 383
{ } 
#endif
# 384 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 384
{ } 
#endif
# 385 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 385
{ } 
#endif
# 386 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 386
{ } 
#endif
# 387 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 387
{ } 
#endif
# 388 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 388
{ } 
#endif
# 389 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 389
{ } 
#endif
# 391 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 391
{ } 
#endif
# 392 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 392
{ } 
#endif
# 393 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 393
{ } 
#endif
# 394 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 394
{ } 
#endif
# 395 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 395
{ } 
#endif
# 396 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 396
{ } 
#endif
# 397 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 397
{ } 
#endif
# 398 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 398
{ } 
#endif
# 399 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 399
{ } 
#endif
# 400 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 400
{ } 
#endif
# 401 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 401
{ } 
#endif
# 403 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 403
{ } 
#endif
# 404 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 404
{ } 
#endif
# 405 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 405
{ } 
#endif
# 406 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 406
{ } 
#endif
# 407 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 407
{ } 
#endif
# 411 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 411
{ } 
#endif
# 412 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 412
{ } 
#endif
# 414 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 414
{ } 
#endif
# 415 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 415
{ } 
#endif
# 416 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 416
{ } 
#endif
# 417 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 417
{ } 
#endif
# 418 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 418
{ } 
#endif
# 419 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 419
{ } 
#endif
# 420 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 420
{ } 
#endif
# 421 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 421
{ } 
#endif
# 422 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 422
{ } 
#endif
# 423 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 423
{ } 
#endif
# 424 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 424
{ } 
#endif
# 425 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 425
{ } 
#endif
# 427 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 427
{ } 
#endif
# 428 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 428
{ } 
#endif
# 429 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 429
{ } 
#endif
# 430 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 430
{ } 
#endif
# 431 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 431
{ } 
#endif
# 432 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 432
{ } 
#endif
# 433 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 433
{ } 
#endif
# 434 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 434
{ } 
#endif
# 435 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 435
{ } 
#endif
# 436 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 436
{ } 
#endif
# 437 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 437
{ } 
#endif
# 439 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 439
{ } 
#endif
# 440 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 440
{ } 
#endif
# 441 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 441
{ } 
#endif
# 442 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 442
{ } 
#endif
# 443 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 443
{ } 
#endif
# 460 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 460
{ } 
#endif
# 472 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 472
{ } 
#endif
# 485 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 485
{ } 
#endif
# 497 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 497
{ } 
#endif
# 89 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 96
{ } 
#endif
# 98 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 99
{ } 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 110
{ } 
#endif
# 93 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 93 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_add_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_min_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_max_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_add_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_min_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_max_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_and_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_or_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_xor_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 103
{ } 
#endif
# 106 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
extern "C" {
# 107
__attribute__((unused)) inline void *__nv_associate_access_property(const void *ptr, unsigned long long 
# 108
property) {int volatile ___ = 1;(void)ptr;(void)property;
# 112
::exit(___);}
#if 0
# 108
{ 
# 109
__attribute__((unused)) extern void *__nv_associate_access_property_impl(const void *, unsigned long long); 
# 111
return __nv_associate_access_property_impl(ptr, property); 
# 112
} 
#endif
# 114 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_4(void *dst, const void *
# 115
src, unsigned 
# 116
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 121
::exit(___);}
#if 0
# 116
{ 
# 117
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_4_impl(void *, const void *, unsigned); 
# 120
__nv_memcpy_async_shared_global_4_impl(dst, src, src_size); 
# 121
} 
#endif
# 123 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_8(void *dst, const void *
# 124
src, unsigned 
# 125
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 130
::exit(___);}
#if 0
# 125
{ 
# 126
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_8_impl(void *, const void *, unsigned); 
# 129
__nv_memcpy_async_shared_global_8_impl(dst, src, src_size); 
# 130
} 
#endif
# 132 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_16(void *dst, const void *
# 133
src, unsigned 
# 134
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_16_impl(void *, const void *, unsigned); 
# 138
__nv_memcpy_async_shared_global_16_impl(dst, src, src_size); 
# 139
} 
#endif
# 141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_80_rt.h"
}
# 89 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __isCtaShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __isClusterShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 91 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void *__cluster_map_shared_rank(const void *ptr, unsigned target_block_rank) {int volatile ___ = 1;(void)ptr;(void)target_block_rank;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __cluster_query_shared_rank(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline uint2 __cluster_map_shared_multicast(const void *ptr, unsigned cluster_cta_mask) {int volatile ___ = 1;(void)ptr;(void)cluster_cta_mask;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterDimIsSpecified() {int volatile ___ = 1;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterDim() {int volatile ___ = 1;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterRelativeBlockIdx() {int volatile ___ = 1;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterGridDimInClusters() {int volatile ___ = 1;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterIdx() {int volatile ___ = 1;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterRelativeBlockRank() {int volatile ___ = 1;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterSizeInBlocks() {int volatile ___ = 1;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_arrive() {int volatile ___ = 1;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_wait() {int volatile ___ = 1;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __threadfence_cluster() {int volatile ___ = 1;::exit(___);}
#if 0
# 103
{ } 
#endif
# 122 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 123
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 124
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 128
::exit(___);}
#if 0
# 124
{ 
# 128
} 
#endif
# 130 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 131
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 132
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 138
::exit(___);}
#if 0
# 132
{ 
# 138
} 
#endif
# 140 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 141
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 142
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 146
::exit(___);}
#if 0
# 142
{ 
# 146
} 
#endif
# 149 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 150
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 151
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 155
::exit(___);}
#if 0
# 151
{ 
# 155
} 
#endif
# 157 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 158
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 159
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 165
::exit(___);}
#if 0
# 159
{ 
# 165
} 
#endif
# 167 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 168
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 169
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 173
::exit(___);}
#if 0
# 169
{ 
# 173
} 
#endif
# 176 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 177
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 178
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 182
::exit(___);}
#if 0
# 178
{ 
# 182
} 
#endif
# 184 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 185
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 186
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 192
::exit(___);}
#if 0
# 186
{ 
# 192
} 
#endif
# 194 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 195
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 196
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 200
::exit(___);}
#if 0
# 196
{ 
# 200
} 
#endif
# 204 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 205
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 206
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 210
::exit(___);}
#if 0
# 206
{ 
# 210
} 
#endif
# 212 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 213
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 214
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 220
::exit(___);}
#if 0
# 214
{ 
# 220
} 
#endif
# 223 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 224
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 225
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 229
::exit(___);}
#if 0
# 225
{ 
# 229
} 
#endif
# 232 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 233
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 234
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 238
::exit(___);}
#if 0
# 234
{ 
# 238
} 
#endif
# 240 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 241
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 242
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 248
::exit(___);}
#if 0
# 242
{ 
# 248
} 
#endif
# 251 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 252
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 253
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 257
::exit(___);}
#if 0
# 253
{ 
# 257
} 
#endif
# 260 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 261
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 262
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 266
::exit(___);}
#if 0
# 262
{ 
# 266
} 
#endif
# 268 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 269
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 270
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 277
::exit(___);}
#if 0
# 270
{ 
# 277
} 
#endif
# 279 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 280
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 281
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 285
::exit(___);}
#if 0
# 281
{ 
# 285
} 
#endif
# 288 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 289
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 290
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 294
::exit(___);}
#if 0
# 290
{ 
# 294
} 
#endif
# 296 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 297
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 298
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 304
::exit(___);}
#if 0
# 298
{ 
# 304
} 
#endif
# 306 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 307
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 308
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 312
::exit(___);}
#if 0
# 308
{ 
# 312
} 
#endif
# 315 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 316
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 317
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 321
::exit(___);}
#if 0
# 317
{ 
# 321
} 
#endif
# 323 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 324
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 325
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 329
::exit(___);}
#if 0
# 325
{ 
# 329
} 
#endif
# 333 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 334
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 335
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 339
::exit(___);}
#if 0
# 335
{ 
# 339
} 
#endif
# 341 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 342
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 343
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 347
::exit(___);}
#if 0
# 343
{ 
# 347
} 
#endif
# 350 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 351
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 352
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 356
::exit(___);}
#if 0
# 352
{ 
# 356
} 
#endif
# 358 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 359
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 360
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 364
::exit(___);}
#if 0
# 360
{ 
# 364
} 
#endif
# 367 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 368
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 369
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 373
::exit(___);}
#if 0
# 369
{ 
# 373
} 
#endif
# 375 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 376
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 377
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 381
::exit(___);}
#if 0
# 377
{ 
# 381
} 
#endif
# 384 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 385
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 386
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 390
::exit(___);}
#if 0
# 386
{ 
# 390
} 
#endif
# 392 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 393
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 394
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 398
::exit(___);}
#if 0
# 394
{ 
# 398
} 
#endif
# 401 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 402
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 403
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 407
::exit(___);}
#if 0
# 403
{ 
# 407
} 
#endif
# 409 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 410
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 411
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 415
::exit(___);}
#if 0
# 411
{ 
# 415
} 
#endif
# 419 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 420
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 421
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 425
::exit(___);}
#if 0
# 421
{ 
# 425
} 
#endif
# 427 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 428
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 429
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 433
::exit(___);}
#if 0
# 429
{ 
# 433
} 
#endif
# 72 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 73
struct __nv_tex_rmet_ret { }; 
# 75
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
# 76
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
# 77
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
# 78
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
# 79
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
# 80
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
# 81
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
# 82
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
# 83
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
# 85
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
# 86
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
# 87
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
# 88
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
# 89
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
# 90
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
# 91
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
# 92
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
# 94
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
# 95
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
# 96
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
# 97
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
# 98
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
# 99
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
# 100
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
# 101
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
# 113 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
# 114
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
# 115
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
# 116
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
# 119
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
# 131 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 132
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) 
# 133
{int volatile ___ = 1;(void)t;(void)x;
# 139
::exit(___);}
#if 0
# 133
{ 
# 139
} 
#endif
# 141 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 142
struct __nv_tex_rmnf_ret { }; 
# 144
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
# 145
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
# 146
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
# 147
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
# 148
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
# 149
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
# 150
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
# 151
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
# 152
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
# 153
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
# 154
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
# 155
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
# 156
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
# 157
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
# 158
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 159
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
# 160
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 162
template< class T> 
# 163
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 164
{int volatile ___ = 1;(void)t;(void)x;
# 171
::exit(___);}
#if 0
# 164
{ 
# 171
} 
#endif
# 174 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 175
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) 
# 176
{int volatile ___ = 1;(void)t;(void)x;
# 182
::exit(___);}
#if 0
# 176
{ 
# 182
} 
#endif
# 184 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 185
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 186
{int volatile ___ = 1;(void)t;(void)x;
# 193
::exit(___);}
#if 0
# 186
{ 
# 193
} 
#endif
# 197 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 198
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) 
# 199
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 206
::exit(___);}
#if 0
# 199
{ 
# 206
} 
#endif
# 208 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 209
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 210
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 217
::exit(___);}
#if 0
# 210
{ 
# 217
} 
#endif
# 221 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 222
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) 
# 223
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 229
::exit(___);}
#if 0
# 223
{ 
# 229
} 
#endif
# 231 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 232
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 233
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 240
::exit(___);}
#if 0
# 233
{ 
# 240
} 
#endif
# 244 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 245
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 246
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 252
::exit(___);}
#if 0
# 246
{ 
# 252
} 
#endif
# 254 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 255
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 256
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 263
::exit(___);}
#if 0
# 256
{ 
# 263
} 
#endif
# 266 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 267
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 268
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 274
::exit(___);}
#if 0
# 268
{ 
# 274
} 
#endif
# 276 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 277
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 278
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 285
::exit(___);}
#if 0
# 278
{ 
# 285
} 
#endif
# 288 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 289
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 290
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 296
::exit(___);}
#if 0
# 290
{ 
# 296
} 
#endif
# 298 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 299
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 300
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 307
::exit(___);}
#if 0
# 300
{ 
# 307
} 
#endif
# 310 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 311
struct __nv_tex2dgather_ret { }; 
# 312
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
# 313
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
# 314
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
# 315
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
# 316
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
# 317
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
# 318
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
# 319
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
# 320
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
# 321
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
# 322
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
# 324
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
# 325
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
# 326
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
# 327
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
# 328
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
# 329
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
# 330
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
# 331
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
# 332
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
# 333
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
# 335
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
# 336
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
# 337
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
# 338
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
# 339
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
# 340
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
# 341
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
# 342
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
# 343
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
# 344
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
# 346
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
# 347
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
# 348
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
# 349
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
# 350
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
# 352
template< class T> 
# 353
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 354
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 361
::exit(___);}
#if 0
# 354
{ 
# 361
} 
#endif
# 364 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
# 365
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
# 366
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
# 367
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
# 368
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
# 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
# 370
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
# 371
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
# 372
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
# 373
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
# 374
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
# 375
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 376
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
# 377
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
# 378
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
# 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
# 380
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
# 381
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
# 382
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
# 383
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
# 384
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
# 385
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 387
template< class T> 
# 388
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_rmnf_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 389
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 396
::exit(___);}
#if 0
# 389
{ 
# 396
} 
#endif
# 400 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 401
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) 
# 402
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 408
::exit(___);}
#if 0
# 402
{ 
# 408
} 
#endif
# 410 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 411
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) 
# 412
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 419
::exit(___);}
#if 0
# 412
{ 
# 419
} 
#endif
# 422 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 423
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) 
# 424
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 430
::exit(___);}
#if 0
# 424
{ 
# 430
} 
#endif
# 432 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 433
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) 
# 434
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 441
::exit(___);}
#if 0
# 434
{ 
# 441
} 
#endif
# 444 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 445
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) 
# 446
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 452
::exit(___);}
#if 0
# 446
{ 
# 452
} 
#endif
# 454 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 455
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) 
# 456
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 463
::exit(___);}
#if 0
# 456
{ 
# 463
} 
#endif
# 466 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 467
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) 
# 468
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 474
::exit(___);}
#if 0
# 468
{ 
# 474
} 
#endif
# 476 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 477
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) 
# 478
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 485
::exit(___);}
#if 0
# 478
{ 
# 485
} 
#endif
# 488 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 489
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 490
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 496
::exit(___);}
#if 0
# 490
{ 
# 496
} 
#endif
# 498 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 499
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 500
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 507
::exit(___);}
#if 0
# 500
{ 
# 507
} 
#endif
# 510 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 511
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 512
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 518
::exit(___);}
#if 0
# 512
{ 
# 518
} 
#endif
# 520 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 521
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 522
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 529
::exit(___);}
#if 0
# 522
{ 
# 529
} 
#endif
# 533 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 534
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 535
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 541
::exit(___);}
#if 0
# 535
{ 
# 541
} 
#endif
# 543 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 544
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 545
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 552
::exit(___);}
#if 0
# 545
{ 
# 552
} 
#endif
# 556 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 557
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) 
# 558
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 564
::exit(___);}
#if 0
# 558
{ 
# 564
} 
#endif
# 566 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 567
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) 
# 568
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 575
::exit(___);}
#if 0
# 568
{ 
# 575
} 
#endif
# 579 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 580
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 581
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 587
::exit(___);}
#if 0
# 581
{ 
# 587
} 
#endif
# 589 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 590
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 591
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 598
::exit(___);}
#if 0
# 591
{ 
# 598
} 
#endif
# 602 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 603
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 604
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 610
::exit(___);}
#if 0
# 604
{ 
# 610
} 
#endif
# 612 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 613
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 614
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 621
::exit(___);}
#if 0
# 614
{ 
# 621
} 
#endif
# 625 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 626
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) 
# 627
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 633
::exit(___);}
#if 0
# 627
{ 
# 633
} 
#endif
# 635 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 636
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) 
# 637
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 644
::exit(___);}
#if 0
# 637
{ 
# 644
} 
#endif
# 648 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 649
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 650
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 656
::exit(___);}
#if 0
# 650
{ 
# 656
} 
#endif
# 658 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 659
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 660
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 667
::exit(___);}
#if 0
# 660
{ 
# 667
} 
#endif
# 670 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 671
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) 
# 672
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 678
::exit(___);}
#if 0
# 672
{ 
# 678
} 
#endif
# 680 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 681
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) 
# 682
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 689
::exit(___);}
#if 0
# 682
{ 
# 689
} 
#endif
# 692 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 693
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 694
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 700
::exit(___);}
#if 0
# 694
{ 
# 700
} 
#endif
# 702 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 703
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 704
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 711
::exit(___);}
#if 0
# 704
{ 
# 711
} 
#endif
# 714 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 715
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 716
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 722
::exit(___);}
#if 0
# 716
{ 
# 722
} 
#endif
# 724 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 725
__attribute((deprecated)) __attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 726
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 733
::exit(___);}
#if 0
# 726
{ 
# 733
} 
#endif
# 64 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
# 65
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 66
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 86
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 87
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 88
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 89
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 100 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 101
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 102
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 103
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 107
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 108
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 109
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 113
::exit(___);}
#if 0
# 109
{ 
# 113
} 
#endif
# 115 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 116
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 117
{int volatile ___ = 1;(void)texObject;(void)x;
# 123
::exit(___);}
#if 0
# 117
{ 
# 123
} 
#endif
# 125 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 126
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 127
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 131
::exit(___);}
#if 0
# 127
{ 
# 131
} 
#endif
# 134 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 135
tex1D(cudaTextureObject_t texObject, float x) 
# 136
{int volatile ___ = 1;(void)texObject;(void)x;
# 142
::exit(___);}
#if 0
# 136
{ 
# 142
} 
#endif
# 145 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 146
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 147
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 151
::exit(___);}
#if 0
# 147
{ 
# 151
} 
#endif
# 153 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 154
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 155
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 161
::exit(___);}
#if 0
# 155
{ 
# 161
} 
#endif
# 164 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 165
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y, bool *
# 166
isResident) 
# 167
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;
# 173
::exit(___);}
#if 0
# 167
{ 
# 173
} 
#endif
# 175 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 176
tex2D(cudaTextureObject_t texObject, float x, float y, bool *isResident) 
# 177
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)isResident;
# 183
::exit(___);}
#if 0
# 177
{ 
# 183
} 
#endif
# 188 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 189
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 190
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 194
::exit(___);}
#if 0
# 190
{ 
# 194
} 
#endif
# 196 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 197
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 198
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 204
::exit(___);}
#if 0
# 198
{ 
# 204
} 
#endif
# 207 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 208
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z, bool *
# 209
isResident) 
# 210
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)isResident;
# 216
::exit(___);}
#if 0
# 210
{ 
# 216
} 
#endif
# 218 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 219
tex3D(cudaTextureObject_t texObject, float x, float y, float z, bool *isResident) 
# 220
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)isResident;
# 226
::exit(___);}
#if 0
# 220
{ 
# 226
} 
#endif
# 230 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 231
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 232
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 236
::exit(___);}
#if 0
# 232
{ 
# 236
} 
#endif
# 238 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 239
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 240
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 246
::exit(___);}
#if 0
# 240
{ 
# 246
} 
#endif
# 248 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 249
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 250
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 254
::exit(___);}
#if 0
# 250
{ 
# 254
} 
#endif
# 256 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 257
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 258
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 264
::exit(___);}
#if 0
# 258
{ 
# 264
} 
#endif
# 267 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 268
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, bool *isResident) 
# 269
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)isResident;
# 275
::exit(___);}
#if 0
# 269
{ 
# 275
} 
#endif
# 277 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 278
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer, bool *isResident) 
# 279
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)isResident;
# 285
::exit(___);}
#if 0
# 279
{ 
# 285
} 
#endif
# 289 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 290
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 291
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 295
::exit(___);}
#if 0
# 291
{ 
# 295
} 
#endif
# 298 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 299
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 300
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 306
::exit(___);}
#if 0
# 300
{ 
# 306
} 
#endif
# 309 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 310
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 311
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 315
::exit(___);}
#if 0
# 311
{ 
# 315
} 
#endif
# 317 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 318
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 319
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 325
::exit(___);}
#if 0
# 319
{ 
# 325
} 
#endif
# 327 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 328
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 329
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 333
::exit(___);}
#if 0
# 329
{ 
# 333
} 
#endif
# 335 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 336
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 337
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 343
::exit(___);}
#if 0
# 337
{ 
# 343
} 
#endif
# 346 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 347
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, bool *isResident, int comp = 0) 
# 348
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;(void)comp;
# 354
::exit(___);}
#if 0
# 348
{ 
# 354
} 
#endif
# 356 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 357
tex2Dgather(cudaTextureObject_t to, float x, float y, bool *isResident, int comp = 0) 
# 358
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)isResident;(void)comp;
# 364
::exit(___);}
#if 0
# 358
{ 
# 364
} 
#endif
# 368 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 369
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 370
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 374
::exit(___);}
#if 0
# 370
{ 
# 374
} 
#endif
# 376 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 377
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 378
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 384
::exit(___);}
#if 0
# 378
{ 
# 384
} 
#endif
# 387 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 388
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 389
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 393
::exit(___);}
#if 0
# 389
{ 
# 393
} 
#endif
# 395 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 396
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 397
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 403
::exit(___);}
#if 0
# 397
{ 
# 403
} 
#endif
# 407 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 408
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level, bool *isResident) 
# 409
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;(void)isResident;
# 415
::exit(___);}
#if 0
# 409
{ 
# 415
} 
#endif
# 417 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 418
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level, bool *isResident) 
# 419
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;(void)isResident;
# 425
::exit(___);}
#if 0
# 419
{ 
# 425
} 
#endif
# 430 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 431
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 432
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 436
::exit(___);}
#if 0
# 432
{ 
# 436
} 
#endif
# 438 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 439
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 440
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 446
::exit(___);}
#if 0
# 440
{ 
# 446
} 
#endif
# 449 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 450
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level, bool *isResident) 
# 451
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 457
::exit(___);}
#if 0
# 451
{ 
# 457
} 
#endif
# 459 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 460
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level, bool *isResident) 
# 461
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 467
::exit(___);}
#if 0
# 461
{ 
# 467
} 
#endif
# 472 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 473
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 474
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 478
::exit(___);}
#if 0
# 474
{ 
# 478
} 
#endif
# 480 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 481
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 482
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 488
::exit(___);}
#if 0
# 482
{ 
# 488
} 
#endif
# 491 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 492
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 493
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 497
::exit(___);}
#if 0
# 493
{ 
# 497
} 
#endif
# 499 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 500
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 501
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 507
::exit(___);}
#if 0
# 501
{ 
# 507
} 
#endif
# 510 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 511
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level, bool *isResident) 
# 512
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 518
::exit(___);}
#if 0
# 512
{ 
# 518
} 
#endif
# 520 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 521
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level, bool *isResident) 
# 522
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 528
::exit(___);}
#if 0
# 522
{ 
# 528
} 
#endif
# 531 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 532
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 533
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 537
::exit(___);}
#if 0
# 533
{ 
# 537
} 
#endif
# 539 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 540
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 541
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 547
::exit(___);}
#if 0
# 541
{ 
# 547
} 
#endif
# 550 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 551
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 552
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 556
::exit(___);}
#if 0
# 552
{ 
# 556
} 
#endif
# 558 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 559
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 560
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 566
::exit(___);}
#if 0
# 560
{ 
# 566
} 
#endif
# 568 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 569
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 570
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 574
::exit(___);}
#if 0
# 570
{ 
# 574
} 
#endif
# 576 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 577
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 578
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 584
::exit(___);}
#if 0
# 578
{ 
# 584
} 
#endif
# 586 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 587
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 588
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 592
::exit(___);}
#if 0
# 588
{ 
# 592
} 
#endif
# 594 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 595
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 596
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 602
::exit(___);}
#if 0
# 596
{ 
# 602
} 
#endif
# 605 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 606
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 607
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 612
::exit(___);}
#if 0
# 607
{ 
# 612
} 
#endif
# 614 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 615
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 616
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 622
::exit(___);}
#if 0
# 616
{ 
# 622
} 
#endif
# 625 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 626
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 627
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 634
::exit(___);}
#if 0
# 627
{ 
# 634
} 
#endif
# 636 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 637
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 638
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 644
::exit(___);}
#if 0
# 638
{ 
# 644
} 
#endif
# 648 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 649
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 650
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 654
::exit(___);}
#if 0
# 650
{ 
# 654
} 
#endif
# 656 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 657
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 658
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 664
::exit(___);}
#if 0
# 658
{ 
# 664
} 
#endif
# 667 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 668
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 669
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 675
::exit(___);}
#if 0
# 669
{ 
# 675
} 
#endif
# 677 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 678
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 679
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 685
::exit(___);}
#if 0
# 679
{ 
# 685
} 
#endif
# 690 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 691
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 692
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 696
::exit(___);}
#if 0
# 692
{ 
# 696
} 
#endif
# 698 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 699
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 700
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 706
::exit(___);}
#if 0
# 700
{ 
# 706
} 
#endif
# 709 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 710
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 711
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 715
::exit(___);}
#if 0
# 711
{ 
# 715
} 
#endif
# 717 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 718
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 719
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 725
::exit(___);}
#if 0
# 719
{ 
# 725
} 
#endif
# 728 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 729
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 730
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 736
::exit(___);}
#if 0
# 730
{ 
# 736
} 
#endif
# 738 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 739
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 740
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 746
::exit(___);}
#if 0
# 740
{ 
# 746
} 
#endif
# 750 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 751
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 752
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 756
::exit(___);}
#if 0
# 752
{ 
# 756
} 
#endif
# 758 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 759
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 760
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 766
::exit(___);}
#if 0
# 760
{ 
# 766
} 
#endif
# 59 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
# 60
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 61
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 78
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 80
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 88
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 90
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 96
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 99
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 100
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 101
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 105
::exit(___);}
#if 0
# 101
{ 
# 105
} 
#endif
# 107 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 108
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 109
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 115
::exit(___);}
#if 0
# 109
{ 
# 115
} 
#endif
# 117 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 118
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 119
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 123
::exit(___);}
#if 0
# 119
{ 
# 123
} 
#endif
# 125 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 126
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 127
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 133
::exit(___);}
#if 0
# 127
{ 
# 133
} 
#endif
# 136 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 137
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 138
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 142
::exit(___);}
#if 0
# 138
{ 
# 142
} 
#endif
# 144 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 145
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 146
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 152
::exit(___);}
#if 0
# 146
{ 
# 152
} 
#endif
# 154 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 155
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 156
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 160
::exit(___);}
#if 0
# 156
{ 
# 160
} 
#endif
# 162 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 163
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 164
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 170
::exit(___);}
#if 0
# 164
{ 
# 170
} 
#endif
# 172 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 173
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 174
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 178
::exit(___);}
#if 0
# 174
{ 
# 178
} 
#endif
# 180 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 181
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 182
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 188
::exit(___);}
#if 0
# 182
{ 
# 188
} 
#endif
# 190 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 191
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 192
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 196
::exit(___);}
#if 0
# 192
{ 
# 196
} 
#endif
# 198 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 199
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 200
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 206
::exit(___);}
#if 0
# 200
{ 
# 206
} 
#endif
# 208 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 209
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 210
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 214
::exit(___);}
#if 0
# 210
{ 
# 214
} 
#endif
# 216 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 217
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 218
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 224
::exit(___);}
#if 0
# 218
{ 
# 224
} 
#endif
# 226 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 227
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 228
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 232
::exit(___);}
#if 0
# 228
{ 
# 232
} 
#endif
# 234 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 235
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 236
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 240
::exit(___);}
#if 0
# 236
{ 
# 240
} 
#endif
# 242 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 243
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 244
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 248
::exit(___);}
#if 0
# 244
{ 
# 248
} 
#endif
# 250 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 251
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 252
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 256
::exit(___);}
#if 0
# 252
{ 
# 256
} 
#endif
# 258 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 259
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 260
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 264
::exit(___);}
#if 0
# 260
{ 
# 264
} 
#endif
# 266 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 267
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 268
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 272
::exit(___);}
#if 0
# 268
{ 
# 272
} 
#endif
# 274 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 275
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 276
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 280
::exit(___);}
#if 0
# 276
{ 
# 280
} 
#endif
# 3309 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
# 68 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/device_launch_parameters.h"
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 67 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_relops.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 71
namespace rel_ops { 
# 85 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 87
operator!=(const _Tp &__x, const _Tp &__y) 
# 88
{ return !(__x == __y); } 
# 98 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 100
operator>(const _Tp &__x, const _Tp &__y) 
# 101
{ return __y < __x; } 
# 111 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 113
operator<=(const _Tp &__x, const _Tp &__y) 
# 114
{ return !(__y < __x); } 
# 124 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 126
operator>=(const _Tp &__x, const _Tp &__y) 
# 127
{ return !(__x < __y); } 
# 128
}
# 131
}
# 38 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 47
template< class _Tp> constexpr _Tp *
# 49
__addressof(_Tp &__r) noexcept 
# 50
{ return __builtin_addressof(__r); } 
# 55
}
# 40 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
namespace std __attribute((__visibility__("default"))) { 
# 44
template< class ..._Elements> class tuple; 
# 47
template< class _Tp> class reference_wrapper; 
# 64 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp, _Tp __v> 
# 65
struct integral_constant { 
# 67
static constexpr _Tp value = (__v); 
# 68
typedef _Tp value_type; 
# 69
typedef integral_constant type; 
# 70
constexpr operator value_type() const noexcept { return value; } 
# 75
constexpr value_type operator()() const noexcept { return value; } 
# 77
}; 
# 79
template< class _Tp, _Tp __v> constexpr _Tp integral_constant< _Tp, __v> ::value; 
# 83
using true_type = integral_constant< bool, true> ; 
# 86
using false_type = integral_constant< bool, false> ; 
# 90
template< bool __v> using __bool_constant = integral_constant< bool, __v> ; 
# 104 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< bool , class , class > struct conditional; 
# 108
template< class _Type> 
# 109
struct __type_identity { 
# 110
using type = _Type; }; 
# 112
template< class _Tp> using __type_identity_t = typename __type_identity< _Tp> ::type; 
# 115
template< class ...> struct __or_; 
# 119
template<> struct __or_< >  : public false_type { 
# 121
}; 
# 123
template< class _B1> 
# 124
struct __or_< _B1>  : public _B1 { 
# 126
}; 
# 128
template< class _B1, class _B2> 
# 129
struct __or_< _B1, _B2>  : public conditional< _B1::value, _B1, _B2> ::type { 
# 131
}; 
# 133
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 134
struct __or_< _B1, _B2, _B3, _Bn...>  : public conditional< _B1::value, _B1, std::__or_< _B2, _B3, _Bn...> > ::type { 
# 136
}; 
# 138
template< class ...> struct __and_; 
# 142
template<> struct __and_< >  : public true_type { 
# 144
}; 
# 146
template< class _B1> 
# 147
struct __and_< _B1>  : public _B1 { 
# 149
}; 
# 151
template< class _B1, class _B2> 
# 152
struct __and_< _B1, _B2>  : public conditional< _B1::value, _B2, _B1> ::type { 
# 154
}; 
# 156
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 157
struct __and_< _B1, _B2, _B3, _Bn...>  : public conditional< _B1::value, std::__and_< _B2, _B3, _Bn...> , _B1> ::type { 
# 159
}; 
# 161
template< class _Pp> 
# 162
struct __not_ : public __bool_constant< !((bool)_Pp::value)>  { 
# 164
}; 
# 209 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class > struct is_reference; 
# 211
template< class > struct is_function; 
# 213
template< class > struct is_void; 
# 215
template< class > struct remove_cv; 
# 217
template< class > struct is_const; 
# 221
template< class > struct __is_array_unknown_bounds; 
# 227
template< class _Tp, size_t  = sizeof(_Tp)> constexpr true_type 
# 228
__is_complete_or_unbounded(__type_identity< _Tp> ) 
# 229
{ return {}; } 
# 231
template< class _TypeIdentity, class 
# 232
_NestedType = typename _TypeIdentity::type> constexpr typename __or_< is_reference< _NestedType> , is_function< _NestedType> , is_void< _NestedType> , __is_array_unknown_bounds< _NestedType> > ::type 
# 238
__is_complete_or_unbounded(_TypeIdentity) 
# 239
{ return {}; } 
# 246
template< class _Tp> 
# 247
struct __success_type { 
# 248
typedef _Tp type; }; 
# 250
struct __failure_type { 
# 251
}; 
# 254
template< class _Tp> using __remove_cv_t = typename remove_cv< _Tp> ::type; 
# 259
template< class > 
# 260
struct __is_void_helper : public false_type { 
# 261
}; 
# 264
template<> struct __is_void_helper< void>  : public true_type { 
# 265
}; 
# 269
template< class _Tp> 
# 270
struct is_void : public __is_void_helper< __remove_cv_t< _Tp> > ::type { 
# 272
}; 
# 275
template< class > 
# 276
struct __is_integral_helper : public false_type { 
# 277
}; 
# 280
template<> struct __is_integral_helper< bool>  : public true_type { 
# 281
}; 
# 284
template<> struct __is_integral_helper< char>  : public true_type { 
# 285
}; 
# 288
template<> struct __is_integral_helper< signed char>  : public true_type { 
# 289
}; 
# 292
template<> struct __is_integral_helper< unsigned char>  : public true_type { 
# 293
}; 
# 300
template<> struct __is_integral_helper< wchar_t>  : public true_type { 
# 301
}; 
# 311 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template<> struct __is_integral_helper< char16_t>  : public true_type { 
# 312
}; 
# 315
template<> struct __is_integral_helper< char32_t>  : public true_type { 
# 316
}; 
# 319
template<> struct __is_integral_helper< short>  : public true_type { 
# 320
}; 
# 323
template<> struct __is_integral_helper< unsigned short>  : public true_type { 
# 324
}; 
# 327
template<> struct __is_integral_helper< int>  : public true_type { 
# 328
}; 
# 331
template<> struct __is_integral_helper< unsigned>  : public true_type { 
# 332
}; 
# 335
template<> struct __is_integral_helper< long>  : public true_type { 
# 336
}; 
# 339
template<> struct __is_integral_helper< unsigned long>  : public true_type { 
# 340
}; 
# 343
template<> struct __is_integral_helper< long long>  : public true_type { 
# 344
}; 
# 347
template<> struct __is_integral_helper< unsigned long long>  : public true_type { 
# 348
}; 
# 391 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp> 
# 392
struct is_integral : public __is_integral_helper< __remove_cv_t< _Tp> > ::type { 
# 394
}; 
# 397
template< class > 
# 398
struct __is_floating_point_helper : public false_type { 
# 399
}; 
# 402
template<> struct __is_floating_point_helper< float>  : public true_type { 
# 403
}; 
# 406
template<> struct __is_floating_point_helper< double>  : public true_type { 
# 407
}; 
# 410
template<> struct __is_floating_point_helper< long double>  : public true_type { 
# 411
}; 
# 421 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp> 
# 422
struct is_floating_point : public __is_floating_point_helper< __remove_cv_t< _Tp> > ::type { 
# 424
}; 
# 427
template< class > 
# 428
struct is_array : public false_type { 
# 429
}; 
# 431
template< class _Tp, size_t _Size> 
# 432
struct is_array< _Tp [_Size]>  : public true_type { 
# 433
}; 
# 435
template< class _Tp> 
# 436
struct is_array< _Tp []>  : public true_type { 
# 437
}; 
# 439
template< class > 
# 440
struct __is_pointer_helper : public false_type { 
# 441
}; 
# 443
template< class _Tp> 
# 444
struct __is_pointer_helper< _Tp *>  : public true_type { 
# 445
}; 
# 448
template< class _Tp> 
# 449
struct is_pointer : public __is_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 451
}; 
# 454
template< class > 
# 455
struct is_lvalue_reference : public false_type { 
# 456
}; 
# 458
template< class _Tp> 
# 459
struct is_lvalue_reference< _Tp &>  : public true_type { 
# 460
}; 
# 463
template< class > 
# 464
struct is_rvalue_reference : public false_type { 
# 465
}; 
# 467
template< class _Tp> 
# 468
struct is_rvalue_reference< _Tp &&>  : public true_type { 
# 469
}; 
# 471
template< class > 
# 472
struct __is_member_object_pointer_helper : public false_type { 
# 473
}; 
# 475
template< class _Tp, class _Cp> 
# 476
struct __is_member_object_pointer_helper< _Tp (_Cp::*)>  : public __not_< is_function< _Tp> > ::type { 
# 477
}; 
# 480
template< class _Tp> 
# 481
struct is_member_object_pointer : public __is_member_object_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 483
}; 
# 485
template< class > 
# 486
struct __is_member_function_pointer_helper : public false_type { 
# 487
}; 
# 489
template< class _Tp, class _Cp> 
# 490
struct __is_member_function_pointer_helper< _Tp (_Cp::*)>  : public is_function< _Tp> ::type { 
# 491
}; 
# 494
template< class _Tp> 
# 495
struct is_member_function_pointer : public __is_member_function_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 497
}; 
# 500
template< class _Tp> 
# 501
struct is_enum : public integral_constant< bool, __is_enum(_Tp)>  { 
# 503
}; 
# 506
template< class _Tp> 
# 507
struct is_union : public integral_constant< bool, __is_union(_Tp)>  { 
# 509
}; 
# 512
template< class _Tp> 
# 513
struct is_class : public integral_constant< bool, __is_class(_Tp)>  { 
# 515
}; 
# 518
template< class _Tp> 
# 519
struct is_function : public __bool_constant< !is_const< const _Tp> ::value>  { 
# 520
}; 
# 522
template< class _Tp> 
# 523
struct is_function< _Tp &>  : public false_type { 
# 524
}; 
# 526
template< class _Tp> 
# 527
struct is_function< _Tp &&>  : public false_type { 
# 528
}; 
# 532
template< class > 
# 533
struct __is_null_pointer_helper : public false_type { 
# 534
}; 
# 537
template<> struct __is_null_pointer_helper< nullptr_t>  : public true_type { 
# 538
}; 
# 541
template< class _Tp> 
# 542
struct is_null_pointer : public __is_null_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 544
}; 
# 548
template< class _Tp> 
# 549
struct __is_nullptr_t : public is_null_pointer< _Tp>  { 
# 551
} __attribute((__deprecated__("use \'std::is_null_pointer\' instead"))); 
# 556
template< class _Tp> 
# 557
struct is_reference : public __or_< is_lvalue_reference< _Tp> , is_rvalue_reference< _Tp> > ::type { 
# 560
}; 
# 563
template< class _Tp> 
# 564
struct is_arithmetic : public __or_< is_integral< _Tp> , is_floating_point< _Tp> > ::type { 
# 566
}; 
# 569
template< class _Tp> 
# 570
struct is_fundamental : public __or_< is_arithmetic< _Tp> , is_void< _Tp> , is_null_pointer< _Tp> > ::type { 
# 573
}; 
# 576
template< class _Tp> 
# 577
struct is_object : public __not_< __or_< is_function< _Tp> , is_reference< _Tp> , is_void< _Tp> > > ::type { 
# 580
}; 
# 582
template< class > struct is_member_pointer; 
# 586
template< class _Tp> 
# 587
struct is_scalar : public __or_< is_arithmetic< _Tp> , is_enum< _Tp> , is_pointer< _Tp> , is_member_pointer< _Tp> , is_null_pointer< _Tp> > ::type { 
# 590
}; 
# 593
template< class _Tp> 
# 594
struct is_compound : public __not_< is_fundamental< _Tp> > ::type { 
# 595
}; 
# 598
template< class _Tp> 
# 599
struct __is_member_pointer_helper : public false_type { 
# 600
}; 
# 602
template< class _Tp, class _Cp> 
# 603
struct __is_member_pointer_helper< _Tp (_Cp::*)>  : public true_type { 
# 604
}; 
# 608
template< class _Tp> 
# 609
struct is_member_pointer : public __is_member_pointer_helper< __remove_cv_t< _Tp> > ::type { 
# 611
}; 
# 613
template< class , class > struct is_same; 
# 617
template< class _Tp, class ..._Types> using __is_one_of = __or_< is_same< _Tp, _Types> ...> ; 
# 621
template< class _Tp> using __is_signed_integer = __is_one_of< __remove_cv_t< _Tp> , signed char, signed short, signed int, signed long, signed long long> ; 
# 640 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp> using __is_unsigned_integer = __is_one_of< __remove_cv_t< _Tp> , unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> ; 
# 659 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp> using __is_standard_integer = __or_< __is_signed_integer< _Tp> , __is_unsigned_integer< _Tp> > ; 
# 664
template< class ...> using __void_t = void; 
# 668
template< class _Tp, class  = void> 
# 669
struct __is_referenceable : public false_type { 
# 671
}; 
# 673
template< class _Tp> 
# 674
struct __is_referenceable< _Tp, __void_t< _Tp &> >  : public true_type { 
# 676
}; 
# 682
template< class > 
# 683
struct is_const : public false_type { 
# 684
}; 
# 686
template< class _Tp> 
# 687
struct is_const< const _Tp>  : public true_type { 
# 688
}; 
# 691
template< class > 
# 692
struct is_volatile : public false_type { 
# 693
}; 
# 695
template< class _Tp> 
# 696
struct is_volatile< volatile _Tp>  : public true_type { 
# 697
}; 
# 700
template< class _Tp> 
# 701
struct is_trivial : public integral_constant< bool, __is_trivial(_Tp)>  { 
# 704
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 706
}; 
# 709
template< class _Tp> 
# 710
struct is_trivially_copyable : public integral_constant< bool, __is_trivially_copyable(_Tp)>  { 
# 713
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 715
}; 
# 718
template< class _Tp> 
# 719
struct is_standard_layout : public integral_constant< bool, __is_standard_layout(_Tp)>  { 
# 722
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 724
}; 
# 730
template< class _Tp> 
# 733
struct is_pod : public integral_constant< bool, __is_pod(_Tp)>  { 
# 736
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 738
}; 
# 743
template< class _Tp> 
# 746
struct is_literal_type : public integral_constant< bool, __is_literal_type(_Tp)>  { 
# 749
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 751
}; 
# 754
template< class _Tp> 
# 755
struct is_empty : public integral_constant< bool, __is_empty(_Tp)>  { 
# 757
}; 
# 760
template< class _Tp> 
# 761
struct is_polymorphic : public integral_constant< bool, __is_polymorphic(_Tp)>  { 
# 763
}; 
# 769
template< class _Tp> 
# 770
struct is_final : public integral_constant< bool, __is_final(_Tp)>  { 
# 772
}; 
# 776
template< class _Tp> 
# 777
struct is_abstract : public integral_constant< bool, __is_abstract(_Tp)>  { 
# 779
}; 
# 782
template< class _Tp, bool 
# 783
 = is_arithmetic< _Tp> ::value> 
# 784
struct __is_signed_helper : public false_type { 
# 785
}; 
# 787
template< class _Tp> 
# 788
struct __is_signed_helper< _Tp, true>  : public integral_constant< bool, ((_Tp)(-1)) < ((_Tp)0)>  { 
# 790
}; 
# 794
template< class _Tp> 
# 795
struct is_signed : public __is_signed_helper< _Tp> ::type { 
# 797
}; 
# 800
template< class _Tp> 
# 801
struct is_unsigned : public __and_< is_arithmetic< _Tp> , __not_< is_signed< _Tp> > >  { 
# 803
}; 
# 806
template< class _Tp, class _Up = _Tp &&> _Up __declval(int); 
# 810
template< class _Tp> _Tp __declval(long); 
# 815
template< class _Tp> auto declval() noexcept->__decltype((__declval< _Tp> (0))); 
# 818
template< class , unsigned  = 0U> struct extent; 
# 821
template< class > struct remove_all_extents; 
# 825
template< class _Tp> 
# 826
struct __is_array_known_bounds : public integral_constant< bool, (extent< _Tp> ::value > 0)>  { 
# 828
}; 
# 830
template< class _Tp> 
# 831
struct __is_array_unknown_bounds : public __and_< is_array< _Tp> , __not_< extent< _Tp> > >  { 
# 833
}; 
# 842 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
struct __do_is_destructible_impl { 
# 844
template< class _Tp, class  = __decltype((declval< _Tp &> ().~_Tp()))> static true_type __test(int); 
# 847
template< class > static false_type __test(...); 
# 849
}; 
# 851
template< class _Tp> 
# 852
struct __is_destructible_impl : public __do_is_destructible_impl { 
# 855
typedef __decltype((__test< _Tp> (0))) type; 
# 856
}; 
# 858
template< class _Tp, bool 
# 859
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 862
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_destructible_safe; 
# 865
template< class _Tp> 
# 866
struct __is_destructible_safe< _Tp, false, false>  : public __is_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 869
}; 
# 871
template< class _Tp> 
# 872
struct __is_destructible_safe< _Tp, true, false>  : public false_type { 
# 873
}; 
# 875
template< class _Tp> 
# 876
struct __is_destructible_safe< _Tp, false, true>  : public true_type { 
# 877
}; 
# 881
template< class _Tp> 
# 882
struct is_destructible : public __is_destructible_safe< _Tp> ::type { 
# 885
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 887
}; 
# 895
struct __do_is_nt_destructible_impl { 
# 897
template< class _Tp> static __bool_constant< noexcept(declval< _Tp &> ().~_Tp())>  __test(int); 
# 901
template< class > static false_type __test(...); 
# 903
}; 
# 905
template< class _Tp> 
# 906
struct __is_nt_destructible_impl : public __do_is_nt_destructible_impl { 
# 909
typedef __decltype((__test< _Tp> (0))) type; 
# 910
}; 
# 912
template< class _Tp, bool 
# 913
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 916
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_nt_destructible_safe; 
# 919
template< class _Tp> 
# 920
struct __is_nt_destructible_safe< _Tp, false, false>  : public __is_nt_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 923
}; 
# 925
template< class _Tp> 
# 926
struct __is_nt_destructible_safe< _Tp, true, false>  : public false_type { 
# 927
}; 
# 929
template< class _Tp> 
# 930
struct __is_nt_destructible_safe< _Tp, false, true>  : public true_type { 
# 931
}; 
# 935
template< class _Tp> 
# 936
struct is_nothrow_destructible : public __is_nt_destructible_safe< _Tp> ::type { 
# 939
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 941
}; 
# 944
template< class _Tp, class ..._Args> 
# 945
struct __is_constructible_impl : public __bool_constant< __is_constructible(_Tp, _Args...)>  { 
# 947
}; 
# 951
template< class _Tp, class ..._Args> 
# 952
struct is_constructible : public __is_constructible_impl< _Tp, _Args...>  { 
# 955
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 957
}; 
# 960
template< class _Tp> 
# 961
struct is_default_constructible : public __is_constructible_impl< _Tp> ::type { 
# 964
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 966
}; 
# 969
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_constructible_impl; 
# 972
template< class _Tp> 
# 973
struct __is_copy_constructible_impl< _Tp, false>  : public false_type { 
# 974
}; 
# 976
template< class _Tp> 
# 977
struct __is_copy_constructible_impl< _Tp, true>  : public __is_constructible_impl< _Tp, const _Tp &>  { 
# 979
}; 
# 983
template< class _Tp> 
# 984
struct is_copy_constructible : public __is_copy_constructible_impl< _Tp>  { 
# 987
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 989
}; 
# 992
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_constructible_impl; 
# 995
template< class _Tp> 
# 996
struct __is_move_constructible_impl< _Tp, false>  : public false_type { 
# 997
}; 
# 999
template< class _Tp> 
# 1000
struct __is_move_constructible_impl< _Tp, true>  : public __is_constructible_impl< _Tp, _Tp &&>  { 
# 1002
}; 
# 1006
template< class _Tp> 
# 1007
struct is_move_constructible : public __is_move_constructible_impl< _Tp>  { 
# 1010
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1012
}; 
# 1015
template< class _Tp, class ..._Args> using __is_nothrow_constructible_impl = __bool_constant< __is_nothrow_constructible(_Tp, _Args...)> ; 
# 1021
template< class _Tp, class ..._Args> 
# 1022
struct is_nothrow_constructible : public integral_constant< bool, __is_nothrow_constructible(_Tp, _Args...)> ::type { 
# 1025
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1027
}; 
# 1030
template< class _Tp> 
# 1031
struct is_nothrow_default_constructible : public __bool_constant< __is_nothrow_constructible(_Tp)>  { 
# 1034
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1036
}; 
# 1039
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_copy_constructible_impl; 
# 1042
template< class _Tp> 
# 1043
struct __is_nothrow_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1044
}; 
# 1046
template< class _Tp> 
# 1047
struct __is_nothrow_copy_constructible_impl< _Tp, true>  : public __is_nothrow_constructible_impl< _Tp, const _Tp &>  { 
# 1049
}; 
# 1053
template< class _Tp> 
# 1054
struct is_nothrow_copy_constructible : public __is_nothrow_copy_constructible_impl< _Tp> ::type { 
# 1057
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1059
}; 
# 1062
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_move_constructible_impl; 
# 1065
template< class _Tp> 
# 1066
struct __is_nothrow_move_constructible_impl< _Tp, false>  : public false_type { 
# 1067
}; 
# 1069
template< class _Tp> 
# 1070
struct __is_nothrow_move_constructible_impl< _Tp, true>  : public __is_nothrow_constructible_impl< _Tp, _Tp &&>  { 
# 1072
}; 
# 1076
template< class _Tp> 
# 1077
struct is_nothrow_move_constructible : public __is_nothrow_move_constructible_impl< _Tp> ::type { 
# 1080
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1082
}; 
# 1085
template< class _Tp, class _Up> 
# 1086
struct is_assignable : public __bool_constant< __is_assignable(_Tp, _Up)>  { 
# 1089
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1091
}; 
# 1093
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_assignable_impl; 
# 1096
template< class _Tp> 
# 1097
struct __is_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1098
}; 
# 1100
template< class _Tp> 
# 1101
struct __is_copy_assignable_impl< _Tp, true>  : public __bool_constant< __is_assignable(_Tp &, const _Tp &)>  { 
# 1103
}; 
# 1106
template< class _Tp> 
# 1107
struct is_copy_assignable : public __is_copy_assignable_impl< _Tp> ::type { 
# 1110
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1112
}; 
# 1114
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_assignable_impl; 
# 1117
template< class _Tp> 
# 1118
struct __is_move_assignable_impl< _Tp, false>  : public false_type { 
# 1119
}; 
# 1121
template< class _Tp> 
# 1122
struct __is_move_assignable_impl< _Tp, true>  : public __bool_constant< __is_assignable(_Tp &, _Tp &&)>  { 
# 1124
}; 
# 1127
template< class _Tp> 
# 1128
struct is_move_assignable : public __is_move_assignable_impl< _Tp> ::type { 
# 1131
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1133
}; 
# 1135
template< class _Tp, class _Up> using __is_nothrow_assignable_impl = __bool_constant< __is_nothrow_assignable(_Tp, _Up)> ; 
# 1140
template< class _Tp, class _Up> 
# 1141
struct is_nothrow_assignable : public __is_nothrow_assignable_impl< _Tp, _Up>  { 
# 1144
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1146
}; 
# 1148
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_copy_assignable_impl; 
# 1151
template< class _Tp> 
# 1152
struct __is_nt_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1153
}; 
# 1155
template< class _Tp> 
# 1156
struct __is_nt_copy_assignable_impl< _Tp, true>  : public __is_nothrow_assignable_impl< _Tp &, const _Tp &>  { 
# 1158
}; 
# 1161
template< class _Tp> 
# 1162
struct is_nothrow_copy_assignable : public __is_nt_copy_assignable_impl< _Tp>  { 
# 1165
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1167
}; 
# 1169
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_move_assignable_impl; 
# 1172
template< class _Tp> 
# 1173
struct __is_nt_move_assignable_impl< _Tp, false>  : public false_type { 
# 1174
}; 
# 1176
template< class _Tp> 
# 1177
struct __is_nt_move_assignable_impl< _Tp, true>  : public __is_nothrow_assignable_impl< _Tp &, _Tp &&>  { 
# 1179
}; 
# 1182
template< class _Tp> 
# 1183
struct is_nothrow_move_assignable : public __is_nt_move_assignable_impl< _Tp>  { 
# 1186
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1188
}; 
# 1191
template< class _Tp, class ..._Args> 
# 1192
struct is_trivially_constructible : public __bool_constant< __is_trivially_constructible(_Tp, _Args...)>  { 
# 1195
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1197
}; 
# 1200
template< class _Tp> 
# 1201
struct is_trivially_default_constructible : public __bool_constant< __is_trivially_constructible(_Tp)>  { 
# 1204
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1206
}; 
# 1208
struct __do_is_implicitly_default_constructible_impl { 
# 1210
template< class _Tp> static void __helper(const _Tp &); 
# 1213
template< class _Tp> static true_type __test(const _Tp &, __decltype((__helper< const _Tp &> ({}))) * = 0); 
# 1217
static false_type __test(...); 
# 1218
}; 
# 1220
template< class _Tp> 
# 1221
struct __is_implicitly_default_constructible_impl : public __do_is_implicitly_default_constructible_impl { 
# 1224
typedef __decltype((__test(declval< _Tp> ()))) type; 
# 1225
}; 
# 1227
template< class _Tp> 
# 1228
struct __is_implicitly_default_constructible_safe : public __is_implicitly_default_constructible_impl< _Tp> ::type { 
# 1230
}; 
# 1232
template< class _Tp> 
# 1233
struct __is_implicitly_default_constructible : public __and_< __is_constructible_impl< _Tp> , __is_implicitly_default_constructible_safe< _Tp> >  { 
# 1236
}; 
# 1238
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_copy_constructible_impl; 
# 1241
template< class _Tp> 
# 1242
struct __is_trivially_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1243
}; 
# 1245
template< class _Tp> 
# 1246
struct __is_trivially_copy_constructible_impl< _Tp, true>  : public __and_< __is_copy_constructible_impl< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, const _Tp &)> >  { 
# 1250
}; 
# 1253
template< class _Tp> 
# 1254
struct is_trivially_copy_constructible : public __is_trivially_copy_constructible_impl< _Tp>  { 
# 1257
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1259
}; 
# 1261
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_move_constructible_impl; 
# 1264
template< class _Tp> 
# 1265
struct __is_trivially_move_constructible_impl< _Tp, false>  : public false_type { 
# 1266
}; 
# 1268
template< class _Tp> 
# 1269
struct __is_trivially_move_constructible_impl< _Tp, true>  : public __and_< __is_move_constructible_impl< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, _Tp &&)> >  { 
# 1273
}; 
# 1276
template< class _Tp> 
# 1277
struct is_trivially_move_constructible : public __is_trivially_move_constructible_impl< _Tp>  { 
# 1280
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1282
}; 
# 1285
template< class _Tp, class _Up> 
# 1286
struct is_trivially_assignable : public __bool_constant< __is_trivially_assignable(_Tp, _Up)>  { 
# 1289
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1291
}; 
# 1293
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_copy_assignable_impl; 
# 1296
template< class _Tp> 
# 1297
struct __is_trivially_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1298
}; 
# 1300
template< class _Tp> 
# 1301
struct __is_trivially_copy_assignable_impl< _Tp, true>  : public __bool_constant< __is_trivially_assignable(_Tp &, const _Tp &)>  { 
# 1303
}; 
# 1306
template< class _Tp> 
# 1307
struct is_trivially_copy_assignable : public __is_trivially_copy_assignable_impl< _Tp>  { 
# 1310
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1312
}; 
# 1314
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_trivially_move_assignable_impl; 
# 1317
template< class _Tp> 
# 1318
struct __is_trivially_move_assignable_impl< _Tp, false>  : public false_type { 
# 1319
}; 
# 1321
template< class _Tp> 
# 1322
struct __is_trivially_move_assignable_impl< _Tp, true>  : public __bool_constant< __is_trivially_assignable(_Tp &, _Tp &&)>  { 
# 1324
}; 
# 1327
template< class _Tp> 
# 1328
struct is_trivially_move_assignable : public __is_trivially_move_assignable_impl< _Tp>  { 
# 1331
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1333
}; 
# 1336
template< class _Tp> 
# 1337
struct is_trivially_destructible : public __and_< __is_destructible_safe< _Tp> , __bool_constant< __has_trivial_destructor(_Tp)> >  { 
# 1341
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1343
}; 
# 1347
template< class _Tp> 
# 1348
struct has_virtual_destructor : public integral_constant< bool, __has_virtual_destructor(_Tp)>  { 
# 1351
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1353
}; 
# 1359
template< class _Tp> 
# 1360
struct alignment_of : public integral_constant< unsigned long, __alignof__(_Tp)>  { 
# 1363
static_assert((std::__is_complete_or_unbounded(__type_identity< _Tp> {})), "template argument must be a complete class or an unbounded array");
# 1365
}; 
# 1368
template< class > 
# 1369
struct rank : public integral_constant< unsigned long, 0UL>  { 
# 1370
}; 
# 1372
template< class _Tp, size_t _Size> 
# 1373
struct rank< _Tp [_Size]>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1374
}; 
# 1376
template< class _Tp> 
# 1377
struct rank< _Tp []>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1378
}; 
# 1381
template< class , unsigned _Uint> 
# 1382
struct extent : public integral_constant< unsigned long, 0UL>  { 
# 1383
}; 
# 1385
template< class _Tp, unsigned _Uint, size_t _Size> 
# 1386
struct extent< _Tp [_Size], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? _Size : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1390
}; 
# 1392
template< class _Tp, unsigned _Uint> 
# 1393
struct extent< _Tp [], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? 0 : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1397
}; 
# 1403
template< class _Tp, class _Up> 
# 1404
struct is_same : public integral_constant< bool, __is_same(_Tp, _Up)>  { 
# 1410
}; 
# 1420 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Base, class _Derived> 
# 1421
struct is_base_of : public integral_constant< bool, __is_base_of(_Base, _Derived)>  { 
# 1423
}; 
# 1425
template< class _From, class _To, bool 
# 1426
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1428
struct __is_convertible_helper { 
# 1430
typedef typename is_void< _To> ::type type; 
# 1431
}; 
# 1433
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
template< class _From, class _To> 
# 1436
class __is_convertible_helper< _From, _To, false>  { 
# 1438
template< class _To1> static void __test_aux(_To1) noexcept; 
# 1441
template< class _From1, class _To1, class 
# 1442
 = __decltype((__test_aux< _To1> (std::declval< _From1> ())))> static true_type 
# 1441
__test(int); 
# 1446
template< class , class > static false_type __test(...); 
# 1451
public: typedef __decltype((__test< _From, _To> (0))) type; 
# 1452
}; 
#pragma GCC diagnostic pop
# 1456
template< class _From, class _To> 
# 1457
struct is_convertible : public __is_convertible_helper< _From, _To> ::type { 
# 1459
}; 
# 1462
template< class _ToElementType, class _FromElementType> using __is_array_convertible = is_convertible< _FromElementType (*)[], _ToElementType (*)[]> ; 
# 1466
template< class _From, class _To, bool 
# 1467
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1469
struct __is_nt_convertible_helper : public is_void< _To>  { 
# 1471
}; 
# 1473
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
template< class _From, class _To> 
# 1476
class __is_nt_convertible_helper< _From, _To, false>  { 
# 1478
template< class _To1> static void __test_aux(_To1) noexcept; 
# 1481
template< class _From1, class _To1> static __bool_constant< noexcept(__test_aux< _To1> (std::declval< _From1> ()))>  __test(int); 
# 1486
template< class , class > static false_type __test(...); 
# 1491
public: using type = __decltype((__test< _From, _To> (0))); 
# 1492
}; 
#pragma GCC diagnostic pop
# 1496
template< class _From, class _To> 
# 1497
struct __is_nothrow_convertible : public __is_nt_convertible_helper< _From, _To> ::type { 
# 1499
}; 
# 1518 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp> 
# 1519
struct remove_const { 
# 1520
typedef _Tp type; }; 
# 1522
template< class _Tp> 
# 1523
struct remove_const< const _Tp>  { 
# 1524
typedef _Tp type; }; 
# 1527
template< class _Tp> 
# 1528
struct remove_volatile { 
# 1529
typedef _Tp type; }; 
# 1531
template< class _Tp> 
# 1532
struct remove_volatile< volatile _Tp>  { 
# 1533
typedef _Tp type; }; 
# 1536
template< class _Tp> 
# 1537
struct remove_cv { 
# 1538
using type = _Tp; }; 
# 1540
template< class _Tp> 
# 1541
struct remove_cv< const _Tp>  { 
# 1542
using type = _Tp; }; 
# 1544
template< class _Tp> 
# 1545
struct remove_cv< volatile _Tp>  { 
# 1546
using type = _Tp; }; 
# 1548
template< class _Tp> 
# 1549
struct remove_cv< const volatile _Tp>  { 
# 1550
using type = _Tp; }; 
# 1553
template< class _Tp> 
# 1554
struct add_const { 
# 1555
typedef const _Tp type; }; 
# 1558
template< class _Tp> 
# 1559
struct add_volatile { 
# 1560
typedef volatile _Tp type; }; 
# 1563
template< class _Tp> 
# 1564
struct add_cv { 
# 1567
typedef typename add_const< typename add_volatile< _Tp> ::type> ::type type; 
# 1568
}; 
# 1575
template< class _Tp> using remove_const_t = typename remove_const< _Tp> ::type; 
# 1579
template< class _Tp> using remove_volatile_t = typename remove_volatile< _Tp> ::type; 
# 1583
template< class _Tp> using remove_cv_t = typename remove_cv< _Tp> ::type; 
# 1587
template< class _Tp> using add_const_t = typename add_const< _Tp> ::type; 
# 1591
template< class _Tp> using add_volatile_t = typename add_volatile< _Tp> ::type; 
# 1595
template< class _Tp> using add_cv_t = typename add_cv< _Tp> ::type; 
# 1602
template< class _Tp> 
# 1603
struct remove_reference { 
# 1604
typedef _Tp type; }; 
# 1606
template< class _Tp> 
# 1607
struct remove_reference< _Tp &>  { 
# 1608
typedef _Tp type; }; 
# 1610
template< class _Tp> 
# 1611
struct remove_reference< _Tp &&>  { 
# 1612
typedef _Tp type; }; 
# 1614
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1615
struct __add_lvalue_reference_helper { 
# 1616
typedef _Tp type; }; 
# 1618
template< class _Tp> 
# 1619
struct __add_lvalue_reference_helper< _Tp, true>  { 
# 1620
typedef _Tp &type; }; 
# 1623
template< class _Tp> 
# 1624
struct add_lvalue_reference : public __add_lvalue_reference_helper< _Tp>  { 
# 1626
}; 
# 1628
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1629
struct __add_rvalue_reference_helper { 
# 1630
typedef _Tp type; }; 
# 1632
template< class _Tp> 
# 1633
struct __add_rvalue_reference_helper< _Tp, true>  { 
# 1634
typedef _Tp &&type; }; 
# 1637
template< class _Tp> 
# 1638
struct add_rvalue_reference : public __add_rvalue_reference_helper< _Tp>  { 
# 1640
}; 
# 1644
template< class _Tp> using remove_reference_t = typename remove_reference< _Tp> ::type; 
# 1648
template< class _Tp> using add_lvalue_reference_t = typename add_lvalue_reference< _Tp> ::type; 
# 1652
template< class _Tp> using add_rvalue_reference_t = typename add_rvalue_reference< _Tp> ::type; 
# 1661
template< class _Unqualified, bool _IsConst, bool _IsVol> struct __cv_selector; 
# 1664
template< class _Unqualified> 
# 1665
struct __cv_selector< _Unqualified, false, false>  { 
# 1666
typedef _Unqualified __type; }; 
# 1668
template< class _Unqualified> 
# 1669
struct __cv_selector< _Unqualified, false, true>  { 
# 1670
typedef volatile _Unqualified __type; }; 
# 1672
template< class _Unqualified> 
# 1673
struct __cv_selector< _Unqualified, true, false>  { 
# 1674
typedef const _Unqualified __type; }; 
# 1676
template< class _Unqualified> 
# 1677
struct __cv_selector< _Unqualified, true, true>  { 
# 1678
typedef const volatile _Unqualified __type; }; 
# 1680
template< class _Qualified, class _Unqualified, bool 
# 1681
_IsConst = is_const< _Qualified> ::value, bool 
# 1682
_IsVol = is_volatile< _Qualified> ::value> 
# 1683
class __match_cv_qualifiers { 
# 1685
typedef __cv_selector< _Unqualified, _IsConst, _IsVol>  __match; 
# 1688
public: typedef typename __cv_selector< _Unqualified, _IsConst, _IsVol> ::__type __type; 
# 1689
}; 
# 1692
template< class _Tp> 
# 1693
struct __make_unsigned { 
# 1694
typedef _Tp __type; }; 
# 1697
template<> struct __make_unsigned< char>  { 
# 1698
typedef unsigned char __type; }; 
# 1701
template<> struct __make_unsigned< signed char>  { 
# 1702
typedef unsigned char __type; }; 
# 1705
template<> struct __make_unsigned< short>  { 
# 1706
typedef unsigned short __type; }; 
# 1709
template<> struct __make_unsigned< int>  { 
# 1710
typedef unsigned __type; }; 
# 1713
template<> struct __make_unsigned< long>  { 
# 1714
typedef unsigned long __type; }; 
# 1717
template<> struct __make_unsigned< long long>  { 
# 1718
typedef unsigned long long __type; }; 
# 1742 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp, bool 
# 1743
_IsInt = is_integral< _Tp> ::value, bool 
# 1744
_IsEnum = is_enum< _Tp> ::value> class __make_unsigned_selector; 
# 1747
template< class _Tp> 
# 1748
class __make_unsigned_selector< _Tp, true, false>  { 
# 1750
using __unsigned_type = typename __make_unsigned< __remove_cv_t< _Tp> > ::__type; 
# 1754
public: using __type = typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type; 
# 1756
}; 
# 1758
class __make_unsigned_selector_base { 
# 1761
protected: template< class ...> struct _List { }; 
# 1763
template< class _Tp, class ..._Up> 
# 1764
struct _List< _Tp, _Up...>  : public __make_unsigned_selector_base::_List< _Up...>  { 
# 1765
static constexpr std::size_t __size = sizeof(_Tp); }; 
# 1767
template< size_t _Sz, class _Tp, bool  = _Sz <= _Tp::__size> struct __select; 
# 1770
template< size_t _Sz, class _Uint, class ..._UInts> 
# 1771
struct __select< _Sz, _List< _Uint, _UInts...> , true>  { 
# 1772
using __type = _Uint; }; 
# 1774
template< size_t _Sz, class _Uint, class ..._UInts> 
# 1775
struct __select< _Sz, _List< _Uint, _UInts...> , false>  : public __make_unsigned_selector_base::__select< _Sz, _List< _UInts...> >  { 
# 1777
}; 
# 1778
}; 
# 1781
template< class _Tp> 
# 1782
class __make_unsigned_selector< _Tp, false, true>  : private __make_unsigned_selector_base { 
# 1786
using _UInts = _List< unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> ; 
# 1789
using __unsigned_type = typename __select< sizeof(_Tp), _List< unsigned char, unsigned short, unsigned, unsigned long, unsigned long long> > ::__type; 
# 1792
public: using __type = typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type; 
# 1794
}; 
# 1802
template<> struct __make_unsigned< wchar_t>  { 
# 1804
using __type = __make_unsigned_selector< wchar_t, false, true> ::__type; 
# 1806
}; 
# 1819 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template<> struct __make_unsigned< char16_t>  { 
# 1821
using __type = __make_unsigned_selector< char16_t, false, true> ::__type; 
# 1823
}; 
# 1826
template<> struct __make_unsigned< char32_t>  { 
# 1828
using __type = __make_unsigned_selector< char32_t, false, true> ::__type; 
# 1830
}; 
# 1837
template< class _Tp> 
# 1838
struct make_unsigned { 
# 1839
typedef typename __make_unsigned_selector< _Tp> ::__type type; }; 
# 1843
template<> struct make_unsigned< bool> ; 
# 1848
template< class _Tp> 
# 1849
struct __make_signed { 
# 1850
typedef _Tp __type; }; 
# 1853
template<> struct __make_signed< char>  { 
# 1854
typedef signed char __type; }; 
# 1857
template<> struct __make_signed< unsigned char>  { 
# 1858
typedef signed char __type; }; 
# 1861
template<> struct __make_signed< unsigned short>  { 
# 1862
typedef signed short __type; }; 
# 1865
template<> struct __make_signed< unsigned>  { 
# 1866
typedef signed int __type; }; 
# 1869
template<> struct __make_signed< unsigned long>  { 
# 1870
typedef signed long __type; }; 
# 1873
template<> struct __make_signed< unsigned long long>  { 
# 1874
typedef signed long long __type; }; 
# 1898 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp, bool 
# 1899
_IsInt = is_integral< _Tp> ::value, bool 
# 1900
_IsEnum = is_enum< _Tp> ::value> class __make_signed_selector; 
# 1903
template< class _Tp> 
# 1904
class __make_signed_selector< _Tp, true, false>  { 
# 1906
using __signed_type = typename __make_signed< __remove_cv_t< _Tp> > ::__type; 
# 1910
public: using __type = typename __match_cv_qualifiers< _Tp, __signed_type> ::__type; 
# 1912
}; 
# 1915
template< class _Tp> 
# 1916
class __make_signed_selector< _Tp, false, true>  { 
# 1918
typedef typename __make_unsigned_selector< _Tp> ::__type __unsigned_type; 
# 1921
public: typedef typename std::__make_signed_selector< __unsigned_type> ::__type __type; 
# 1922
}; 
# 1930
template<> struct __make_signed< wchar_t>  { 
# 1932
using __type = __make_signed_selector< wchar_t, false, true> ::__type; 
# 1934
}; 
# 1947 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template<> struct __make_signed< char16_t>  { 
# 1949
using __type = __make_signed_selector< char16_t, false, true> ::__type; 
# 1951
}; 
# 1954
template<> struct __make_signed< char32_t>  { 
# 1956
using __type = __make_signed_selector< char32_t, false, true> ::__type; 
# 1958
}; 
# 1965
template< class _Tp> 
# 1966
struct make_signed { 
# 1967
typedef typename __make_signed_selector< _Tp> ::__type type; }; 
# 1971
template<> struct make_signed< bool> ; 
# 1975
template< class _Tp> using make_signed_t = typename make_signed< _Tp> ::type; 
# 1979
template< class _Tp> using make_unsigned_t = typename make_unsigned< _Tp> ::type; 
# 1986
template< class _Tp> 
# 1987
struct remove_extent { 
# 1988
typedef _Tp type; }; 
# 1990
template< class _Tp, size_t _Size> 
# 1991
struct remove_extent< _Tp [_Size]>  { 
# 1992
typedef _Tp type; }; 
# 1994
template< class _Tp> 
# 1995
struct remove_extent< _Tp []>  { 
# 1996
typedef _Tp type; }; 
# 1999
template< class _Tp> 
# 2000
struct remove_all_extents { 
# 2001
typedef _Tp type; }; 
# 2003
template< class _Tp, size_t _Size> 
# 2004
struct remove_all_extents< _Tp [_Size]>  { 
# 2005
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 2007
template< class _Tp> 
# 2008
struct remove_all_extents< _Tp []>  { 
# 2009
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 2013
template< class _Tp> using remove_extent_t = typename remove_extent< _Tp> ::type; 
# 2017
template< class _Tp> using remove_all_extents_t = typename remove_all_extents< _Tp> ::type; 
# 2023
template< class _Tp, class > 
# 2024
struct __remove_pointer_helper { 
# 2025
typedef _Tp type; }; 
# 2027
template< class _Tp, class _Up> 
# 2028
struct __remove_pointer_helper< _Tp, _Up *>  { 
# 2029
typedef _Up type; }; 
# 2032
template< class _Tp> 
# 2033
struct remove_pointer : public __remove_pointer_helper< _Tp, __remove_cv_t< _Tp> >  { 
# 2035
}; 
# 2037
template< class _Tp, bool  = __or_< __is_referenceable< _Tp> , is_void< _Tp> > ::value> 
# 2039
struct __add_pointer_helper { 
# 2040
typedef _Tp type; }; 
# 2042
template< class _Tp> 
# 2043
struct __add_pointer_helper< _Tp, true>  { 
# 2044
typedef typename remove_reference< _Tp> ::type *type; }; 
# 2047
template< class _Tp> 
# 2048
struct add_pointer : public __add_pointer_helper< _Tp>  { 
# 2050
}; 
# 2054
template< class _Tp> using remove_pointer_t = typename remove_pointer< _Tp> ::type; 
# 2058
template< class _Tp> using add_pointer_t = typename add_pointer< _Tp> ::type; 
# 2062
template< size_t _Len> 
# 2063
struct __aligned_storage_msa { 
# 2065
union __type { 
# 2067
unsigned char __data[_Len]; 
# 2068
struct __attribute((__aligned__)) { } __align; 
# 2069
}; 
# 2070
}; 
# 2082 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> 
# 2084
struct aligned_storage { 
# 2086
union type { 
# 2088
unsigned char __data[_Len]; 
# 2089
struct __attribute((__aligned__(_Align))) { } __align; 
# 2090
}; 
# 2091
}; 
# 2093
template< class ..._Types> 
# 2094
struct __strictest_alignment { 
# 2096
static const size_t _S_alignment = (0); 
# 2097
static const size_t _S_size = (0); 
# 2098
}; 
# 2100
template< class _Tp, class ..._Types> 
# 2101
struct __strictest_alignment< _Tp, _Types...>  { 
# 2103
static const size_t _S_alignment = ((__alignof__(_Tp) > __strictest_alignment< _Types...> ::_S_alignment) ? __alignof__(_Tp) : __strictest_alignment< _Types...> ::_S_alignment); 
# 2106
static const size_t _S_size = ((sizeof(_Tp) > __strictest_alignment< _Types...> ::_S_size) ? sizeof(_Tp) : __strictest_alignment< _Types...> ::_S_size); 
# 2109
}; 
# 2121 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< size_t _Len, class ..._Types> 
# 2122
struct aligned_union { 
# 2125
static_assert((sizeof...(_Types) != (0)), "At least one type is required");
# 2127
private: using __strictest = __strictest_alignment< _Types...> ; 
# 2128
static const size_t _S_len = ((_Len > __strictest::_S_size) ? _Len : __strictest::_S_size); 
# 2132
public: static const size_t alignment_value = (__strictest::_S_alignment); 
# 2134
typedef typename aligned_storage< _S_len, alignment_value> ::type type; 
# 2135
}; 
# 2137
template< size_t _Len, class ..._Types> const size_t aligned_union< _Len, _Types...> ::alignment_value; 
# 2144
template< class _Up, bool 
# 2145
_IsArray = is_array< _Up> ::value, bool 
# 2146
_IsFunction = is_function< _Up> ::value> struct __decay_selector; 
# 2150
template< class _Up> 
# 2151
struct __decay_selector< _Up, false, false>  { 
# 2152
typedef __remove_cv_t< _Up>  __type; }; 
# 2154
template< class _Up> 
# 2155
struct __decay_selector< _Up, true, false>  { 
# 2156
typedef typename remove_extent< _Up> ::type *__type; }; 
# 2158
template< class _Up> 
# 2159
struct __decay_selector< _Up, false, true>  { 
# 2160
typedef typename add_pointer< _Up> ::type __type; }; 
# 2164
template< class _Tp> 
# 2165
class decay { 
# 2167
typedef typename remove_reference< _Tp> ::type __remove_type; 
# 2170
public: typedef typename __decay_selector< __remove_type> ::__type type; 
# 2171
}; 
# 2176
template< class _Tp> 
# 2177
struct __strip_reference_wrapper { 
# 2179
typedef _Tp __type; 
# 2180
}; 
# 2182
template< class _Tp> 
# 2183
struct __strip_reference_wrapper< reference_wrapper< _Tp> >  { 
# 2185
typedef _Tp &__type; 
# 2186
}; 
# 2189
template< class _Tp> using __decay_t = typename decay< _Tp> ::type; 
# 2192
template< class _Tp> using __decay_and_strip = __strip_reference_wrapper< __decay_t< _Tp> > ; 
# 2198
template< bool , class _Tp = void> 
# 2199
struct enable_if { 
# 2200
}; 
# 2203
template< class _Tp> 
# 2204
struct enable_if< true, _Tp>  { 
# 2205
typedef _Tp type; }; 
# 2210
template< bool _Cond, class _Tp = void> using __enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2214
template< class ..._Cond> using _Require = __enable_if_t< __and_< _Cond...> ::value> ; 
# 2218
template< class _Tp> using __remove_cvref_t = typename remove_cv< typename remove_reference< _Tp> ::type> ::type; 
# 2225
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 2226
struct conditional { 
# 2227
typedef _Iftrue type; }; 
# 2230
template< class _Iftrue, class _Iffalse> 
# 2231
struct conditional< false, _Iftrue, _Iffalse>  { 
# 2232
typedef _Iffalse type; }; 
# 2235
template< class ..._Tp> struct common_type; 
# 2241
struct __do_common_type_impl { 
# 2243
template< class _Tp, class _Up> using __cond_t = __decltype((true ? std::declval< _Tp> () : std::declval< _Up> ())); 
# 2249
template< class _Tp, class _Up> static __success_type< __decay_t< __cond_t< _Tp, _Up> > >  _S_test(int); 
# 2261 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class , class > static __failure_type _S_test_2(...); 
# 2265
template< class _Tp, class _Up> static __decltype((_S_test_2< _Tp, _Up> (0))) _S_test(...); 
# 2268
}; 
# 2272
template<> struct common_type< >  { 
# 2273
}; 
# 2276
template< class _Tp0> 
# 2277
struct common_type< _Tp0>  : public std::common_type< _Tp0, _Tp0>  { 
# 2279
}; 
# 2282
template< class _Tp1, class _Tp2, class 
# 2283
_Dp1 = __decay_t< _Tp1> , class _Dp2 = __decay_t< _Tp2> > 
# 2284
struct __common_type_impl { 
# 2288
using type = common_type< _Dp1, _Dp2> ; 
# 2289
}; 
# 2291
template< class _Tp1, class _Tp2> 
# 2292
struct __common_type_impl< _Tp1, _Tp2, _Tp1, _Tp2>  : private __do_common_type_impl { 
# 2297
using type = __decltype((_S_test< _Tp1, _Tp2> (0))); 
# 2298
}; 
# 2301
template< class _Tp1, class _Tp2> 
# 2302
struct common_type< _Tp1, _Tp2>  : public __common_type_impl< _Tp1, _Tp2> ::type { 
# 2304
}; 
# 2306
template< class ...> 
# 2307
struct __common_type_pack { 
# 2308
}; 
# 2310
template< class , class , class  = void> struct __common_type_fold; 
# 2314
template< class _Tp1, class _Tp2, class ..._Rp> 
# 2315
struct common_type< _Tp1, _Tp2, _Rp...>  : public __common_type_fold< std::common_type< _Tp1, _Tp2> , __common_type_pack< _Rp...> >  { 
# 2318
}; 
# 2323
template< class _CTp, class ..._Rp> 
# 2324
struct __common_type_fold< _CTp, __common_type_pack< _Rp...> , __void_t< typename _CTp::type> >  : public common_type< typename _CTp::type, _Rp...>  { 
# 2327
}; 
# 2330
template< class _CTp, class _Rp> 
# 2331
struct __common_type_fold< _CTp, _Rp, void>  { 
# 2332
}; 
# 2334
template< class _Tp, bool  = is_enum< _Tp> ::value> 
# 2335
struct __underlying_type_impl { 
# 2337
using type = __underlying_type(_Tp); 
# 2338
}; 
# 2340
template< class _Tp> 
# 2341
struct __underlying_type_impl< _Tp, false>  { 
# 2342
}; 
# 2346
template< class _Tp> 
# 2347
struct underlying_type : public __underlying_type_impl< _Tp>  { 
# 2349
}; 
# 2352
template< class _Tp> 
# 2353
struct __declval_protector { 
# 2355
static const bool __stop = false; 
# 2356
}; 
# 2363
template< class _Tp> auto 
# 2364
declval() noexcept->__decltype((__declval< _Tp> (0))) 
# 2365
{ 
# 2366
static_assert((__declval_protector< _Tp> ::__stop), "declval() must not be used!");
# 2368
return __declval< _Tp> (0); 
# 2369
} 
# 2372
template< class _Signature> struct result_of; 
# 2380
struct __invoke_memfun_ref { }; 
# 2381
struct __invoke_memfun_deref { }; 
# 2382
struct __invoke_memobj_ref { }; 
# 2383
struct __invoke_memobj_deref { }; 
# 2384
struct __invoke_other { }; 
# 2387
template< class _Tp, class _Tag> 
# 2388
struct __result_of_success : public __success_type< _Tp>  { 
# 2389
using __invoke_type = _Tag; }; 
# 2392
struct __result_of_memfun_ref_impl { 
# 2394
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype(((std::declval< _Tp1> ().*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_ref>  _S_test(int); 
# 2399
template< class ...> static __failure_type _S_test(...); 
# 2401
}; 
# 2403
template< class _MemPtr, class _Arg, class ..._Args> 
# 2404
struct __result_of_memfun_ref : private __result_of_memfun_ref_impl { 
# 2407
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2408
}; 
# 2411
struct __result_of_memfun_deref_impl { 
# 2413
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype((((*std::declval< _Tp1> ()).*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_deref>  _S_test(int); 
# 2418
template< class ...> static __failure_type _S_test(...); 
# 2420
}; 
# 2422
template< class _MemPtr, class _Arg, class ..._Args> 
# 2423
struct __result_of_memfun_deref : private __result_of_memfun_deref_impl { 
# 2426
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2427
}; 
# 2430
struct __result_of_memobj_ref_impl { 
# 2432
template< class _Fp, class _Tp1> static __result_of_success< __decltype((std::declval< _Tp1> ().*std::declval< _Fp> ())), __invoke_memobj_ref>  _S_test(int); 
# 2437
template< class , class > static __failure_type _S_test(...); 
# 2439
}; 
# 2441
template< class _MemPtr, class _Arg> 
# 2442
struct __result_of_memobj_ref : private __result_of_memobj_ref_impl { 
# 2445
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2446
}; 
# 2449
struct __result_of_memobj_deref_impl { 
# 2451
template< class _Fp, class _Tp1> static __result_of_success< __decltype(((*std::declval< _Tp1> ()).*std::declval< _Fp> ())), __invoke_memobj_deref>  _S_test(int); 
# 2456
template< class , class > static __failure_type _S_test(...); 
# 2458
}; 
# 2460
template< class _MemPtr, class _Arg> 
# 2461
struct __result_of_memobj_deref : private __result_of_memobj_deref_impl { 
# 2464
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2465
}; 
# 2467
template< class _MemPtr, class _Arg> struct __result_of_memobj; 
# 2470
template< class _Res, class _Class, class _Arg> 
# 2471
struct __result_of_memobj< _Res (_Class::*), _Arg>  { 
# 2473
typedef __remove_cvref_t< _Arg>  _Argval; 
# 2474
typedef _Res (_Class::*_MemPtr); 
# 2479
typedef typename conditional< __or_< is_same< _Argval, _Class> , is_base_of< _Class, _Argval> > ::value, __result_of_memobj_ref< _MemPtr, _Arg> , __result_of_memobj_deref< _MemPtr, _Arg> > ::type::type type; 
# 2480
}; 
# 2482
template< class _MemPtr, class _Arg, class ..._Args> struct __result_of_memfun; 
# 2485
template< class _Res, class _Class, class _Arg, class ..._Args> 
# 2486
struct __result_of_memfun< _Res (_Class::*), _Arg, _Args...>  { 
# 2488
typedef typename remove_reference< _Arg> ::type _Argval; 
# 2489
typedef _Res (_Class::*_MemPtr); 
# 2493
typedef typename conditional< is_base_of< _Class, _Argval> ::value, __result_of_memfun_ref< _MemPtr, _Arg, _Args...> , __result_of_memfun_deref< _MemPtr, _Arg, _Args...> > ::type::type type; 
# 2494
}; 
# 2501
template< class _Tp, class _Up = __remove_cvref_t< _Tp> > 
# 2502
struct __inv_unwrap { 
# 2504
using type = _Tp; 
# 2505
}; 
# 2507
template< class _Tp, class _Up> 
# 2508
struct __inv_unwrap< _Tp, reference_wrapper< _Up> >  { 
# 2510
using type = _Up &; 
# 2511
}; 
# 2513
template< bool , bool , class _Functor, class ..._ArgTypes> 
# 2514
struct __result_of_impl { 
# 2516
typedef __failure_type type; 
# 2517
}; 
# 2519
template< class _MemPtr, class _Arg> 
# 2520
struct __result_of_impl< true, false, _MemPtr, _Arg>  : public __result_of_memobj< __decay_t< _MemPtr> , typename __inv_unwrap< _Arg> ::type>  { 
# 2523
}; 
# 2525
template< class _MemPtr, class _Arg, class ..._Args> 
# 2526
struct __result_of_impl< false, true, _MemPtr, _Arg, _Args...>  : public __result_of_memfun< __decay_t< _MemPtr> , typename __inv_unwrap< _Arg> ::type, _Args...>  { 
# 2529
}; 
# 2532
struct __result_of_other_impl { 
# 2534
template< class _Fn, class ..._Args> static __result_of_success< __decltype((std::declval< _Fn> ()(std::declval< _Args> ()...))), __invoke_other>  _S_test(int); 
# 2539
template< class ...> static __failure_type _S_test(...); 
# 2541
}; 
# 2543
template< class _Functor, class ..._ArgTypes> 
# 2544
struct __result_of_impl< false, false, _Functor, _ArgTypes...>  : private __result_of_other_impl { 
# 2547
typedef __decltype((_S_test< _Functor, _ArgTypes...> (0))) type; 
# 2548
}; 
# 2551
template< class _Functor, class ..._ArgTypes> 
# 2552
struct __invoke_result : public __result_of_impl< is_member_object_pointer< typename remove_reference< _Functor> ::type> ::value, is_member_function_pointer< typename remove_reference< _Functor> ::type> ::value, _Functor, _ArgTypes...> ::type { 
# 2562
}; 
# 2565
template< class _Functor, class ..._ArgTypes> 
# 2566
struct result_of< _Functor (_ArgTypes ...)>  : public __invoke_result< _Functor, _ArgTypes...>  { 
# 2568
}; 
# 2572
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> using aligned_storage_t = typename aligned_storage< _Len, _Align> ::type; 
# 2576
template< size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union< _Len, _Types...> ::type; 
# 2580
template< class _Tp> using decay_t = typename decay< _Tp> ::type; 
# 2584
template< bool _Cond, class _Tp = void> using enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2588
template< bool _Cond, class _Iftrue, class _Iffalse> using conditional_t = typename conditional< _Cond, _Iftrue, _Iffalse> ::type; 
# 2592
template< class ..._Tp> using common_type_t = typename common_type< _Tp...> ::type; 
# 2596
template< class _Tp> using underlying_type_t = typename underlying_type< _Tp> ::type; 
# 2600
template< class _Tp> using result_of_t = typename result_of< _Tp> ::type; 
# 2613 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Default, class _AlwaysVoid, 
# 2614
template< class ...>  class _Op, class ..._Args> 
# 2615
struct __detector { 
# 2617
using value_t = false_type; 
# 2618
using type = _Default; 
# 2619
}; 
# 2622
template< class _Default, template< class ...>  class _Op, class ...
# 2623
_Args> 
# 2624
struct __detector< _Default, __void_t< _Op< _Args...> > , _Op, _Args...>  { 
# 2626
using value_t = true_type; 
# 2627
using type = _Op< _Args...> ; 
# 2628
}; 
# 2631
template< class _Default, template< class ...>  class _Op, class ...
# 2632
_Args> using __detected_or = __detector< _Default, void, _Op, _Args...> ; 
# 2636
template< class _Default, template< class ...>  class _Op, class ...
# 2637
_Args> using __detected_or_t = typename __detector< _Default, void, _Op, _Args...> ::type; 
# 2655 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Tp> struct __is_swappable; 
# 2658
template< class _Tp> struct __is_nothrow_swappable; 
# 2661
template< class > 
# 2662
struct __is_tuple_like_impl : public false_type { 
# 2663
}; 
# 2665
template< class ..._Tps> 
# 2666
struct __is_tuple_like_impl< tuple< _Tps...> >  : public true_type { 
# 2667
}; 
# 2670
template< class _Tp> 
# 2671
struct __is_tuple_like : public __is_tuple_like_impl< __remove_cvref_t< _Tp> > ::type { 
# 2673
}; 
# 2676
template< class _Tp> inline _Require< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> >  swap(_Tp &, _Tp &) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value); 
# 2686
template< class _Tp, size_t _Nm> inline __enable_if_t< __is_swappable< _Tp> ::value>  swap(_Tp (& __a)[_Nm], _Tp (& __b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value); 
# 2694
namespace __swappable_details { 
# 2695
using std::swap;
# 2697
struct __do_is_swappable_impl { 
# 2699
template< class _Tp, class 
# 2700
 = __decltype((swap(std::declval< _Tp &> (), std::declval< _Tp &> ())))> static true_type 
# 2699
__test(int); 
# 2703
template< class > static false_type __test(...); 
# 2705
}; 
# 2707
struct __do_is_nothrow_swappable_impl { 
# 2709
template< class _Tp> static __bool_constant< noexcept(swap(std::declval< _Tp &> (), std::declval< _Tp &> ()))>  __test(int); 
# 2714
template< class > static false_type __test(...); 
# 2716
}; 
# 2718
}
# 2720
template< class _Tp> 
# 2721
struct __is_swappable_impl : public __swappable_details::__do_is_swappable_impl { 
# 2724
typedef __decltype((__test< _Tp> (0))) type; 
# 2725
}; 
# 2727
template< class _Tp> 
# 2728
struct __is_nothrow_swappable_impl : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2731
typedef __decltype((__test< _Tp> (0))) type; 
# 2732
}; 
# 2734
template< class _Tp> 
# 2735
struct __is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2737
}; 
# 2739
template< class _Tp> 
# 2740
struct __is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2742
}; 
# 2882 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
template< class _Result, class _Ret, bool 
# 2883
 = is_void< _Ret> ::value, class  = void> 
# 2884
struct __is_invocable_impl : public false_type { }; 
# 2887
template< class _Result, class _Ret> 
# 2888
struct __is_invocable_impl< _Result, _Ret, true, __void_t< typename _Result::type> >  : public true_type { 
# 2892
}; 
# 2894
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
# 2897
template< class _Result, class _Ret> 
# 2898
struct __is_invocable_impl< _Result, _Ret, false, __void_t< typename _Result::type> >  { 
# 2905
private: static typename _Result::type _S_get(); 
# 2907
template< class _Tp> static void _S_conv(_Tp); 
# 2911
template< class _Tp, class  = __decltype((_S_conv< _Tp> ((_S_get)())))> static true_type _S_test(int); 
# 2915
template< class _Tp> static false_type _S_test(...); 
# 2920
public: using type = __decltype((_S_test< _Ret> (1))); 
# 2921
}; 
#pragma GCC diagnostic pop
# 2924
template< class _Fn, class ..._ArgTypes> 
# 2925
struct __is_invocable : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> ::type { 
# 2927
}; 
# 2929
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2930
__call_is_nt(__invoke_memfun_ref) 
# 2931
{ 
# 2932
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2933
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2935
} 
# 2937
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2938
__call_is_nt(__invoke_memfun_deref) 
# 2939
{ 
# 2940
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2942
} 
# 2944
template< class _Fn, class _Tp> constexpr bool 
# 2945
__call_is_nt(__invoke_memobj_ref) 
# 2946
{ 
# 2947
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2948
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())); 
# 2949
} 
# 2951
template< class _Fn, class _Tp> constexpr bool 
# 2952
__call_is_nt(__invoke_memobj_deref) 
# 2953
{ 
# 2954
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())); 
# 2955
} 
# 2957
template< class _Fn, class ..._Args> constexpr bool 
# 2958
__call_is_nt(__invoke_other) 
# 2959
{ 
# 2960
return noexcept(std::declval< _Fn> ()(std::declval< _Args> ()...)); 
# 2961
} 
# 2963
template< class _Result, class _Fn, class ..._Args> 
# 2964
struct __call_is_nothrow : public __bool_constant< std::__call_is_nt< _Fn, _Args...> (typename _Result::__invoke_type{})>  { 
# 2968
}; 
# 2970
template< class _Fn, class ..._Args> using __call_is_nothrow_ = __call_is_nothrow< __invoke_result< _Fn, _Args...> , _Fn, _Args...> ; 
# 2975
template< class _Fn, class ..._Args> 
# 2976
struct __is_nothrow_invocable : public __and_< __is_invocable< _Fn, _Args...> , __call_is_nothrow_< _Fn, _Args...> > ::type { 
# 2979
}; 
# 2981
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
struct __nonesuchbase { }; 
# 2984
struct __nonesuch : private __nonesuchbase { 
# 2985
~__nonesuch() = delete;
# 2986
__nonesuch(const __nonesuch &) = delete;
# 2987
void operator=(const __nonesuch &) = delete;
# 2988
}; 
#pragma GCC diagnostic pop
# 3598 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/type_traits" 3
}
# 59 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 74 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/move.h" 3
template< class _Tp> constexpr _Tp &&
# 77
forward(typename remove_reference< _Tp> ::type &__t) noexcept 
# 78
{ return static_cast< _Tp &&>(__t); } 
# 86
template< class _Tp> constexpr _Tp &&
# 89
forward(typename remove_reference< _Tp> ::type &&__t) noexcept 
# 90
{ 
# 91
static_assert((!std::template is_lvalue_reference< _Tp> ::value), "std::forward must not be used to convert an rvalue to an lvalue");
# 93
return static_cast< _Tp &&>(__t); 
# 94
} 
# 101
template< class _Tp> constexpr typename remove_reference< _Tp> ::type &&
# 104
move(_Tp &&__t) noexcept 
# 105
{ return static_cast< typename remove_reference< _Tp> ::type &&>(__t); } 
# 108
template< class _Tp> 
# 109
struct __move_if_noexcept_cond : public __and_< __not_< is_nothrow_move_constructible< _Tp> > , is_copy_constructible< _Tp> > ::type { 
# 111
}; 
# 121 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/move.h" 3
template< class _Tp> constexpr typename conditional< __move_if_noexcept_cond< _Tp> ::value, const _Tp &, _Tp &&> ::type 
# 125
move_if_noexcept(_Tp &__x) noexcept 
# 126
{ return std::move(__x); } 
# 142 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/move.h" 3
template< class _Tp> inline _Tp *
# 145
addressof(_Tp &__r) noexcept 
# 146
{ return std::__addressof(__r); } 
# 150
template < typename _Tp >
    const _Tp * addressof ( const _Tp && ) = delete;
# 154
template< class _Tp, class _Up = _Tp> inline _Tp 
# 157
__exchange(_Tp &__obj, _Up &&__new_val) 
# 158
{ 
# 159
_Tp __old_val = std::move(__obj); 
# 160
__obj = std::forward< _Up> (__new_val); 
# 161
return __old_val; 
# 162
} 
# 186 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/move.h" 3
template< class _Tp> inline typename enable_if< __and_< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> > ::value> ::type 
# 196
swap(_Tp &__a, _Tp &__b) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value) 
# 199
{ 
# 204
_Tp __tmp = std::move(__a); 
# 205
__a = std::move(__b); 
# 206
__b = std::move(__tmp); 
# 207
} 
# 212
template< class _Tp, size_t _Nm> inline typename enable_if< __is_swappable< _Tp> ::value> ::type 
# 220
swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value) 
# 222
{ 
# 223
for (size_t __n = (0); __n < _Nm; ++__n) { 
# 224
swap(__a[__n], __b[__n]); }  
# 225
} 
# 229
}
# 69 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 80 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
struct piecewise_construct_t { explicit piecewise_construct_t() = default;}; 
# 83
constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t(); 
# 89
template< class ...> class tuple; 
# 92
template< size_t ...> struct _Index_tuple; 
# 100
template< bool , class _T1, class _T2> 
# 101
struct _PCC { 
# 103
template< class _U1, class _U2> static constexpr bool 
# 104
_ConstructiblePair() 
# 105
{ 
# 106
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, const _U2 &> > ::value; 
# 108
} 
# 110
template< class _U1, class _U2> static constexpr bool 
# 111
_ImplicitlyConvertiblePair() 
# 112
{ 
# 113
return __and_< is_convertible< const _U1 &, _T1> , is_convertible< const _U2 &, _T2> > ::value; 
# 115
} 
# 117
template< class _U1, class _U2> static constexpr bool 
# 118
_MoveConstructiblePair() 
# 119
{ 
# 120
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, _U2 &&> > ::value; 
# 122
} 
# 124
template< class _U1, class _U2> static constexpr bool 
# 125
_ImplicitlyMoveConvertiblePair() 
# 126
{ 
# 127
return __and_< is_convertible< _U1 &&, _T1> , is_convertible< _U2 &&, _T2> > ::value; 
# 129
} 
# 131
template< bool __implicit, class _U1, class _U2> static constexpr bool 
# 132
_CopyMovePair() 
# 133
{ 
# 134
using __do_converts = __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > ; 
# 136
using __converts = typename conditional< __implicit, __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > , __not_< __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > > > ::type; 
# 139
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, _U2 &&> , typename conditional< __implicit, __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > , __not_< __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > > > ::type> ::value; 
# 143
} 
# 145
template< bool __implicit, class _U1, class _U2> static constexpr bool 
# 146
_MoveCopyPair() 
# 147
{ 
# 148
using __do_converts = __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > ; 
# 150
using __converts = typename conditional< __implicit, __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > , __not_< __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > > > ::type; 
# 153
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, const _U2 &&> , typename conditional< __implicit, __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > , __not_< __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > > > ::type> ::value; 
# 157
} 
# 158
}; 
# 160
template< class _T1, class _T2> 
# 161
struct _PCC< false, _T1, _T2>  { 
# 163
template< class _U1, class _U2> static constexpr bool 
# 164
_ConstructiblePair() 
# 165
{ 
# 166
return false; 
# 167
} 
# 169
template< class _U1, class _U2> static constexpr bool 
# 170
_ImplicitlyConvertiblePair() 
# 171
{ 
# 172
return false; 
# 173
} 
# 175
template< class _U1, class _U2> static constexpr bool 
# 176
_MoveConstructiblePair() 
# 177
{ 
# 178
return false; 
# 179
} 
# 181
template< class _U1, class _U2> static constexpr bool 
# 182
_ImplicitlyMoveConvertiblePair() 
# 183
{ 
# 184
return false; 
# 185
} 
# 186
}; 
# 189
template< class _U1, class _U2> class __pair_base { 
# 192
template< class _T1, class _T2> friend struct pair; 
# 193
__pair_base() = default;
# 194
~__pair_base() = default;
# 195
__pair_base(const __pair_base &) = default;
# 196
__pair_base &operator=(const __pair_base &) = delete;
# 198
}; 
# 210 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> 
# 211
struct pair : private __pair_base< _T1, _T2>  { 
# 214
typedef _T1 first_type; 
# 215
typedef _T2 second_type; 
# 217
_T1 first; 
# 218
_T2 second; 
# 225
template< class _U1 = _T1, class 
# 226
_U2 = _T2, typename enable_if< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > ::value, bool> ::type 
# 230
 = true> constexpr 
# 232
pair() : first(), second() 
# 233
{ } 
# 236
template< class _U1 = _T1, class 
# 237
_U2 = _T2, typename enable_if< __and_< is_default_constructible< _U1> , is_default_constructible< _U2> , __not_< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > > > ::value, bool> ::type 
# 244
 = false> constexpr explicit 
# 245
pair() : first(), second() 
# 246
{ } 
# 256 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
using _PCCP = _PCC< true, _T1, _T2> ; 
# 260
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 265
 = true> constexpr 
# 266
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 267
{ } 
# 270
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 275
 = false> constexpr explicit 
# 276
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 277
{ } 
# 288 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
template< class _U1, class _U2> using _PCCFP = _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ; 
# 294
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 299
 = true> constexpr 
# 300
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 301
{ } 
# 303
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 308
 = false> constexpr explicit 
# 309
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 310
{ } 
# 314
constexpr pair(const pair &) = default;
# 315
constexpr pair(pair &&) = default;
# 318
template< class _U1, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveCopyPair< true, _U1, _T2> (), bool> ::type 
# 321
 = true> constexpr 
# 322
pair(_U1 &&__x, const _T2 &__y) : first(std::forward< _U1> (__x)), second(__y) 
# 323
{ } 
# 325
template< class _U1, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveCopyPair< false, _U1, _T2> (), bool> ::type 
# 328
 = false> constexpr explicit 
# 329
pair(_U1 &&__x, const _T2 &__y) : first(std::forward< _U1> (__x)), second(__y) 
# 330
{ } 
# 332
template< class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _CopyMovePair< true, _T1, _U2> (), bool> ::type 
# 335
 = true> constexpr 
# 336
pair(const _T1 &__x, _U2 &&__y) : first(__x), second(std::forward< _U2> (__y)) 
# 337
{ } 
# 339
template< class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _CopyMovePair< false, _T1, _U2> (), bool> ::type 
# 342
 = false> explicit 
# 343
pair(const _T1 &__x, _U2 &&__y) : first(__x), second(std::forward< _U2> (__y)) 
# 344
{ } 
# 346
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 351
 = true> constexpr 
# 352
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 353
{ } 
# 355
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 360
 = false> constexpr explicit 
# 361
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 362
{ } 
# 365
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 370
 = true> constexpr 
# 371
pair(std::pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 373
{ } 
# 375
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 380
 = false> constexpr explicit 
# 381
pair(std::pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 383
{ } 
# 385
template< class ..._Args1, class ..._Args2> pair(std::piecewise_construct_t, tuple< _Args1...> , tuple< _Args2...> ); 
# 390
pair &operator=(typename conditional< __and_< is_copy_assignable< _T1> , is_copy_assignable< _T2> > ::value, const pair &, const std::__nonesuch &> ::type 
# 393
__p) 
# 394
{ 
# 395
(first) = (__p.first); 
# 396
(second) = (__p.second); 
# 397
return *this; 
# 398
} 
# 401
pair &operator=(typename conditional< __and_< is_move_assignable< _T1> , is_move_assignable< _T2> > ::value, pair &&, std::__nonesuch &&> ::type 
# 404
__p) noexcept(__and_< is_nothrow_move_assignable< _T1> , is_nothrow_move_assignable< _T2> > ::value) 
# 407
{ 
# 408
(first) = std::forward< first_type> ((__p.first)); 
# 409
(second) = std::forward< second_type> ((__p.second)); 
# 410
return *this; 
# 411
} 
# 413
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, const _U1 &> , is_assignable< _T2 &, const _U2 &> > ::value, pair &> ::type 
# 418
operator=(const std::pair< _U1, _U2>  &__p) 
# 419
{ 
# 420
(first) = (__p.first); 
# 421
(second) = (__p.second); 
# 422
return *this; 
# 423
} 
# 425
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, _U1 &&> , is_assignable< _T2 &, _U2 &&> > ::value, pair &> ::type 
# 430
operator=(std::pair< _U1, _U2>  &&__p) 
# 431
{ 
# 432
(first) = std::forward< _U1> ((__p.first)); 
# 433
(second) = std::forward< _U2> ((__p.second)); 
# 434
return *this; 
# 435
} 
# 439
void swap(pair &__p) noexcept(__and_< __is_nothrow_swappable< _T1> , __is_nothrow_swappable< _T2> > ::value) 
# 442
{ 
# 443
using std::swap;
# 444
swap(first, __p.first); 
# 445
swap(second, __p.second); 
# 446
} 
# 449
private: template< class ..._Args1, std::size_t ..._Indexes1, class ...
# 450
_Args2, std::size_t ..._Indexes2> 
# 449
pair(tuple< _Args1...>  &, tuple< _Args2...>  &, _Index_tuple< _Indexes1...> , _Index_tuple< _Indexes2...> ); 
# 455
}; 
# 464 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr bool 
# 466
operator==(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 467
{ return ((__x.first) == (__y.first)) && ((__x.second) == (__y.second)); } 
# 487 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr bool 
# 489
operator<(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 490
{ return ((__x.first) < (__y.first)) || ((!((__y.first) < (__x.first))) && ((__x.second) < (__y.second))); 
# 491
} 
# 494
template< class _T1, class _T2> constexpr bool 
# 496
operator!=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 497
{ return !(__x == __y); } 
# 500
template< class _T1, class _T2> constexpr bool 
# 502
operator>(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 503
{ return __y < __x; } 
# 506
template< class _T1, class _T2> constexpr bool 
# 508
operator<=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 509
{ return !(__y < __x); } 
# 512
template< class _T1, class _T2> constexpr bool 
# 514
operator>=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 515
{ return !(__x < __y); } 
# 524 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> inline void 
# 533
swap(pair< _T1, _T2>  &__x, pair< _T1, _T2>  &__y) noexcept(noexcept(__x.swap(__y))) 
# 535
{ __x.swap(__y); } 
# 564 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr pair< typename __strip_reference_wrapper< __decay_t< _T1> > ::__type, typename __strip_reference_wrapper< __decay_t< _T2> > ::__type>  
# 567
make_pair(_T1 &&__x, _T2 &&__y) 
# 568
{ 
# 569
typedef typename __strip_reference_wrapper< __decay_t< _T1> > ::__type __ds_type1; 
# 570
typedef typename __strip_reference_wrapper< __decay_t< _T2> > ::__type __ds_type2; 
# 571
typedef pair< typename __strip_reference_wrapper< __decay_t< _T1> > ::__type, typename __strip_reference_wrapper< __decay_t< _T2> > ::__type>  __pair_type; 
# 572
return __pair_type(std::forward< _T1> (__x), std::forward< _T2> (__y)); 
# 573
} 
# 584 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/bits/stl_pair.h" 3
}
# 39 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/initializer_list" 3
#pragma GCC visibility push ( default )
# 43
namespace std { 
# 46
template< class _E> 
# 47
class initializer_list { 
# 50
public: typedef _E value_type; 
# 51
typedef const _E &reference; 
# 52
typedef const _E &const_reference; 
# 53
typedef size_t size_type; 
# 54
typedef const _E *iterator; 
# 55
typedef const _E *const_iterator; 
# 58
private: iterator _M_array; 
# 59
size_type _M_len; 
# 62
constexpr initializer_list(const_iterator __a, size_type __l) : _M_array(__a), _M_len(__l) 
# 63
{ } 
# 66
public: constexpr initializer_list() noexcept : _M_array((0)), _M_len((0)) 
# 67
{ } 
# 71
constexpr size_type size() const noexcept { return _M_len; } 
# 75
constexpr const_iterator begin() const noexcept { return _M_array; } 
# 79
constexpr const_iterator end() const noexcept { return begin() + size(); } 
# 80
}; 
# 88
template< class _Tp> constexpr const _Tp *
# 90
begin(initializer_list< _Tp>  __ils) noexcept 
# 91
{ return __ils.begin(); } 
# 99
template< class _Tp> constexpr const _Tp *
# 101
end(initializer_list< _Tp>  __ils) noexcept 
# 102
{ return __ils.end(); } 
# 103
}
# 105
#pragma GCC visibility pop
# 82 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/utility" 3
namespace std __attribute((__visibility__("default"))) { 
# 87
template< class _Tp> struct tuple_size; 
# 94
template< class _Tp, class 
# 95
_Up = typename remove_cv< _Tp> ::type, class 
# 96
 = typename enable_if< is_same< _Tp, _Up> ::value> ::type, size_t 
# 97
 = tuple_size< _Tp> ::value> using __enable_if_has_tuple_size = _Tp; 
# 100
template< class _Tp> 
# 101
struct tuple_size< const __enable_if_has_tuple_size< _Tp> >  : public std::tuple_size< _Tp>  { 
# 102
}; 
# 104
template< class _Tp> 
# 105
struct tuple_size< volatile __enable_if_has_tuple_size< _Tp> >  : public std::tuple_size< _Tp>  { 
# 106
}; 
# 108
template< class _Tp> 
# 109
struct tuple_size< const volatile __enable_if_has_tuple_size< _Tp> >  : public std::tuple_size< _Tp>  { 
# 110
}; 
# 113
template< size_t __i, class _Tp> struct tuple_element; 
# 117
template< size_t __i, class _Tp> using __tuple_element_t = typename tuple_element< __i, _Tp> ::type; 
# 120
template< size_t __i, class _Tp> 
# 121
struct tuple_element< __i, const _Tp>  { 
# 123
typedef typename add_const< __tuple_element_t< __i, _Tp> > ::type type; 
# 124
}; 
# 126
template< size_t __i, class _Tp> 
# 127
struct tuple_element< __i, volatile _Tp>  { 
# 129
typedef typename add_volatile< __tuple_element_t< __i, _Tp> > ::type type; 
# 130
}; 
# 132
template< size_t __i, class _Tp> 
# 133
struct tuple_element< __i, const volatile _Tp>  { 
# 135
typedef typename add_cv< __tuple_element_t< __i, _Tp> > ::type type; 
# 136
}; 
# 144
template< size_t __i, class _Tp> using tuple_element_t = typename tuple_element< __i, _Tp> ::type; 
# 151
template< class _T1, class _T2> 
# 152
struct __is_tuple_like_impl< pair< _T1, _T2> >  : public true_type { 
# 153
}; 
# 156
template< class _Tp1, class _Tp2> 
# 157
struct tuple_size< pair< _Tp1, _Tp2> >  : public integral_constant< unsigned long, 2UL>  { 
# 158
}; 
# 161
template< class _Tp1, class _Tp2> 
# 162
struct tuple_element< 0, pair< _Tp1, _Tp2> >  { 
# 163
typedef _Tp1 type; }; 
# 166
template< class _Tp1, class _Tp2> 
# 167
struct tuple_element< 1, pair< _Tp1, _Tp2> >  { 
# 168
typedef _Tp2 type; }; 
# 170
template< size_t _Int> struct __pair_get; 
# 174
template<> struct __pair_get< 0UL>  { 
# 176
template< class _Tp1, class _Tp2> static constexpr _Tp1 &
# 178
__get(pair< _Tp1, _Tp2>  &__pair) noexcept 
# 179
{ return __pair.first; } 
# 181
template< class _Tp1, class _Tp2> static constexpr _Tp1 &&
# 183
__move_get(pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 184
{ return std::forward< _Tp1> ((__pair.first)); } 
# 186
template< class _Tp1, class _Tp2> static constexpr const _Tp1 &
# 188
__const_get(const pair< _Tp1, _Tp2>  &__pair) noexcept 
# 189
{ return __pair.first; } 
# 191
template< class _Tp1, class _Tp2> static constexpr const _Tp1 &&
# 193
__const_move_get(const pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 194
{ return std::forward< const _Tp1> ((__pair.first)); } 
# 195
}; 
# 198
template<> struct __pair_get< 1UL>  { 
# 200
template< class _Tp1, class _Tp2> static constexpr _Tp2 &
# 202
__get(pair< _Tp1, _Tp2>  &__pair) noexcept 
# 203
{ return __pair.second; } 
# 205
template< class _Tp1, class _Tp2> static constexpr _Tp2 &&
# 207
__move_get(pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 208
{ return std::forward< _Tp2> ((__pair.second)); } 
# 210
template< class _Tp1, class _Tp2> static constexpr const _Tp2 &
# 212
__const_get(const pair< _Tp1, _Tp2>  &__pair) noexcept 
# 213
{ return __pair.second; } 
# 215
template< class _Tp1, class _Tp2> static constexpr const _Tp2 &&
# 217
__const_move_get(const pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 218
{ return std::forward< const _Tp2> ((__pair.second)); } 
# 219
}; 
# 221
template< size_t _Int, class _Tp1, class _Tp2> constexpr typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &
# 223
get(pair< _Tp1, _Tp2>  &__in) noexcept 
# 224
{ return __pair_get< _Int> ::__get(__in); } 
# 226
template< size_t _Int, class _Tp1, class _Tp2> constexpr typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &&
# 228
get(pair< _Tp1, _Tp2>  &&__in) noexcept 
# 229
{ return __pair_get< _Int> ::__move_get(std::move(__in)); } 
# 231
template< size_t _Int, class _Tp1, class _Tp2> constexpr const typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &
# 233
get(const pair< _Tp1, _Tp2>  &__in) noexcept 
# 234
{ return __pair_get< _Int> ::__const_get(__in); } 
# 236
template< size_t _Int, class _Tp1, class _Tp2> constexpr const typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &&
# 238
get(const pair< _Tp1, _Tp2>  &&__in) noexcept 
# 239
{ return __pair_get< _Int> ::__const_move_get(std::move(__in)); } 
# 245
template< class _Tp, class _Up> constexpr _Tp &
# 247
get(pair< _Tp, _Up>  &__p) noexcept 
# 248
{ return __p.first; } 
# 250
template< class _Tp, class _Up> constexpr const _Tp &
# 252
get(const pair< _Tp, _Up>  &__p) noexcept 
# 253
{ return __p.first; } 
# 255
template< class _Tp, class _Up> constexpr _Tp &&
# 257
get(pair< _Tp, _Up>  &&__p) noexcept 
# 258
{ return std::move((__p.first)); } 
# 260
template< class _Tp, class _Up> constexpr const _Tp &&
# 262
get(const pair< _Tp, _Up>  &&__p) noexcept 
# 263
{ return std::move((__p.first)); } 
# 265
template< class _Tp, class _Up> constexpr _Tp &
# 267
get(pair< _Up, _Tp>  &__p) noexcept 
# 268
{ return __p.second; } 
# 270
template< class _Tp, class _Up> constexpr const _Tp &
# 272
get(const pair< _Up, _Tp>  &__p) noexcept 
# 273
{ return __p.second; } 
# 275
template< class _Tp, class _Up> constexpr _Tp &&
# 277
get(pair< _Up, _Tp>  &&__p) noexcept 
# 278
{ return std::move((__p.second)); } 
# 280
template< class _Tp, class _Up> constexpr const _Tp &&
# 282
get(const pair< _Up, _Tp>  &&__p) noexcept 
# 283
{ return std::move((__p.second)); } 
# 288
template< class _Tp, class _Up = _Tp> inline _Tp 
# 291
exchange(_Tp &__obj, _Up &&__new_val) 
# 292
{ return std::__exchange(__obj, std::forward< _Up> (__new_val)); } 
# 298
template< size_t ..._Indexes> struct _Index_tuple { }; 
# 301
template< size_t _Num> 
# 302
struct _Build_index_tuple { 
# 312 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/utility" 3
using __type = _Index_tuple< __integer_pack(_Num)...> ; 
# 314
}; 
# 321
template< class _Tp, _Tp ..._Idx> 
# 322
struct integer_sequence { 
# 324
typedef _Tp value_type; 
# 325
static constexpr size_t size() noexcept { return sizeof...(_Idx); } 
# 326
}; 
# 329
template< class _Tp, _Tp _Num> using make_integer_sequence = integer_sequence< _Tp, __integer_pack(_Num)...> ; 
# 338
template< size_t ..._Idx> using index_sequence = integer_sequence< unsigned long, _Idx...> ; 
# 342
template< size_t _Num> using make_index_sequence = make_integer_sequence< unsigned long, _Num> ; 
# 346
template< class ..._Types> using index_sequence_for = make_index_sequence< sizeof...(_Types)> ; 
# 477 "/usr/tce/packages/gcc/gcc-11.2.1/rh/usr/include/c++/11/utility" 3
}
# 205 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 206
cudaLaunchKernel(const T *
# 207
func, dim3 
# 208
gridDim, dim3 
# 209
blockDim, void **
# 210
args, size_t 
# 211
sharedMem = 0, cudaStream_t 
# 212
stream = 0) 
# 214
{ 
# 215
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 216
} 
# 276 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class ...ExpTypes, class ...ActTypes> static inline cudaError_t 
# 277
cudaLaunchKernelEx(const cudaLaunchConfig_t *
# 278
config, void (*
# 279
kernel)(ExpTypes ...), ActTypes &&...
# 280
args) 
# 282
{ 
# 283
return [&](ExpTypes ...coercedArgs) { 
# 284
void *pArgs[] = {(&coercedArgs)...}; 
# 285
return ::cudaLaunchKernelExC(config, (const void *)(kernel), pArgs); 
# 286
} (std::forward< ActTypes> (args)...); 
# 287
} 
# 339 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 340
cudaLaunchCooperativeKernel(const T *
# 341
func, dim3 
# 342
gridDim, dim3 
# 343
blockDim, void **
# 344
args, size_t 
# 345
sharedMem = 0, cudaStream_t 
# 346
stream = 0) 
# 348
{ 
# 349
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 350
} 
# 383 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 384
event, unsigned 
# 385
flags) 
# 387
{ 
# 388
return ::cudaEventCreateWithFlags(event, flags); 
# 389
} 
# 448 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 449
ptr, size_t 
# 450
size, unsigned 
# 451
flags) 
# 453
{ 
# 454
return ::cudaHostAlloc(ptr, size, flags); 
# 455
} 
# 457
template< class T> static inline cudaError_t 
# 458
cudaHostAlloc(T **
# 459
ptr, size_t 
# 460
size, unsigned 
# 461
flags) 
# 463
{ 
# 464
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 465
} 
# 467
template< class T> static inline cudaError_t 
# 468
cudaHostGetDevicePointer(T **
# 469
pDevice, void *
# 470
pHost, unsigned 
# 471
flags) 
# 473
{ 
# 474
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 475
} 
# 577 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 578
cudaMallocManaged(T **
# 579
devPtr, size_t 
# 580
size, unsigned 
# 581
flags = 1) 
# 583
{ 
# 584
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 585
} 
# 667 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 668
cudaStreamAttachMemAsync(cudaStream_t 
# 669
stream, T *
# 670
devPtr, size_t 
# 671
length = 0, unsigned 
# 672
flags = 4) 
# 674
{ 
# 675
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 676
} 
# 678
template< class T> inline cudaError_t 
# 679
cudaMalloc(T **
# 680
devPtr, size_t 
# 681
size) 
# 683
{ 
# 684
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 685
} 
# 687
template< class T> static inline cudaError_t 
# 688
cudaMallocHost(T **
# 689
ptr, size_t 
# 690
size, unsigned 
# 691
flags = 0) 
# 693
{ 
# 694
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 695
} 
# 697
template< class T> static inline cudaError_t 
# 698
cudaMallocPitch(T **
# 699
devPtr, size_t *
# 700
pitch, size_t 
# 701
width, size_t 
# 702
height) 
# 704
{ 
# 705
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 706
} 
# 717 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
static inline cudaError_t cudaMallocAsync(void **
# 718
ptr, size_t 
# 719
size, cudaMemPool_t 
# 720
memPool, cudaStream_t 
# 721
stream) 
# 723
{ 
# 724
return ::cudaMallocFromPoolAsync(ptr, size, memPool, stream); 
# 725
} 
# 727
template< class T> static inline cudaError_t 
# 728
cudaMallocAsync(T **
# 729
ptr, size_t 
# 730
size, cudaMemPool_t 
# 731
memPool, cudaStream_t 
# 732
stream) 
# 734
{ 
# 735
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 736
} 
# 738
template< class T> static inline cudaError_t 
# 739
cudaMallocAsync(T **
# 740
ptr, size_t 
# 741
size, cudaStream_t 
# 742
stream) 
# 744
{ 
# 745
return ::cudaMallocAsync((void **)((void *)ptr), size, stream); 
# 746
} 
# 748
template< class T> static inline cudaError_t 
# 749
cudaMallocFromPoolAsync(T **
# 750
ptr, size_t 
# 751
size, cudaMemPool_t 
# 752
memPool, cudaStream_t 
# 753
stream) 
# 755
{ 
# 756
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 757
} 
# 796 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 797
cudaMemcpyToSymbol(const T &
# 798
symbol, const void *
# 799
src, size_t 
# 800
count, size_t 
# 801
offset = 0, cudaMemcpyKind 
# 802
kind = cudaMemcpyHostToDevice) 
# 804
{ 
# 805
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 806
} 
# 850 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 851
cudaMemcpyToSymbolAsync(const T &
# 852
symbol, const void *
# 853
src, size_t 
# 854
count, size_t 
# 855
offset = 0, cudaMemcpyKind 
# 856
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 857
stream = 0) 
# 859
{ 
# 860
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 861
} 
# 898 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 899
cudaMemcpyFromSymbol(void *
# 900
dst, const T &
# 901
symbol, size_t 
# 902
count, size_t 
# 903
offset = 0, cudaMemcpyKind 
# 904
kind = cudaMemcpyDeviceToHost) 
# 906
{ 
# 907
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 908
} 
# 952 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 953
cudaMemcpyFromSymbolAsync(void *
# 954
dst, const T &
# 955
symbol, size_t 
# 956
count, size_t 
# 957
offset = 0, cudaMemcpyKind 
# 958
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 959
stream = 0) 
# 961
{ 
# 962
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 963
} 
# 1021 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1022
cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t *
# 1023
pGraphNode, cudaGraph_t 
# 1024
graph, const cudaGraphNode_t *
# 1025
pDependencies, size_t 
# 1026
numDependencies, const T &
# 1027
symbol, const void *
# 1028
src, size_t 
# 1029
count, size_t 
# 1030
offset, cudaMemcpyKind 
# 1031
kind) 
# 1032
{ 
# 1033
return ::cudaGraphAddMemcpyNodeToSymbol(pGraphNode, graph, pDependencies, numDependencies, (const void *)(&symbol), src, count, offset, kind); 
# 1034
} 
# 1092 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1093
cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t *
# 1094
pGraphNode, cudaGraph_t 
# 1095
graph, const cudaGraphNode_t *
# 1096
pDependencies, size_t 
# 1097
numDependencies, void *
# 1098
dst, const T &
# 1099
symbol, size_t 
# 1100
count, size_t 
# 1101
offset, cudaMemcpyKind 
# 1102
kind) 
# 1103
{ 
# 1104
return ::cudaGraphAddMemcpyNodeFromSymbol(pGraphNode, graph, pDependencies, numDependencies, dst, (const void *)(&symbol), count, offset, kind); 
# 1105
} 
# 1143 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1144
cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t 
# 1145
node, const T &
# 1146
symbol, const void *
# 1147
src, size_t 
# 1148
count, size_t 
# 1149
offset, cudaMemcpyKind 
# 1150
kind) 
# 1151
{ 
# 1152
return ::cudaGraphMemcpyNodeSetParamsToSymbol(node, (const void *)(&symbol), src, count, offset, kind); 
# 1153
} 
# 1191 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1192
cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t 
# 1193
node, void *
# 1194
dst, const T &
# 1195
symbol, size_t 
# 1196
count, size_t 
# 1197
offset, cudaMemcpyKind 
# 1198
kind) 
# 1199
{ 
# 1200
return ::cudaGraphMemcpyNodeSetParamsFromSymbol(node, dst, (const void *)(&symbol), count, offset, kind); 
# 1201
} 
# 1249 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1250
cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t 
# 1251
hGraphExec, cudaGraphNode_t 
# 1252
node, const T &
# 1253
symbol, const void *
# 1254
src, size_t 
# 1255
count, size_t 
# 1256
offset, cudaMemcpyKind 
# 1257
kind) 
# 1258
{ 
# 1259
return ::cudaGraphExecMemcpyNodeSetParamsToSymbol(hGraphExec, node, (const void *)(&symbol), src, count, offset, kind); 
# 1260
} 
# 1308 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1309
cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t 
# 1310
hGraphExec, cudaGraphNode_t 
# 1311
node, void *
# 1312
dst, const T &
# 1313
symbol, size_t 
# 1314
count, size_t 
# 1315
offset, cudaMemcpyKind 
# 1316
kind) 
# 1317
{ 
# 1318
return ::cudaGraphExecMemcpyNodeSetParamsFromSymbol(hGraphExec, node, dst, (const void *)(&symbol), count, offset, kind); 
# 1319
} 
# 1347 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1348
cudaUserObjectCreate(cudaUserObject_t *
# 1349
object_out, T *
# 1350
objectToWrap, unsigned 
# 1351
initialRefcount, unsigned 
# 1352
flags) 
# 1353
{ 
# 1354
return ::cudaUserObjectCreate(object_out, objectToWrap, [](void *
# 1357
vpObj) { delete (reinterpret_cast< T *>(vpObj)); } , initialRefcount, flags); 
# 1360
} 
# 1362
template< class T> static inline cudaError_t 
# 1363
cudaUserObjectCreate(cudaUserObject_t *
# 1364
object_out, T *
# 1365
objectToWrap, unsigned 
# 1366
initialRefcount, cudaUserObjectFlags 
# 1367
flags) 
# 1368
{ 
# 1369
return cudaUserObjectCreate(object_out, objectToWrap, initialRefcount, (unsigned)flags); 
# 1370
} 
# 1397 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1398
cudaGetSymbolAddress(void **
# 1399
devPtr, const T &
# 1400
symbol) 
# 1402
{ 
# 1403
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 1404
} 
# 1429 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1430
cudaGetSymbolSize(size_t *
# 1431
size, const T &
# 1432
symbol) 
# 1434
{ 
# 1435
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 1436
} 
# 1473 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1474
__attribute((deprecated)) static inline cudaError_t cudaBindTexture(size_t *
# 1475
offset, const texture< T, dim, readMode>  &
# 1476
tex, const void *
# 1477
devPtr, const cudaChannelFormatDesc &
# 1478
desc, size_t 
# 1479
size = ((2147483647) * 2U) + 1U) 
# 1481 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
{ 
# 1482
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 1483
} 
# 1519 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1520
__attribute((deprecated)) static inline cudaError_t cudaBindTexture(size_t *
# 1521
offset, const texture< T, dim, readMode>  &
# 1522
tex, const void *
# 1523
devPtr, size_t 
# 1524
size = ((2147483647) * 2U) + 1U) 
# 1526 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
{ 
# 1527
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 1528
} 
# 1576 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1577
__attribute((deprecated)) static inline cudaError_t cudaBindTexture2D(size_t *
# 1578
offset, const texture< T, dim, readMode>  &
# 1579
tex, const void *
# 1580
devPtr, const cudaChannelFormatDesc &
# 1581
desc, size_t 
# 1582
width, size_t 
# 1583
height, size_t 
# 1584
pitch) 
# 1586
{ 
# 1587
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 1588
} 
# 1635 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1636
__attribute((deprecated)) static inline cudaError_t cudaBindTexture2D(size_t *
# 1637
offset, const texture< T, dim, readMode>  &
# 1638
tex, const void *
# 1639
devPtr, size_t 
# 1640
width, size_t 
# 1641
height, size_t 
# 1642
pitch) 
# 1644
{ 
# 1645
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
# 1646
} 
# 1678 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1679
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1680
tex, cudaArray_const_t 
# 1681
array, const cudaChannelFormatDesc &
# 1682
desc) 
# 1684
{ 
# 1685
return ::cudaBindTextureToArray(&tex, array, &desc); 
# 1686
} 
# 1717 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1718
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1719
tex, cudaArray_const_t 
# 1720
array) 
# 1722
{ 
# 1723
cudaChannelFormatDesc desc; 
# 1724
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1726
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 1727
} 
# 1759 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1760
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1761
tex, cudaMipmappedArray_const_t 
# 1762
mipmappedArray, const cudaChannelFormatDesc &
# 1763
desc) 
# 1765
{ 
# 1766
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
# 1767
} 
# 1798 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1799
__attribute((deprecated)) static inline cudaError_t cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1800
tex, cudaMipmappedArray_const_t 
# 1801
mipmappedArray) 
# 1803
{ 
# 1804
cudaChannelFormatDesc desc; 
# 1805
cudaArray_t levelArray; 
# 1806
cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
# 1808
if (err != (cudaSuccess)) { 
# 1809
return err; 
# 1810
}  
# 1811
err = ::cudaGetChannelDesc(&desc, levelArray); 
# 1813
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
# 1814
} 
# 1841 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1842
__attribute((deprecated)) static inline cudaError_t cudaUnbindTexture(const texture< T, dim, readMode>  &
# 1843
tex) 
# 1845
{ 
# 1846
return ::cudaUnbindTexture(&tex); 
# 1847
} 
# 1877 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> 
# 1878
__attribute((deprecated)) static inline cudaError_t cudaGetTextureAlignmentOffset(size_t *
# 1879
offset, const texture< T, dim, readMode>  &
# 1880
tex) 
# 1882
{ 
# 1883
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
# 1884
} 
# 1929 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1930
cudaFuncSetCacheConfig(T *
# 1931
func, cudaFuncCache 
# 1932
cacheConfig) 
# 1934
{ 
# 1935
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1936
} 
# 1938
template< class T> static inline cudaError_t 
# 1939
cudaFuncSetSharedMemConfig(T *
# 1940
func, cudaSharedMemConfig 
# 1941
config) 
# 1943
{ 
# 1944
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1945
} 
# 1977 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1978
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1979
numBlocks, T 
# 1980
func, int 
# 1981
blockSize, size_t 
# 1982
dynamicSMemSize) 
# 1983
{ 
# 1984
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1985
} 
# 2029 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 2030
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 2031
numBlocks, T 
# 2032
func, int 
# 2033
blockSize, size_t 
# 2034
dynamicSMemSize, unsigned 
# 2035
flags) 
# 2036
{ 
# 2037
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 2038
} 
# 2043
class __cudaOccupancyB2DHelper { 
# 2044
size_t n; 
# 2046
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 2047
size_t operator()(int) 
# 2048
{ 
# 2049
return n; 
# 2050
} 
# 2051
}; 
# 2099 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 2100
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 2101
minGridSize, int *
# 2102
blockSize, T 
# 2103
func, UnaryFunction 
# 2104
blockSizeToDynamicSMemSize, int 
# 2105
blockSizeLimit = 0, unsigned 
# 2106
flags = 0) 
# 2107
{ 
# 2108
cudaError_t status; 
# 2111
int device; 
# 2112
cudaFuncAttributes attr; 
# 2115
int maxThreadsPerMultiProcessor; 
# 2116
int warpSize; 
# 2117
int devMaxThreadsPerBlock; 
# 2118
int multiProcessorCount; 
# 2119
int funcMaxThreadsPerBlock; 
# 2120
int occupancyLimit; 
# 2121
int granularity; 
# 2124
int maxBlockSize = 0; 
# 2125
int numBlocks = 0; 
# 2126
int maxOccupancy = 0; 
# 2129
int blockSizeToTryAligned; 
# 2130
int blockSizeToTry; 
# 2131
int blockSizeLimitAligned; 
# 2132
int occupancyInBlocks; 
# 2133
int occupancyInThreads; 
# 2134
size_t dynamicSMemSize; 
# 2140
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 2141
return cudaErrorInvalidValue; 
# 2142
}  
# 2148
status = ::cudaGetDevice(&device); 
# 2149
if (status != (cudaSuccess)) { 
# 2150
return status; 
# 2151
}  
# 2153
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 2157
if (status != (cudaSuccess)) { 
# 2158
return status; 
# 2159
}  
# 2161
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 2165
if (status != (cudaSuccess)) { 
# 2166
return status; 
# 2167
}  
# 2169
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 2173
if (status != (cudaSuccess)) { 
# 2174
return status; 
# 2175
}  
# 2177
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 2181
if (status != (cudaSuccess)) { 
# 2182
return status; 
# 2183
}  
# 2185
status = cudaFuncGetAttributes(&attr, func); 
# 2186
if (status != (cudaSuccess)) { 
# 2187
return status; 
# 2188
}  
# 2190
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 2196
occupancyLimit = maxThreadsPerMultiProcessor; 
# 2197
granularity = warpSize; 
# 2199
if (blockSizeLimit == 0) { 
# 2200
blockSizeLimit = devMaxThreadsPerBlock; 
# 2201
}  
# 2203
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 2204
blockSizeLimit = devMaxThreadsPerBlock; 
# 2205
}  
# 2207
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 2208
blockSizeLimit = funcMaxThreadsPerBlock; 
# 2209
}  
# 2211
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 2213
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 2217
if (blockSizeLimit < blockSizeToTryAligned) { 
# 2218
blockSizeToTry = blockSizeLimit; 
# 2219
} else { 
# 2220
blockSizeToTry = blockSizeToTryAligned; 
# 2221
}  
# 2223
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 2225
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 2232
if (status != (cudaSuccess)) { 
# 2233
return status; 
# 2234
}  
# 2236
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 2238
if (occupancyInThreads > maxOccupancy) { 
# 2239
maxBlockSize = blockSizeToTry; 
# 2240
numBlocks = occupancyInBlocks; 
# 2241
maxOccupancy = occupancyInThreads; 
# 2242
}  
# 2246
if (occupancyLimit == maxOccupancy) { 
# 2247
break; 
# 2248
}  
# 2249
}  
# 2257
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 2258
(*blockSize) = maxBlockSize; 
# 2260
return status; 
# 2261
} 
# 2295 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 2296
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 2297
minGridSize, int *
# 2298
blockSize, T 
# 2299
func, UnaryFunction 
# 2300
blockSizeToDynamicSMemSize, int 
# 2301
blockSizeLimit = 0) 
# 2302
{ 
# 2303
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 2304
} 
# 2341 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2342
cudaOccupancyMaxPotentialBlockSize(int *
# 2343
minGridSize, int *
# 2344
blockSize, T 
# 2345
func, size_t 
# 2346
dynamicSMemSize = 0, int 
# 2347
blockSizeLimit = 0) 
# 2348
{ 
# 2349
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 2350
} 
# 2379 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2380
cudaOccupancyAvailableDynamicSMemPerBlock(size_t *
# 2381
dynamicSmemSize, T 
# 2382
func, int 
# 2383
numBlocks, int 
# 2384
blockSize) 
# 2385
{ 
# 2386
return ::cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, (const void *)func, numBlocks, blockSize); 
# 2387
} 
# 2438 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2439
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 2440
minGridSize, int *
# 2441
blockSize, T 
# 2442
func, size_t 
# 2443
dynamicSMemSize = 0, int 
# 2444
blockSizeLimit = 0, unsigned 
# 2445
flags = 0) 
# 2446
{ 
# 2447
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 2448
} 
# 2482 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2483
cudaOccupancyMaxPotentialClusterSize(int *
# 2484
clusterSize, T *
# 2485
func, const cudaLaunchConfig_t *
# 2486
config) 
# 2487
{ 
# 2488
return ::cudaOccupancyMaxPotentialClusterSize(clusterSize, (const void *)func, config); 
# 2489
} 
# 2525 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2526
cudaOccupancyMaxActiveClusters(int *
# 2527
numClusters, T *
# 2528
func, const cudaLaunchConfig_t *
# 2529
config) 
# 2530
{ 
# 2531
return ::cudaOccupancyMaxActiveClusters(numClusters, (const void *)func, config); 
# 2532
} 
# 2565 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 2566
cudaFuncGetAttributes(cudaFuncAttributes *
# 2567
attr, T *
# 2568
entry) 
# 2570
{ 
# 2571
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 2572
} 
# 2627 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2628
cudaFuncSetAttribute(T *
# 2629
entry, cudaFuncAttribute 
# 2630
attr, int 
# 2631
value) 
# 2633
{ 
# 2634
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 2635
} 
# 2659 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim> 
# 2660
__attribute((deprecated)) static inline cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
# 2661
surf, cudaArray_const_t 
# 2662
array, const cudaChannelFormatDesc &
# 2663
desc) 
# 2665
{ 
# 2666
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
# 2667
} 
# 2690 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim> 
# 2691
__attribute((deprecated)) static inline cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
# 2692
surf, cudaArray_const_t 
# 2693
array) 
# 2695
{ 
# 2696
cudaChannelFormatDesc desc; 
# 2697
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 2699
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 2700
} 
# 2711 "/usr/tce/packages/cuda/cuda-11.8.0/nvidia/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
#pragma GCC diagnostic pop
# 64 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
# 66
const char *info_simulate = ("INFO:simulate[GNU]"); 
# 336 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((11 / 10000000) % 10)), (('0') + ((11 / 1000000) % 10)), (('0') + ((11 / 100000) % 10)), (('0') + ((11 / 10000) % 10)), (('0') + ((11 / 1000) % 10)), (('0') + ((11 / 100) % 10)), (('0') + ((11 / 10) % 10)), (('0') + (11 % 10)), '.', (('0') + ((8 / 10000000) % 10)), (('0') + ((8 / 1000000) % 10)), (('0') + ((8 / 100000) % 10)), (('0') + ((8 / 10000) % 10)), (('0') + ((8 / 1000) % 10)), (('0') + ((8 / 100) % 10)), (('0') + ((8 / 10) % 10)), (('0') + (8 % 10)), '.', (('0') + ((89 / 10000000) % 10)), (('0') + ((89 / 1000000) % 10)), (('0') + ((89 / 100000) % 10)), (('0') + ((89 / 10000) % 10)), (('0') + ((89 / 1000) % 10)), (('0') + ((89 / 100) % 10)), (('0') + ((89 / 10) % 10)), (('0') + (89 % 10)), ']', '\000'}; 
# 365 "CMakeCUDACompilerId.cu"
const char info_simulate_version[] = {'I', 'N', 'F', 'O', ':', 's', 'i', 'm', 'u', 'l', 'a', 't', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((11 / 10000000) % 10)), (('0') + ((11 / 1000000) % 10)), (('0') + ((11 / 100000) % 10)), (('0') + ((11 / 10000) % 10)), (('0') + ((11 / 1000) % 10)), (('0') + ((11 / 100) % 10)), (('0') + ((11 / 10) % 10)), (('0') + (11 % 10)), '.', (('0') + ((2 / 10000000) % 10)), (('0') + ((2 / 1000000) % 10)), (('0') + ((2 / 100000) % 10)), (('0') + ((2 / 10000) % 10)), (('0') + ((2 / 1000) % 10)), (('0') + ((2 / 100) % 10)), (('0') + ((2 / 10) % 10)), (('0') + (2 % 10)), ']', '\000'}; 
# 385
const char *info_platform = ("INFO:platform[Linux]"); 
# 386
const char *info_arch = ("INFO:arch[]"); 
# 390
const char *info_language_standard_default = ("INFO:standard_default[14]"); 
# 406
const char *info_language_extensions_default = ("INFO:extensions_default[OFF]"); 
# 417
int main(int argc, char *argv[]) 
# 418
{ 
# 419
int require = 0; 
# 420
require += (info_compiler[argc]); 
# 421
require += (info_platform[argc]); 
# 423
require += (info_version[argc]); 
# 426
require += (info_simulate[argc]); 
# 429
require += (info_simulate_version[argc]); 
# 431
require += (info_language_standard_default[argc]); 
# 432
require += (info_language_extensions_default[argc]); 
# 433
(void)argv; 
# 434
return require; 
# 435
} 

# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__4a089fc0_22_CMakeCUDACompilerId_cu_bd57c623
#ifdef _NV_ANON_NAMESPACE
#endif
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
