#pragma once

#include <iostream>
#include "FormaBidimensional.hpp"

class Quadrado : public FormaBidimensional {
public:
    // Construtor
    Quadrado(const double lado = 0) : FormaBidimensional{4} { setLado(lado); }
    
    // Método set()
    void setLado(const double lado) { m_lado = (lado < 0 ? 0 : lado); }
    
    // Método get()
    double getLado() const { return m_lado; }
    
    // Métodos especiais da classe
    void desenhar() const override {
        std::cout << "+---+" << std::endl;
        std::cout << "|   |" << std::endl;
        std::cout << "+---+" << std::endl << std::endl;
    }
    double area() const override { return (getLado() * getLado()); }
    double perimetro() const override { return (getLado() * 4); }

private:
    double m_lado;
};