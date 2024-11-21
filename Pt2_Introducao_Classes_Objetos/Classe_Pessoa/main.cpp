#include <iostream>
#include "Pessoa.hpp"

int main() {

    Pessoa p1("Jurandir");
    std::cout << p1.apresentar() << std::endl;
    
    p1.setCpf("09323457890");
    std::cout << p1.apresentar() << std::endl;
    
    Pessoa p2("Maicon", "79824367170");
    std::cout << p2.apresentar() << std::endl;

	return 0;
}
