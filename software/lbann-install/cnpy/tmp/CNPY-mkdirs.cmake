# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/cnpy"
  "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/cnpy/stamp/${subDir}")
endforeach()
