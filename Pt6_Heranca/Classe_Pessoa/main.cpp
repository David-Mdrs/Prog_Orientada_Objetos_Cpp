#include <iostream>
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"

int main() {

    Pessoa p1{""};
    p1.apresentar();
    
    Pessoa p2{"Paulo"};
    p2.apresentar();
    
    PessoaFisica pf{"David", "23465423490"};
    pf.apresentar();

    return 0;
}