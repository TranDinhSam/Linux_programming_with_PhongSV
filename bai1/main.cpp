#include <iostream>
#include "wpa.hpp"

int main() {
    Calculator calc;
     std::cout << "Hello, welcome to c++\n";
    std::cout << "2 + 3 = " << calc.add(2, 3) << std::endl;
    std::cout << "5 - 1 = " << calc.subtract(5, 1) << std::endl;
    std::cout << "4 * 6 = " << calc.multiply(4, 6) << std::endl;
    try {
        std::cout << "8 / 2 = " << calc.divide(8, 2) << std::endl;
        std::cout << "8 / 0 = " << calc.divide(8, 0) << std::endl; // Will throw an exception
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }
    return 0;
}

