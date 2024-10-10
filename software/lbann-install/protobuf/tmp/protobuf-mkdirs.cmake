# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/protobuf"
  "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/protobuf/stamp/${subDir}")
endforeach()
