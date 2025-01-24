#pragma once

#include <iostream>
#include <string>
#include <format>
#include "Pessoa.hpp"

class PessoaJuridica : public Pessoa {
public:
    // Construtores
    PessoaJuridica(const std::string nome = "Sem registro", const std::string cnpj = "00000000000000", const std::string razaoSocial = "Nenhum");

    // Métodos get()
    std::string getCnpj() const { return m_cnpj; }
    std::string getRazaoSocial() const { return m_razaoSocial; }

    // Métodos set()
    void setCnpj(const std::string cnpj);
    void setRazaoSocial(const std::string razaoSocial);
    
    // Método especial da classe
    void apresentar() const;

private:
    std::string m_cnpj;
    std::string m_razaoSocial;
};