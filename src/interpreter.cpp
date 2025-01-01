#include "interpreter.h"
#include <iostream>

Interpreter::Interpreter() {
}

Interpreter::~Interpreter() {
}

void Interpreter::run(const std::string& code) {
    std::cout << "Running code: " << code << std::endl;
}