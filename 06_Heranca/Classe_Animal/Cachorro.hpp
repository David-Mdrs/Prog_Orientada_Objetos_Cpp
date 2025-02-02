#pragma once

#include "Animal.hpp"

class Cachorro : public Animal {
public:
    // Construtores
    Cachorro () : Animal() {}
    Cachorro (std::string nome) : Animal(nome) {}

    // Métodos especiais da classe
    void latir() const { std::cout << "Au Au Au !!" << std::endl; }
};