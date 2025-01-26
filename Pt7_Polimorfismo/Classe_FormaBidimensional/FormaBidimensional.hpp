#pragma once

// Classe abstrata
class FormaBidimensional {
public:
    // Construtor
    FormaBidimensional(int numLados) : numLados{numLados} {}
    
    // Método virtual puro
    virtual void desenhar() const = 0;

private:
    int numLados;
};