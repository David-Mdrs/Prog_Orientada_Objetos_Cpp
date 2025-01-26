#include <iostream>

#include "Circulo.hpp"
#include "Quadrado.hpp"
#include "Triangulo.hpp"
 
int main() {

	FormaBidimensional *formas[] = {
		new Quadrado(), new Circulo(), new Triangulo()};

	for (int i = 0; i < 3; i++) {
		formas[i]->desenhar();
		delete formas[i];
	}

	return 0;
}