#include <iostream>

#include "SandboxApp.h"

void SandboxApp::run() {
    std::cout << "Running sandbox app!" << std::endl;
}

poseidon::Application *poseidon::createApplication(int argc, char **argv)
{
    return new SandboxApp();
}