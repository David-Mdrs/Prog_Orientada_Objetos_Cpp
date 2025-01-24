#include <iostream>
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"

int main() {

    Pessoa p1{""};
    p1.apresentar();
    
    Pessoa p2{"Paulo"};
    p2.apresentar();
    
    PessoaFisica pf{"David", "23465423490"};
    pf.apresentar();
    
    PessoaJuridica pj{"Bruno", "93749582740583"};
    pj.apresentar();
    
    PessoaJuridica pj2{"Maria", "94857263540184", "Maria Silva LTDA"};
    pj2.apresentar();

    return 0;
}