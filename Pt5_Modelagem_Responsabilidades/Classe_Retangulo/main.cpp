#include <iostream>
#include "Retangulo.hpp"

int main() {

    Retangulo ret(5, 10);
    
    std::cout << "Tamanho: " << ret.getAltura() << std::endl;
    std::cout << "Largura: " << ret.getLargura() << std::endl;
    std::cout << "Perimetro: " << ret.perimetro() << std::endl;
    std::cout << "área: " << ret.area() << std::endl;
    ret.desenho();

	return 0;
}
