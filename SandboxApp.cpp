#include "SandboxApp.h"

#include "Poseidon/Poseidon.h"

void SandboxApp::run() {
    while(true) {
        PS_CORE_INFO("TestLog");
    }
}

poseidon::Application *poseidon::createApplication(int argc, char **argv) {
    return new SandboxApp();
}

poseidon::Logger *poseidon::createClientLogger() {
    return new poseidon::SpdConsoleLogger("SandboxApp");
}

poseidon::Logger *poseidon::createCoreLogger() {
    return new poseidon::SpdConsoleLogger("CORE");
}