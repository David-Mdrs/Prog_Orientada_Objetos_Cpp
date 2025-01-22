#pragma once

#include <iostream>
#include <string>

class Humano{
public:
    Humano(std::string nome = "Nenhum", int idade = 0) : m_nome{nome}, m_idade{idade} {} 
    
    // Métodos set()
    void setNome(const std::string nome) { m_nome = nome; }
    void setIdade(const int idade) { m_idade = idade; }

    // Métodos get()
    std::string getNome() const { return m_nome; }
    int getIdade() const { return m_idade; }
    
    // Método especiais da classe
    void dados() const;
    
protected:
    std::string m_nome;
    int m_idade;
};