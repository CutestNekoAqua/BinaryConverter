cmake_minimum_required(VERSION 3.9)

# set the project name
project(BinaryConverter VERSION 1.0)

file(GLOB_RECURSE sources      BinaryToHeyExE/*.cpp BinaryToHeyExE/*.h)

add_executable(BinaryConverter ${sources})

install(TARGETS BinaryConverter DESTINATION build)

# now comes everything we need, to create a package
# there are a lot more variables you can set, and some
# you need to set for some package types, but we want to
# be minimal here
set(CPACK_PACKAGE_NAME "BinaryConverter")
set(CPACK_PACKAGE_VERSION "1.0.0")

# we don't want to split our program up into several things
set(CPACK_MONOLITHIC_INSTALL 1)

# This must be last
include(CPack)
