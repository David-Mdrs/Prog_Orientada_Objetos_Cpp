#pragma once

#include <iostream>
#include "Livro.hpp"

class LivroInvisivelDaInvisibilidade : public Livro {
public:
    LivroInvisivelDaInvisibilidade() { std::cout << "Livro invisível criado!" << std::endl; }
    void ler() const { return; }
};