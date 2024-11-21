#include <iostream>
#include <string>
#include <format>

#include "Carro.hpp"

using std::cout, std::format;

int main() {
    
	Carro possante{"Toyota", "Corolla", 0};
    std::cout << possante.toString() << std::endl;	
    
	return 0;
}
