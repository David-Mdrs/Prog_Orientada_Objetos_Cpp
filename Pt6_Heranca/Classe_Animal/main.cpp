#include <iostream>

#include "Animal.hpp"   // Opcional
#include "Cachorro.hpp"
#include "Gato.hpp"

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
    
    Gato gato{"Miauzinho"};
    gato.miar();
    gato.caminha();
    std::cout << std::endl;
    
    Cachorro cachorro{"Doguin"};
    cachorro.latir();
    cachorro.caminha();
	
	return 0;
}
