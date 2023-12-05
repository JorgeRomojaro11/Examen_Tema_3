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
                throw std::runtime_error("Symbol " + symbol + " already exists in the environment with different value " + std::to_string(symbolTable[symbol]));
            }else {
                throw std::runtime_error("Symbol " + symbol + " already exists in the environment " + std::to_string(symbolTable[symbol]));
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
            throw std::runtime_error("Symbol " + symbol + " does not exist in the environment");
            return 0;
        }
    }

    void remove (const std:string & symbol) {
    if symbolTable.find(symbol) != symbolTable.end() {
    symbolTable.erase(symbol);}
    }else {
        throw std::runtime_error("Symbol " + symbol + "does not exist in the environment")
    }

    bool exists(const std::string& symbol) {
        return symbolTable.find(symbol) != symbolTable.end();
    }
}

;