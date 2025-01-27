#include "PessoaFisica.hpp"

PessoaFisica::PessoaFisica(const std::string nome, const std::string endereco, const std::string email,
const std::string cpf, const std::string dataNasc, const std::string estadoCivil)
: Pessoa{nome, endereco, email} {
    setCpf(cpf);
    setDataNasc(dataNasc);
    setEstadoCivil(estadoCivil);
}

void PessoaFisica::setCpf(const std::string cpf) {
    m_cpf = (cpf.size() != 11 ? "0" : cpf);
}

void PessoaFisica::setDataNasc(const std::string dataNasc) {
    m_dataNasc = (dataNasc.empty() or dataNasc.size() != 8 ? "0" : dataNasc);
}
void PessoaFisica::setEstadoCivil(const std::string estadoCivil) {
    m_estadoCivil = (estadoCivil.empty() ? "Nenhum" : estadoCivil);
}

void PessoaFisica::apresentar() const {
    std::cout << "=========== PESSOA FÍSICA ==========" << std::endl <<
    "Nome: " << getNome() << std::endl <<
    "Endereço: " << getEndereco() << std::endl << 
    "Email: " << getEmail() << std::endl <<
    "Cpf: " << getCpf() << std::endl << 
    "Data de Nascimento: " << getDataNasc() << std::endl <<
    "Estado Civil: " << getEstadoCivil() << std::endl << std::endl;
}