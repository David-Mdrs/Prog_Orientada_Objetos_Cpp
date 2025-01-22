#include "PessoaFisica.hpp"

PessoaFisica::PessoaFisica(const std::string nome, const std::string cpf) : Pessoa{nome} {
    setCpf(cpf);
}

void PessoaFisica::setCpf(const std::string cpf) {
    m_cpf = (cpf.size() != 11 ? "00000000000" : cpf);
}

void PessoaFisica::apresentar() const {
    std::cout << "=========== PESSOA FÍSICA ==========" << std::endl <<
    "Nome: " << m_nome << std::endl <<
    "Cpf: " << m_cpf << std::endl << std::endl;
}