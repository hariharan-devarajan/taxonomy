
cmake_minimum_required(VERSION 3.15)

set(command "/usr/tce/packages/cmake/cmake-3.23.1/bin/cmake;-DCMAKE_C_COMPILER:STRING=/usr/tce/packages/gcc/gcc-11.2.1/bin/gcc;-DCMAKE_C_FLAGS:STRING=-g -finstrument-functions -Wl,-E -fvisibility=default -L/usr/tce/packages/cuda/cuda-11.8.0/lib64;-DCMAKE_CXX_COMPILER:STRING=/usr/tce/packages/gcc/gcc-11.2.1/bin/g++;-DCMAKE_CXX_STANDARD:STRING=17;-DCMAKE_CXX_FLAGS:STRING=-Wno-deprecated-declarations -Wall -Wextra;-DCMAKE_CUDA_COMPILER:STRING=/usr/tce/packages/cuda/cuda-11.8.0/bin/nvcc;-DCMAKE_CUDA_STANDARD:STRING=17;-DCMAKE_CUDA_HOST_COMPILER:STRING=/usr/tce/packages/gcc/gcc-11.2.1/bin/g++;-DCMAKE_CUDA_ARCHITECTURES:STRING=70;-DCMAKE_HIP_ARCHITECTURES:STRING=;-DAMDGPU_TARGETS:STRING=;-DGPU_TARGETS:STRING=;-DCMAKE_SHARED_LINKER_FLAGS:STRING=-fuse-ld=gold;-DCMAKE_EXE_LINKER_FLAGS:STRING=-fuse-ld=gold;-D;BUILD_SHARED_LIBS=ON;-D;CMAKE_INSTALL_PREFIX=/usr/workspace/haridev/iopp/software/lbann-install/install;-D;CMAKE_BUILD_TYPE=Release;-D;CMAKE_POSITION_INDEPENDENT_CODE=ON;-D;CMAKE_INTERPROCEDURAL_OPTIMIZATION=OFF;-D;CMAKE_INSTALL_RPATH_USE_LINK_PATH=OFF;-D;CMAKE_SKIP_RPATH=OFF;-D;CMAKE_BUILD_RPATH_USE_ORIGIN=OFF;-D;CMAKE_BUILD_WITH_INSTALL_RPATH=OFF;-D;CMAKE_INSTALL_REMOVE_ENVIRONMENT_RPATH=OFF;-D;CMAKE_SKIP_BUILD_RPATH=OFF;-D;CMAKE_SKIP_INSTALL_RPATH=OFF;-DAluminum_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/aluminum;-DCMAKE_BUILD_TYPE=Release;-DCMAKE_CXX_FLAGS_RELEASE=-O3 -DNDEBUG -g3;-DCMAKE_EXE_LINKER_FLAGS=-fuse-ld=gold;-DCMAKE_EXPORT_COMPILE_COMMANDS=ON;-DCMAKE_PREFIX_PATH=\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/aluminum\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/dihydrogen\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/hydrogen\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/catch2\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/clara\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/cnpy\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/conduit\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/hdf5\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/opencv\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/jpeg-turbo\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/cereal\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/protobuf\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/spdlog\;/usr/workspace/haridev/iopp/software/lbann-install/install_deps/zstr;-DCMAKE_SHARED_LINKER_FLAGS=-fuse-ld=gold;-DCNPY_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/cnpy;-DCUDNN_DIR=/usr/workspace/brain/cudnn/cudnn-8.9.7/cuda_11_ppc64le;-DCatch2_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/catch2;-DClara_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/clara;-DConduit_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/conduit;-DDiHydrogen_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/dihydrogen;-DHDF5_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/hdf5;-DHydrogen_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/hydrogen;-DJPEG-TURBO_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/jpeg-turbo;-DLBANN_DATATYPE=float;-DLBANN_WARNINGS_AS_ERRORS=OFF;-DLBANN_WITH_CALIPER=OFF;-DLBANN_WITH_DISTCONV=ON;-DLBANN_WITH_NVPROF=ON;-DLBANN_WITH_TBINF=OFF;-DLBANN_WITH_UNIT_TESTING=ON;-DOpenCV_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/opencv;-Dcereal_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/cereal;-DcuTENSOR_DIR=/usr/workspace/brain/cutensor/cutensor-1.7.0.1/libcutensor-linux-ppc64le-1.7.0.1-archive;-Dprotobuf_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/protobuf;-Dspdlog_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/spdlog;-Dzstr_ROOT=/usr/workspace/haridev/iopp/software/lbann-install/install_deps/zstr;-GNinja;/usr/workspace/haridev/iopp/software/lbann")
set(log_merged "")
set(log_output_on_failure "")
set(stdout_log "/usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp/LBANN-configure-out.log")
set(stderr_log "/usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp/LBANN-configure-err.log")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "${stdout_log}"
  ERROR_FILE "${stderr_log}"
  )
macro(read_up_to_max_size log_file output_var)
  file(SIZE ${log_file} determined_size)
  set(max_size 10240)
  if (determined_size GREATER max_size)
    math(EXPR seek_position "${determined_size} - ${max_size}")
    file(READ ${log_file} ${output_var} OFFSET ${seek_position})
    set(${output_var} "...skipping to end...\n${${output_var}}")
  else()
    file(READ ${log_file} ${output_var})
  endif()
endmacro()
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  if (${log_merged})
    set(msg "${msg}\nSee also\n  ${stderr_log}")
  else()
    set(msg "${msg}\nSee also\n  /usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp/LBANN-configure-*.log")
  endif()
  if (${log_output_on_failure})
    message(SEND_ERROR "${msg}")
    if (${log_merged})
      read_up_to_max_size("${stderr_log}" error_log_contents)
      message(STATUS "Log output is:\n${error_log_contents}")
    else()
      read_up_to_max_size("${stdout_log}" out_log_contents)
      read_up_to_max_size("${stderr_log}" err_log_contents)
      message(STATUS "stdout output is:\n${out_log_contents}")
      message(STATUS "stderr output is:\n${err_log_contents}")
    endif()
    message(FATAL_ERROR "Stopping after outputting logs.")
  else()
    message(FATAL_ERROR "${msg}")
  endif()
else()
  if(NOT "Ninja" MATCHES "Ninja")
    set(msg "LBANN configure command succeeded.  See also /usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp/LBANN-configure-*.log")
    message(STATUS "${msg}")
  endif()
endif()