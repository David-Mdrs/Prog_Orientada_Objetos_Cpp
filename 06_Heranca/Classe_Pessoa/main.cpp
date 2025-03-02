#include <iostream>

#include "Pessoa.hpp"           // Opcional
#include "PessoaFisica.hpp"     // Opcional
#include "PessoaJuridica.hpp"   // Opcional

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Empresa.hpp"

int main() {

    // Pessoa p{"Paulo"};
    // p.apresentar();
    
    // PessoaFisica pf{"David", "23465423490"};
    // pf.apresentar();

    
    // PessoaJuridica pj{"Maria", "94857263540184", "Maria Silva LTDA"};
    // pj.apresentar();

    Cliente cl{"Maercio", "25764076524", "81928576039", "Campina Grande - PB"};
    // std::cout << cl;    // Apresentando com sobrecarga
    
    Funcionario func{"Clarice", "23483637895", "25003", 1500, 80, 75};
    // std::cout << func;  // Apresentando com sobrecarga
    
    Empresa empresa{"Maria", "94857263540184", "Maria Silva LTDA"};
    empresa.apresentar();
    
    empresa.addFuncionario(func);
    empresa.apresentarFunc();
    
    empresa.addCliente(cl);
    empresa.apresentarCli();
    
    empresa.popFuncionario();
    empresa.apresentarFunc();
    
    empresa.popCliente();
    empresa.apresentarCli();
    
    return 0;
}