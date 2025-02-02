#include <iostream>

#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"

int main() {
    
    Pessoa *pessoa{nullptr};
    PessoaFisica pessoaFisica{"David", "Campina Grande", "david@gmail.com", "98723498734", "10062005", "Solteiro"};
    PessoaJuridica pessoaJuridica{"Maria", "João Pessoa", "Maria@gmail.com", "94857263540184", "Nenhuma", "Maria Silva LTDA"};
    
    pessoa = &pessoaFisica;
    pessoa->apresentar();
    
    pessoa = &pessoaJuridica;
    pessoa->apresentar();
    
    return 0;
}