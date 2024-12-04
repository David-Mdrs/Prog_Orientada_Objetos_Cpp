#pragma once

#include <iostream>
#include <string>

class Pokemon{
public:
    // Construtor
    Pokemon(const std::string nome, const std::string  tipo, const std::string som);
    
    // Métodos get()
    std::string getNome() { return m_nome; }
    std::string getTipo() { return m_tipo; }
    std::string getSom() { return m_som; }
    
    // Métodos set()
    void setNome(const std::string nome) { m_nome = nome; }
    void setTipo(const std::string  tipo) { m_tipo = tipo; }
    void setSom(const std::string som) { m_som = som; }
    
    // Métodos especiais da classe Pokemon
    void emitirSom() const { std::cout << m_som << std::endl << std::endl; }
    
private:
    std::string m_nome;
    std::string m_tipo;
    std::string m_som;
};