#pragma once

#define AL_VERSION_MAJOR "1"
#define AL_VERSION_MINOR "4"
#define AL_VERSION_PATCH "2"
#define AL_VERSION "1.4.2"
#define AL_GIT_VERSION "53f05f4"

/* #undef AL_HAS_CALIPER */
#define AL_HAS_CUDA
/* #undef AL_HAS_MPI_CUDA */
#define AL_HAS_HOST_TRANSFER
#define AL_HAS_NCCL
/* #undef AL_HAS_ROCM */

#if defined AL_HAS_CALIPER
#define AL_CALI_MARK_SCOPE(name) CALI_CXX_MARK_SCOPE(name)
#else
#define AL_CALI_MARK_SCOPE(...) ((void) 0)
#endif

#if defined AL_HAS_ROCM
#define AL_GPU_RUNTIME_PREFIX hip
#define AL_GPU_DRV_SUCCESS hipSuccess
#elif defined AL_HAS_CUDA
#define AL_GPU_RUNTIME_PREFIX cuda
#define AL_GPU_DRV_SUCCESS CUDA_SUCCESS
#endif

// The layers of indirection begin
#if defined AL_GPU_RUNTIME_PREFIX
#define AL_ADD_PREFIX_(prefix, rest) prefix##rest
#define AL_ADD_PREFIX(prefix, rest) AL_ADD_PREFIX_(prefix, rest)
#define AL_GPU_RT(symb) AL_ADD_PREFIX(AL_GPU_RUNTIME_PREFIX, symb)

// Functions
#define AlGpuDeviceGetAttribute AL_GPU_RT(DeviceGetAttribute)
#define AlGpuDeviceGetStreamPriorityRange \
    AL_GPU_RT(DeviceGetStreamPriorityRange)
#define AlGpuDeviceSynchronize AL_GPU_RT(DeviceSynchronize)
#define AlGpuEventCreate AL_GPU_RT(EventCreate)
#define AlGpuEventCreateWithFlags AL_GPU_RT(EventCreateWithFlags)
#define AlGpuEventDestroy AL_GPU_RT(EventDestroy)
#define AlGpuEventElapsedTime AL_GPU_RT(EventElapsedTime)
#define AlGpuEventQuery AL_GPU_RT(EventQuery)
#define AlGpuEventRecord AL_GPU_RT(EventRecord)
#define AlGpuEventSynchronize AL_GPU_RT(EventSynchronize)
#define AlGpuGetDevice AL_GPU_RT(GetDevice)
#define AlGpuGetDeviceCount AL_GPU_RT(GetDeviceCount)
#define AlGpuGetErrorString AL_GPU_RT(GetErrorString)
#define AlGpuHostGetDevicePointer AL_GPU_RT(HostGetDevicePointer)
#define AlGpuHostRegister AL_GPU_RT(HostRegister)
#define AlGpuHostRegisterDefault AL_GPU_RT(HostRegisterDefault)
#define AlGpuHostUnregister AL_GPU_RT(HostUnregister)
#define AlGpuMemcpyAsync AL_GPU_RT(MemcpyAsync)
#define AlGpuSetDevice AL_GPU_RT(SetDevice)
#define AlGpuStreamCreate AL_GPU_RT(StreamCreate)
#define AlGpuStreamCreateWithPriority AL_GPU_RT(StreamCreateWithPriority)
#define AlGpuStreamDestroy AL_GPU_RT(StreamDestroy)
#define AlGpuStreamSynchronize AL_GPU_RT(StreamSynchronize)
#define AlGpuStreamWaitEvent AL_GPU_RT(StreamWaitEvent)

// Types
#define AlGpuMemcpyKind AL_GPU_RT(MemcpyKind)
#define AlGpuStream_t AL_GPU_RT(Stream_t)
#define AlGpuEvent_t AL_GPU_RT(Event_t)

// Enum values
#define AlGpuErrorNotReady AL_GPU_RT(ErrorNotReady)
#define AlGpuEventDisableTiming AL_GPU_RT(EventDisableTiming)
#define AlGpuMemcpyDefault AL_GPU_RT(MemcpyDefault)
#define AlGpuMemcpyDeviceToDevice AL_GPU_RT(MemcpyDeviceToDevice)
#define AlGpuMemcpyDeviceToHost AL_GPU_RT(MemcpyDeviceToHost)
#define AlGpuMemcpyHostToDevice AL_GPU_RT(MemcpyHostToDevice)
#define AlGpuStreamDefault AL_GPU_RT(StreamDefault)
#define AlGpuSuccess AL_GPU_RT(Success)

// Special APIs
#if defined AL_HAS_ROCM
#define AlGpuFreeHost hipHostFree
#define AlGpuMallocHost hipHostMalloc

#include <hip/hip_version.h>
#if HIP_VERSION < 50600000
#define AlGpuDefaultEventFlags hipEventDefault
#define AlGpuNoTimingEventFlags hipEventDisableTiming
#else
#define AlGpuDefaultEventFlags hipEventDisableSystemFence
#define AlGpuNoTimingEventFlags hipEventDisableTiming | hipEventDisableSystemFence
#endif

#elif defined AL_HAS_CUDA
#define AlGpuFreeHost cudaFreeHost
#define AlGpuMallocHost cudaMallocHost

#define AlGpuDefaultEventFlags cudaEventDefault
#define AlGpuNoTimingEventFlags cudaEventDisableTiming
#endif
#endif  // defined AL_GPU_RUNTIME_PREFIX

/* Do not change this (POSIX requires it be 16). Includes trailing null. */
#define AL_MAX_THREAD_NAME_LEN 16

#ifdef AL_HAS_MPI_CUDA
/* #undef AL_HAS_MPI_CUDA_RMA */
#endif

/** Only build tests with a limited number of datatypes. */
/* #undef AL_LIMIT_TEST_DATATYPES */

/** Enable various sanity checks, generally light-weight. */
/* #undef AL_DEBUG */
/* #undef AL_DEBUG_HANG_CHECK */
#define AL_SIGNAL_HANDLER

#define AL_HAS_PROF
#define AL_HAS_NVPROF
/* #undef AL_HAS_ROCTRACER */

/** Whether to support multiple threads calling Aluminum concurrently. */
/* #undef AL_THREAD_MULTIPLE */

/* #undef AL_TRACE */

/* #undef AL_MPI_SERIALIZE */

/* #undef AL_DISABLE_BACKGROUND_STREAMS */

#define AL_USE_HWLOC

/** Whether we built with an MPI that supports large counts. */
/* #undef AL_HAS_LARGE_COUNT_MPI */
