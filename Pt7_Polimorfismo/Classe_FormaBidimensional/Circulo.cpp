#pragma once

#include <iostream>
#include "FormaBidimensional.hpp"

class Circulo : public FormaBidimensional {
public:
    // Construtor
    Circulo() : FormaBidimensional{99999} {}
    
    // Método especial da classe
    void desenhar() const {
        std::cout << "  _ " << std::endl;
        std::cout << "/   \\" << std::endl;
        std::cout << "\\   /" << std::endl;
        std::cout << "  - " << std::endl << std::endl;
    }
};