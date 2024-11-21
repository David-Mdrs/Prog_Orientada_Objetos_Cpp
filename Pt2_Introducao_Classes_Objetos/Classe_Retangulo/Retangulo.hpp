#pragma once

#include <iostream>

class Retangulo{
public:
    Retangulo(double altura, double largura);
    
    double getAltura() const;
    void setAltura(double altura);
    
    double getLargura() const;
    void setLargura(double largura);
    
    double perimetro() const;
    double area() const;
    void desenho() const;
    
private:
    double m_altura;
    double m_largura;
};