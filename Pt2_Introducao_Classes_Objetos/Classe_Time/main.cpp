#include <iostream>
#include "Time.hpp"

int main() {
    // Inicializando objetos para teste da função tick()
	Time t1(11, 50, 59);
	Time t2(11, 59, 59);
	Time t3(23, 59, 59);
	
	// Analisando objetos antes das mudanças
	std::cout << t1.toUniversal() << std::endl;
	std::cout << t2.toUniversal() << std::endl;
	std::cout << t3.toUniversal() << std::endl << std::endl;

    // Utilizando função tick()
    t1.tick();
    t2.tick();
    t3.tick();
    
    // Analisando mudanças nos objetos
    std::cout << t1.toUniversal() << std::endl;
	std::cout << t2.toUniversal() << std::endl;
	std::cout << t3.toUniversal() << std::endl;

	return 0;
}