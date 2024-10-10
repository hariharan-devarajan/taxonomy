# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/dihydrogen"
  "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/dihydrogen/stamp/${subDir}")
endforeach()
