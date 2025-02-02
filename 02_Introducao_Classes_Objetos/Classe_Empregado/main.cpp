#include <iostream>
#include <string>
#include "Empregado.hpp"

int main() {
    
    Empregado empregado{"Batista", "Madureiro", 1000};
    std::cout << empregado.dados() << std::endl;
    empregado.aumento(10);
    std::cout << empregado.dados() << std::endl;
    
	return 0;
}