#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(const std::string nome, const std::string cnpj, const std::string razaoSocial)
: Pessoa{nome} {
    setRazaoSocial(razaoSocial);
    setCnpj(cnpj);
}

void PessoaJuridica::setCnpj(const std::string cnpj) {
    m_cnpj = (cnpj.size() != 14 ? "00000000000" : cnpj);
}

void PessoaJuridica::setRazaoSocial(const std::string razaoSocial) {
    m_razaoSocial = (razaoSocial.empty() ? "Nenhum" : razaoSocial);
}


void PessoaJuridica::apresentar() const {
    std::cout << "========== PESSOA JURÍDICA =========" << std::endl <<
    "Nome: " << getNome() << std::endl <<
    "Cnpj: " << getCnpj() << std::endl <<
    "Razão Social: " << getRazaoSocial() << std::endl <<std::endl;
}