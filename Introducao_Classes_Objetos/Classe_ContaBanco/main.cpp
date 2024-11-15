#include <iostream>
#include "ContaBanco.hpp"

int main() {

    ContaBanco conta1(100);         // Inicializando conta com 100.00
    conta1.creditar(50);            // Acrescentando 50.00
    conta1.creditar(-50);           // Valor negativo (sem alterações)
    
    std::cout << conta1.getSaldo() << std::endl;
    
    conta1.debitar(50);             // Retirando 50.00
    conta1.debitar(150);            // Valor alto (sem alterações)
    
    std::cout << conta1.getSaldo() << std::endl;
    
	return 0;
}
