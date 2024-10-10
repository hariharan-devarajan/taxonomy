# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/hdf5"
  "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/hdf5/stamp/${subDir}")
endforeach()
