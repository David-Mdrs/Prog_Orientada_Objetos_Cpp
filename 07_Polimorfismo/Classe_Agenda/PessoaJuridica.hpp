#pragma once

#include <iostream>
#include <string>
#include <format>
#include "Pessoa.hpp"

class PessoaJuridica : public Pessoa {
public:
    // Construtores
    PessoaJuridica(const std::string nome, const std::string endereco, const std::string email,
    const std::string cnpj = "0", const std::string inscEstadual = "Nenhuma", const std::string razaoSocial = "Nenhuma");
    
    // Métodos get()
    std::string getCnpj() const { return m_cnpj; }
    std::string getInscEstadual() const { return m_inscEstadual; }
    std::string getRazaoSocial() const { return m_razaoSocial; }

    // Métodos set()
    void setCnpj(const std::string cnpj);
    void setInscEstadual(const std::string inscEstadual);
    void setRazaoSocial(const std::string razaoSocial);

    // Método especial da classe
    void apresentar() const  override;

private:
    std::string m_cnpj;
    std::string m_inscEstadual;
    std::string m_razaoSocial;
};