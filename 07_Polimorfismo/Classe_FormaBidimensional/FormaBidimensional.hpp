#pragma once

// Classe abstrata
class FormaBidimensional {
public:
    // Construtor
    FormaBidimensional(int numLados) : numLados{numLados} {}
    
    // Destrutor
    virtual ~FormaBidimensional() { std::cout << "Destruindo forma!" << std::endl; }
    
    // Métodos virtuais puro
    virtual void desenhar() const = 0;
    virtual double area() const = 0;
    virtual double perimetro() const = 0;

private:
    int numLados;
};