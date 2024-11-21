#include <iostream>
#include "Cupom.hpp"

int main() {

    Cupom compra("Abc", "Marshmallow", 2, 2.5);     // Valores corretos
    Cupom compraErrada("Def", "Chiclete", -1, -1);  // Valores incorretos  
    
    std::cout << compra.dados() << std::endl;
    std::cout << compra.calculaCupom() << std::endl;
    
    std::cout << compraErrada.dados() << std::endl;
    std::cout << compraErrada.calculaCupom() << std::endl;

	return 0;
}
