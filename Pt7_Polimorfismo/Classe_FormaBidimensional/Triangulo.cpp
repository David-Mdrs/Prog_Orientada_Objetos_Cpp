#pragma once

#include <iostream>
#include "FormaBidimensional.hpp"

class Triangulo : public FormaBidimensional {
public:
    // Construtor
    Triangulo() : FormaBidimensional{3} {}
    
    // Método especial da classe
    void desenhar() const {
        std::cout << "   .    " << std::endl;
        std::cout << "  / \\  " << std::endl;
        std::cout << " /   \\ " << std::endl;
        std::cout << "/_____\\" << std::endl << std::endl;
    }
};