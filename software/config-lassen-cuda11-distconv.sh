export INSTALL_TOP=./install_deps

: "${CUDNN_HOME:=/usr/workspace/brain/cudnn/cudnn-8.9.7/cuda_11_ppc64le}"
: "${LBANN_HOME:=/usr/workspace/haridev/iopp/software/lbann}"
#: "${HALF_HOME:=$HOME/apps/lassen/include/half}"

typeset -TU CMAKE_PREFIX_PATH cmake_prefix_path
cmake_prefix_path=(
    ${INSTALL_TOP}/catch2
    ${INSTALL_TOP}/cereal
    ${INSTALL_TOP}/clara
    ${INSTALL_TOP}/cnpy
    ${INSTALL_TOP}/conduit
    ${INSTALL_TOP}/hdf5
    ${INSTALL_TOP}/jpeg-turbo
    ${INSTALL_TOP}/opencv
    ${INSTALL_TOP}/protobuf
    ${INSTALL_TOP}/spdlog
    ${INSTALL_TOP}/zstr
    ${INSTALL_TOP}/nccl
#    ${INSTALL_TOP}/adiak
#    ${INSTALL_TOP}/caliper
    ${INSTALL_TOP}/openblas
    ${CUDNN_HOME}
    $cmake_prefix_path)

