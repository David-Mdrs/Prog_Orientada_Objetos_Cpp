#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(const std::string nome, const std::string endereco, const std::string email,
const std::string cnpj, const std::string inscEstadual, const std::string razaoSocial)
: Pessoa{nome, endereco, email} {
    setCnpj(cnpj);
    setInscEstadual(inscEstadual);
    setRazaoSocial(razaoSocial);
}

void PessoaJuridica::setCnpj(const std::string cnpj) {
    m_cnpj = (cnpj.size() != 14 ? "0" : cnpj);
}

void PessoaJuridica::setInscEstadual(const std::string inscEstadual) {
    m_inscEstadual = (inscEstadual.empty() ? "Nenhuma" : inscEstadual);
}

void PessoaJuridica::setRazaoSocial(const std::string razaoSocial) {
    m_razaoSocial = (razaoSocial.empty() ? "Nenhuma" : razaoSocial);
}

void PessoaJuridica::apresentar() const {
    std::cout << "========== PESSOA JURÍDICA =========" << std::endl <<
    "Nome: " << getNome() << std::endl <<
    "Endereço: " << getEndereco() << std::endl <<
    "Email: " << getEmail() << std::endl <<
    "Cnpj: " << getCnpj() << std::endl << 
    "Inscrição estadual: " << getInscEstadual() << std::endl <<
    "Razão social: " << getRazaoSocial() << std::endl << std::endl;
}