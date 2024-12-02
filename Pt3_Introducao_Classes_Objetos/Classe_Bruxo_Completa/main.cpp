#include <iostream>
#include "Bruxo.hpp"

int main() {
    
    // Criando objeto Bruxo
    Bruxo bruxo{"Harry", "Grifinoria", "Expelliarmus"};
    bruxo.lancarFeitico();
    bruxo.dados();
    
    // Criando objeto Varinha
    Varinha varinha{"Carvalho", "Fênix", 35};
    varinha.display();
    
    // Agregando varinha ao bruxo
    bruxo.setVarinha(varinha);
    bruxo.dados();
    
    // Criando objeto CapaBruxo
    CapaBruxo capa{2.5, "Sonserina"};
    capa.display();
    
    // Agregando capa ao bruxo
    bruxo.setCapa(capa);
    bruxo.dados();
    
	return 0;
}
