#include <iostream>

#include "Animal.hpp"

using std::cout;

int main() {
	Animal animal{"Jô Ratão"};
	animal.caminha();
	animal.caminha();
    std::cout << std::endl;
    
    Animal semNome{};
    semNome.caminha();
	semNome.caminha();
    std::cout << std::endl;
	
	return 0;
}
