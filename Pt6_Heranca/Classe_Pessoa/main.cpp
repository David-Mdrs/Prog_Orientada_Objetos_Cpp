#include <iostream>

#include "Pessoa.hpp"           // Opcional
#include "PessoaFisica.hpp"     // Opcional
#include "PessoaJuridica.hpp"   // Opcional

#include "Cliente.hpp"

int main() {

    Pessoa p{"Paulo"};
    p.apresentar();
    
    PessoaFisica pf{"David", "23465423490"};
    pf.apresentar();

    
    PessoaJuridica pj{"Maria", "94857263540184", "Maria Silva LTDA"};
    pj.apresentar();

    Cliente cl{"Maercio", "25764076524", "81928576039", "Campina Grande - PB"};
    cl.apresentar();

    return 0;
}