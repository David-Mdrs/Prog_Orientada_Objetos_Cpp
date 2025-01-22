#pragma once

#include <iostream>
#include <string>

class Pessoa{
public:
    // Construtor
    Pessoa(std::string nome);

    // Método get()
    std::string getNome() const { return m_nome; }

    // Método set()
    void setNome(std::string nome);

    // Método especial da classe
    void apresentar() const;

protected:
    std::string m_nome;
};