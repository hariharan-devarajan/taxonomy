# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann"
  "/usr/workspace/haridev/iopp/software/lbann-install/lbann/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install"
  "/usr/workspace/haridev/iopp/software/lbann-install/lbann/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/lbann/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/lbann/stamp/${subDir}")
endforeach()
