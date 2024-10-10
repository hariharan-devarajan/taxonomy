# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/aluminum"
  "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/aluminum/stamp/${subDir}")
endforeach()
