cmake_minimum_required(VERSION 3.16)
project(poseidon_sandbox)

set(CMAKE_CXX_STANDARD 20)

find_package(Poseidon REQUIRED)

add_executable(poseidon_sandbox
        SandboxApp.h
        SandboxApp.cpp)

target_link_libraries(poseidon_sandbox Poseidon::core Poseidon::gui)