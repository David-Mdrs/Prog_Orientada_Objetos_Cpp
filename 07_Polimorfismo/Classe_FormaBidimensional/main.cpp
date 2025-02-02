#include <iostream>

#include "Circulo.hpp"
#include "Quadrado.hpp"
#include "Triangulo.hpp"
 
int main() {

	FormaBidimensional *formas[] = {
		new Quadrado{10}, new Circulo{5}, new Triangulo{5, 6}
	};

	for (int i = 0; i < 3; i++) {
		formas[i]->desenhar();
		std::cout << formas[i]->area() << std::endl;
		std::cout << formas[i]->perimetro() << std::endl << std::endl;
		
		delete formas[i];
	}

	return 0;
}