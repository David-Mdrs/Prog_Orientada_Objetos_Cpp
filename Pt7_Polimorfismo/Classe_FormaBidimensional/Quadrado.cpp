#pragma once

#include <iostream>
#include "FormaBidimensional.hpp"

class Quadrado : public FormaBidimensional {
public:
    // Construtor
    Quadrado() : FormaBidimensional{4} {}
    
    // Método especial da classe
    void desenhar() const {
        std::cout << "+---+" << std::endl;
        std::cout << "|   |" << std::endl;
        std::cout << "+---+" << std::endl << std::endl;
    }
};