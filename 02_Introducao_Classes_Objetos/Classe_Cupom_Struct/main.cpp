#include <iostream>
#include "Cupom.hpp"

int main() {

    Cupom cupom{};
    cupom.addItem("001", "chiclete", 5, 0.5);
    cupom.addItem("002", "pirulito", 5, -1);
    
    std::cout << cupom.get("abc") << std::endl;
    std::cout << cupom.calculaCupom() << std::endl << std::endl;
    
    cupom.imprimirNota();
    
    for(int i = 2; i < 21; i++){
        cupom.addItem(std::to_string(i), "Aleatório", 1, 1);
    }
    
    return 0;
}