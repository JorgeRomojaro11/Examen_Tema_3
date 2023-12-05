#include <iostream>
#include <map>
#include <stdexcept>

class environment {
private:
    std::map<std::string, int > symbolTable;

public:
    Environment() {
        symbolTable = std::map<std::string, int >();
    }

    Void insert(const std::string& symbol, int value) {
        if symbolTable.find(symbol) != symbolTable.end() {
            if symbolTable[symbol] != value {
                throw std::runtime_error("Symbol " + symbol + " already exists with value " + std::to_string(symbolTable[symbol]));
            }

            std::cout << "Symbol " << symbol << " already exists" << std::endl;
        } else {
            symbolTable[symbol] = value;
        }

    }

    int lookup(const std::string& symbol) {
        if symbolTable.find(symbol) != symbolTable.end() {
            return symbolTable[symbol];
        } else {
            std::cout << "Symbol " << symbol << " does not exist" << std::endl;
            return 0;
        }
    }

};