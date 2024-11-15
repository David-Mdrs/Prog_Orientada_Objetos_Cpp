#include <iostream>
#include "Cupom.hpp"

int main() {

    Cupom cupom{};
    cupom.addItem("abc", "chiclete", 5, 0.5);
    cupom.addItem("def", "pirulito", 5, 1);
    
    std::cout << cupom.get("abc") << std::endl;
    
    std::cout << cupom.calculaCupom() << std::endl << std::endl;
    
    cupom.imprimirNota();
    
    return 0;
}