#pragma once

#include <iostream>
#include <string>
#include "Humano.hpp"

class Trouxa : public Humano {
public:
    Trouxa(std::string nome = "Nenhum", int idade = 0, std::string profissao = "Nenhum") : Humano{nome, idade}, m_profissao{profissao} {} 
    
    // Métodos set()
    void setProfissao(const std::string profissao) { m_profissao = profissao; }

    // Métodos get()
    std::string getProfissao() const { return m_profissao; }
    
    // Método especiais da classe
    void dados() const;
    
protected:
    std::string m_profissao;
};