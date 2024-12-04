#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Pokemon.hpp"
#include "Pokebola.hpp"

class Treinador{
public:
    // Construtor
    Treinador(const std::string nome) { setNome(nome); }
    
    // Método get()
    std::string getNome() const { return m_nome; }
    
    // Método set()
    void setNome(const std::string nome) { m_nome = nome; }
    
    // Métodos especiais da classe Treinador
    void capturar(Pokemon *pokemon);
    void vai(const std::string nome) const;
    
private:
    std::string m_nome;
    std::vector<Pokebola> m_pokebolas;
};