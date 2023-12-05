#include <iostream>
#include <map>

class environment {
private:
    std::map<std::string, int > symbolTable;

public:
    Environment() {
        symbolTable = std::map<std::string, int >();
    }
};