cmake \
    -G Ninja \
    -S "${LBANN_HOME}/scripts/superbuild" \
    -B . \
    \
    -D CMAKE_BUILD_TYPE=Release \
    -D CMAKE_INSTALL_PREFIX=${INSTALL_TOP} \
    \
    -D CMAKE_C_COMPILER=$(command -v gcc) \
    -D CMAKE_CXX_COMPILER=$(command -v g++) \
    -D CMAKE_Fortran_COMPILER=$(command -v gfortran) \
    -D CMAKE_CUDA_HOST_COMPILER=$(command -v g++) \
    -D CMAKE_C_FLAGS="-g -finstrument-functions -Wl,-E -fvisibility=default -L/usr/tce/packages/cuda/cuda-11.8.0/lib64" \
    -D CMAKE_CXX_FLAGS="-g -finstrument-functions -Wl,-E -fvisibility=default -L/usr/tce/packages/cuda/cuda-11.8.0/lib64" \
    -D CMAKE_SHARED_LINKER_FLAGS="-fuse-ld=gold" \
    -D CMAKE_EXE_LINKER_FLAGS="-fuse-ld=gold" \
    \
    -D CMAKE_POSITION_INDEPENDENT_CODE=ON \
    \
    -D LBANN_SB_DEFAULT_INSTALL_PATH_STRATEGY="PKG_LC" \
    -D LBANN_SB_DEFAULT_CUDA_OPTS=ON \
    \
    -D CMAKE_CUDA_ARCHITECTURES=70 \
    -D CMAKE_CXX_STANDARD=17 \
    -D CMAKE_CUDA_STANDARD=17 \
    \
    -D LBANN_SB_BUILD_Catch2=ON \
    -D LBANN_SB_Catch2_TAG=devel \
    \
    -D LBANN_SB_BUILD_cereal=ON \
    -D LBANN_SB_BUILD_Clara=ON \
    -D LBANN_SB_BUILD_CNPY=ON \
    -D LBANN_SB_BUILD_Conduit=ON \
    -D LBANN_SB_BUILD_HDF5=ON \
    -D LBANN_SB_BUILD_JPEG-TURBO=ON \
    -D LBANN_SB_BUILD_OpenCV=ON \
    -D LBANN_SB_BUILD_protobuf=ON \
    -D LBANN_SB_BUILD_spdlog=ON \
    -D LBANN_SB_BUILD_zstr=ON \
    \
    -D LBANN_SB_BUILD_adiak=OFF \
    \
    -D LBANN_SB_BUILD_Caliper=OFF \
    \
    -D LBANN_SB_BUILD_NCCL=ON \
    \
    -D LBANN_SB_BUILD_Aluminum=ON \
    -D LBANN_SB_FWD_Aluminum_ALUMINUM_ENABLE_NCCL=ON \
    -D LBANN_SB_FWD_Aluminum_ALUMINUM_ENABLE_TESTS=OFF \
    -D LBANN_SB_FWD_Aluminum_ALUMINUM_ENABLE_BENCHMARKS=OFF \
    -D LBANN_SB_FWD_Aluminum_ALUMINUM_ENABLE_THREAD_MULTIPLE=OFF \
    -D LBANN_SB_FWD_Aluminum_ALUMINUM_ENABLE_NVPROF=ON \
    \
    -D LBANN_SB_BUILD_Hydrogen=ON \
    -D LBANN_SB_Hydrogen_CXX_FLAGS="-Wno-deprecated-declarations" \
    -D LBANN_SB_FWD_Hydrogen_CMAKE_CXX_FLAGS_RELEASE="-O3 -DNDEBUG -g3" \
    -D LBANN_SB_FWD_Hydrogen_Hydrogen_ENABLE_UNIT_TESTS=OFF \
    -D LBANN_SB_FWD_Hydrogen_Hydrogen_ENABLE_TESTING=OFF \
    -D LBANN_SB_FWD_Hydrogen_Hydrogen_ENABLE_HALF=OFF \
    \
    -D LBANN_SB_BUILD_DiHydrogen=ON \
    -D LBANN_SB_FWD_DiHydrogen_CMAKE_CXX_FLAGS="" \
    -D LBANN_SB_FWD_DiHydrogen_CMAKE_CXX_FLAGS_RELEASE="-Og -DNDEBUG -g3" \
    -D LBANN_SB_FWD_DiHydrogen_H2_ENABLE_DISTCONV_LEGACY=ON \
    -D LBANN_SB_FWD_DiHydrogen_CUDNN_DIR="${CUDNN_HOME}" \
    \
    -D LBANN_SB_BUILD_LBANN=ON \
    -D LBANN_SB_LBANN_PREFIX="${PWD}/install" \
    -D LBANN_SB_LBANN_SOURCE_DIR="${LBANN_HOME}" \
    -D LBANN_SB_LBANN_CXX_FLAGS="-Wno-deprecated-declarations -Wall -Wextra" \
    -D LBANN_SB_FWD_LBANN_CMAKE_CXX_FLAGS_RELEASE="-O3 -DNDEBUG -g3" \
    -D LBANN_SB_FWD_LBANN_CMAKE_EXPORT_COMPILE_COMMANDS=ON \
    -D LBANN_SB_LBANN_BUILD_SHARED_LIBS=ON \
    -D LBANN_SB_FWD_LBANN_LBANN_WITH_DISTCONV=ON \
    -D LBANN_SB_FWD_LBANN_LBANN_WITH_TBINF=OFF \
    -D LBANN_SB_FWD_LBANN_LBANN_WITH_UNIT_TESTING=ON \
    -D LBANN_SB_FWD_LBANN_LBANN_DATATYPE=float \
    -D LBANN_SB_FWD_LBANN_CUDNN_DIR="${CUDNN_HOME}" \
    -D LBANN_SB_FWD_LBANN_cuTENSOR_DIR=/usr/workspace/brain/cutensor/cutensor-1.7.0.1/libcutensor-linux-ppc64le-1.7.0.1-archive \
    -D LBANN_SB_FWD_LBANN_LBANN_WITH_CALIPER=OFF \
    -D LBANN_SB_FWD_LBANN_LBANN_WITH_NVPROF=ON \
    -D LBANN_SB_FWD_LBANN_CMAKE_BUILD_TYPE=Release \
    -D LBANN_SB_FWD_LBANN_CMAKE_EXE_LINKER_FLAGS="-fuse-ld=gold" \
    -D LBANN_SB_FWD_LBANN_CMAKE_SHARED_LINKER_FLAGS="-fuse-ld=gold" \
