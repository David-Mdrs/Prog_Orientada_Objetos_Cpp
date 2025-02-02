#pragma once

#include <iostream>
#include "FormaBidimensional.hpp"

class Circulo : public FormaBidimensional {
public:
    // Construtor
    Circulo(const double raio) : FormaBidimensional{99999} { setRaio(raio); }
    
    // Método set()
    void setRaio(const double raio) { m_raio = (raio < 0 ? 0 : raio); }
    
    // Método get()
    double getRaio() const { return m_raio; }
    
    // Métodos especiais da classe
    void desenhar() const override {
        std::cout << "  _ " << std::endl;
        std::cout << "/   \\" << std::endl;
        std::cout << "\\   /" << std::endl;
        std::cout << "  - " << std::endl << std::endl;
    }
    double area() const override { return (2 * getRaio() * 1.1416); }
    double perimetro() const override { return (getRaio() * getRaio() * 1.1416); }

private:
    double m_raio;
};