#pragma once

#include <iostream>
#include <string>

class Animal{
public:
    // Construtores
    Animal();
    Animal(const std::string nome);

    // Métodos get() e set()
    std::string getNome() const { return m_nome; }
    std::string getRaca() const { return m_raca; }
    
    // Métodos set()
    void setNome(std::string nome) { m_nome = nome; }
    void setRaca(std::string raca) { m_raca = raca; }

    // Métodos especiais da classe
    void caminha();

private:
    std::string m_nome;
    std::string m_raca;
    bool m_caminha;
};