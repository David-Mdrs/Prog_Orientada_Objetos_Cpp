#include <iostream>
#include "Pessoa.hpp"

int main() {

    // Insira seu CPF
    Pessoa p1{"", ""};  // Válido
    Pessoa p2{"Paulo", "22233344455"};  // Inválido
    Pessoa p3{"André", "1234567909"};   // Incompleto
    
    std::cout << p1.apresentar() << std::endl;
    std::cout << p2.apresentar() << std::endl;
    std::cout << p3.apresentar() << std::endl;

    return 0;
}