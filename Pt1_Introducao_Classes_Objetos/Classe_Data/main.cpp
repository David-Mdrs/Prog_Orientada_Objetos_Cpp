#include <iostream>
#include "Data.hpp"

int main() {

    Data dataNascimento(10, 6, 2005);   // Dados corretos
    Data dataDiaErro(35, 12, 2025);     // Dia (35) inexistente (padrão - 1)
    Data dataMesErro(31, 13, 2025);     // Mês (13) inexistente (padrão - 1)
    
    std::cout << dataNascimento.dados() << std::endl;
    std::cout << dataDiaErro.dados() << std::endl;
    std::cout << dataMesErro.dados() << std::endl;

	return 0;
}
