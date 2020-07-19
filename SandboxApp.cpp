#include "SandboxApp.h"

#include "Poseidon/Poseidon.h"

#include <iostream>

SandboxApp::SandboxApp() : poseidon::Application(1920, 1080, "SandboxApp") {
    PS_APP_INFO("Creating sandbox app.");
}

poseidon::Application *poseidon::createApplication(int argc, char **argv) {
    return new SandboxApp();
}