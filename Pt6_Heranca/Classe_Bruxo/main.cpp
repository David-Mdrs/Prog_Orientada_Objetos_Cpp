#include <iostream>

#include "Humano.hpp"
#include "Bruxo.hpp"
#include "Trouxa.hpp"

int main() {
    
    // Criando objeto Bruxo
    Bruxo bruxo{"Harry", 19, "Grifinoria", "Expelliarmus"};

    // Criando objeto Varinha
    Varinha varinha{"Carvalho", "Fênix", 35};

    // Agregando varinha ao bruxo
    bruxo.setVarinha(varinha);

    // Criando objeto CapaBruxo
    CapaBruxo capa{2.5, "Sonserina"};

    // Agregando capa ao bruxo
    bruxo.setCapa(capa);
    bruxo.dados();
    
    Humano humano{"Clotilde", 30};
    std::cout << humano.getNome();
    
    Trouxa trouxa{"Jerry", 30, "Engenheiro"};
    trouxa.dados();
    
	return 0;
}
