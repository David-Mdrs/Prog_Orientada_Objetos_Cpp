#pragma once

#include <iostream>
#include "Pokemon.hpp"

class Pokebola{
public:
    // Construtor
    Pokebola() {}
    
    // Método get()
    Pokemon *getPokemon() const { return m_pokemon; }
    
    // Método set()
    void setPokemon(Pokemon *pokemon) { m_pokemon = pokemon; }

private:
    Pokemon *m_pokemon{};
};