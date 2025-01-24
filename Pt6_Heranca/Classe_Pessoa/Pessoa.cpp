#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome) {
    setNome(nome);
}

void Pessoa::setNome(std::string nome) {
    m_nome = (nome.empty() ? "Sem registro" : nome); 
}

void Pessoa::apresentar() const {
    std::cout << "============== PESSOA ==============" << std::endl <<
    "Nome: " << getNome() << std::endl << std::endl;
}