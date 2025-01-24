#include "Cliente.hpp"

// Construtores
Cliente::Cliente(const std::string nome, const std::string cpf, const std::string telefone, const std::string endereco)
    : PessoaFisica{nome, cpf} {
        setTelefone(telefone);
        setEndereco(endereco);
    }

// Métodos set()
void Cliente::setTelefone(const std::string telefone) {
    m_telefone = (telefone.size() != 11 ? "00000000000" : telefone);
}
void Cliente::setEndereco(const std::string endereco) {
    m_endereco = (endereco.empty() ? "Nenhum" : endereco);
}

// Métodos especiais da classe
void Cliente::apresentar() const {
    std::cout << "============= CLIENTE ============" << std::endl <<
    "Nome: " << m_nome << std::endl <<
    "Cpf: " << m_cpf << std::endl <<
    "Telefone: " << m_telefone << std::endl <<
    "Endereço: " << m_endereco << std::endl << std::endl;
}
