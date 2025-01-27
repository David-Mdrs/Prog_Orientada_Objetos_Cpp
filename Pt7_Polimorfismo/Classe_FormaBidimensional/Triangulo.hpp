#pragma once

#include <iostream>
#include "FormaBidimensional.hpp"

class Triangulo : public FormaBidimensional {
public:
    // Construtor
    Triangulo(const double base = 0, const double altura = 0) : FormaBidimensional{3} {
        setBase(base);
        setAltura(altura);
    }
    
    // Métodos set()
    void setBase(const double base) { m_base = (base < 0 ? 0 : base); }
    void setAltura(const double altura) { m_altura = (altura < 0 ? 0 : altura); }
    
    // Métodos get()
    double getBase() const { return m_base; }
    double getAltura() const { return m_altura; }
    
    // Métodos especiais da classe
    void desenhar() const override {
        std::cout << "   .    " << std::endl;
        std::cout << "  / \\  " << std::endl;
        std::cout << " /   \\ " << std::endl;
        std::cout << "/_____\\" << std::endl << std::endl;
    }
    double area() const override { return (getBase() * getAltura() / 2); }
    double perimetro() const override { return (getBase() + getAltura() * 2); }
    
private:
    double m_base;
    double m_altura;
};