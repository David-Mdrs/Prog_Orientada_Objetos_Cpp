#pragma once

#include <iostream>
#include <string>
#include <format>
#include "Pessoa.hpp"

class PessoaFisica : public Pessoa {
public:
    // Construtores
    PessoaFisica(const std::string nome, const std::string cpf = "00000000000");

    // Métodos get()
    std::string getCpf() const { return m_cpf; }

    // Métodos set()
    void setCpf(const std::string cpf);
    
    // Método especial da classe
    void apresentar() const;

private:
    std::string m_cpf;
};