# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/catch2/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/catch2/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/catch2"
  "/usr/workspace/haridev/iopp/software/lbann-install/catch2/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/catch2/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/catch2/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/catch2/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/catch2/stamp/${subDir}")
endforeach()
