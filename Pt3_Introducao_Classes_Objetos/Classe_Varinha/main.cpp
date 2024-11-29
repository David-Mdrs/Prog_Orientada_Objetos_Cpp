#include <iostream>
#include "Varinha.hpp"

int main() {
    
    Varinha varinha{"Carvalho", "Fênix", 35};   // Valores corretos
    varinha.display();
    
    Varinha varinha2{"", "", 50};               // Valores inválidos   
    varinha2.display();
    
	return 0;
}