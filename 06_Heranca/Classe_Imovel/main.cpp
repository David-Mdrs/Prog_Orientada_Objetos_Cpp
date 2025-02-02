#include <iostream>

#include "Imovel.hpp"
#include "ImovelNovo.hpp"
#include "ImovelVelho.hpp"

int main() {
    
    // Exemplo com classe Imovel
    Imovel imovel{"Campina Grande", 5000.00};
    imovel.dados();
    
    // Exemplo com classe ImovelNovo
    ImovelNovo imovelNovo{"Santa Luzia", 3000.00, 10.0};
    imovelNovo.dados();
    
    // Exemplo com classe ImovelVelho
    ImovelVelho imovelVelho{"João Pessoa", 9000.00, 15.0};
    imovelVelho.dados();
    
	return 0;
}
