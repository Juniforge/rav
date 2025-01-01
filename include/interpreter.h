#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <string>

class Interpreter {
public:
    Interpreter();
    ~Interpreter();

    void run(const std::string& code);
};

#endif