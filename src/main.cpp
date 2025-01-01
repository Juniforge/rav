#include <iostream>
#include "interpreter.h"

int main() {
    std::cout << "Welcome to Rav!" << std::endl;

    Interpreter interpreter;

    std::string code = "print('Hello, Rav!')";
    interpreter.run(code);

    return 0;
}