#pragma once

#include <iostream>
#include <string>
#include "PessoaFisica.hpp"

class Cliente : public PessoaFisica {
public:
    // Construtores
    Cliente(const std::string nome, const std::string cpf,
    const std::string telefone = "00000000000", const std::string endereco = "Nenhum");

    // Métodos get()
    std::string getTelefone() const { return m_telefone; }
    std::string getEndereco() const { return m_endereco; }
    
    // Métodos set()
    void setTelefone(const std::string telefone);
    void setEndereco(const std::string endereco);

    // Métodos especiais da classe
    void apresentar() const;
    
private:
    std::string m_telefone;
    std::string m_endereco;
};