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


// Sobrecarga de "<<" para imprimir dados
std::ostream& operator<<(std::ostream &out, const Cliente &cliente) {
    out << "============= CLIENTE ============" << std::endl <<
    "Nome: " << cliente.m_nome << std::endl <<
    "Cpf: " << cliente.m_cpf << std::endl <<
    "Telefone: " << cliente.m_telefone << std::endl <<
    "Endereço: " << cliente.m_endereco << std::endl << std::endl;
    return out;
}
