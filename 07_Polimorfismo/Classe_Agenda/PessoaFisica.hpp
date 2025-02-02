#pragma once

#include <iostream>
#include <string>
#include <format>
#include "Pessoa.hpp"

class PessoaFisica : public Pessoa {
public:
    // Construtores
    PessoaFisica(const std::string nome, const std::string endereco, const std::string email,
    const std::string cpf = "0", const std::string dataNasc = "0", const std::string estadoCivil = "Nenhum");

    // Métodos get()
    std::string getCpf() const { return m_cpf; }
    std::string getDataNasc() const { return m_dataNasc; }
    std::string getEstadoCivil() const { return m_estadoCivil; }

    // Métodos set()
    void setCpf(const std::string cpf);
    void setDataNasc(const std::string dataNasc);
    void setEstadoCivil(const std::string estadoCivil);
    
    // Método especial da classe
    void apresentar() const override;

private:
    std::string m_cpf;
    std::string m_dataNasc;
    std::string m_estadoCivil;
};