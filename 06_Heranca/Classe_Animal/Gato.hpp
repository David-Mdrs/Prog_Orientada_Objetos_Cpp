#pragma once

#include "Animal.hpp"

class Gato : public Animal {
public:
    // Construtores
    Gato () : Animal() {}
    Gato (std::string nome) : Animal(nome) {}
    
    // Métodos especiais da classe
    void miar() const { std::cout << "Miau Miau !!" << std::endl; }
};