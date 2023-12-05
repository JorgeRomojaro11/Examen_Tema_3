#include <iostream>
#include <map>

class environment {
private:
    std::map<std::string, int > symbolTable;

public:
    Environment() {
        symbolTable = std::map<std::string, int >();
    }

    Void insert(const std::string& symbol, int value) {
        if symbolTable.find(symbol) != symbolTable.end() {
            std::cout << "Symbol " << symbol << " already exists" << std::endl;
        } else {
            symbolTable.insert(std::pair<std::string, int>(symbol, value));
        }

    }
};