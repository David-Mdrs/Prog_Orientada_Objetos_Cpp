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
    "Nome: " << getNome() << std::endl <<
    "Cpf: " << getCpf() << std::endl <<
    "Telefone: " << getTelefone() << std::endl <<
    "Endereço: " << getEndereco() << std::endl << std::endl;
}


// Sobrecarga de "<<" para imprimir dados
std::ostream& operator<<(std::ostream &out, const Cliente &cliente) {
    out << "============= CLIENTE ============" << std::endl <<
    "Nome: " << cliente.getNome() << std::endl <<
    "Cpf: " << cliente.getCpf() << std::endl <<
    "Telefone: " << cliente.getTelefone() << std::endl <<
    "Endereço: " << cliente.getEndereco() << std::endl << std::endl;
    return out;
}
