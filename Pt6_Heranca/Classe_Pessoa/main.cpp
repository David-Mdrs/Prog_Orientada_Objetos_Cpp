#include <iostream>

#include "Pessoa.hpp"           // Opcional
#include "PessoaFisica.hpp"     // Opcional
#include "PessoaJuridica.hpp"   // Opcional

#include "Cliente.hpp"
#include "Funcionario.hpp"

int main() {

    Pessoa p{"Paulo"};
    p.apresentar();
    
    PessoaFisica pf{"David", "23465423490"};
    pf.apresentar();

    
    PessoaJuridica pj{"Maria", "94857263540184", "Maria Silva LTDA"};
    pj.apresentar();

    // Imprimindo dados com sobrecarga de operador para desvio de fluxo
    Cliente cl{"Maercio", "25764076524", "81928576039", "Campina Grande - PB"};
    // cl.apresentar();
    std::cout << cl;
    
    Funcionario func{"Clarice", "23483637895", "25003", 1500, 80, 75};
    func.apresentar();

    return 0;
}