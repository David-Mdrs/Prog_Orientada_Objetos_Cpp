#include <iostream>
#include "CapaBruxo.hpp"

int main() {
    
    CapaBruxo capa1{};
    capa1.display();
    
    CapaBruxo capa2(2.5, "Grifinória");
    capa2.display();
    
    capa2.setCasa("Sonserina");
    capa2.display();
    
    
	return 0;

}