#pragma once

#include <iostream>
#include "Livro.hpp"

class LivroMonstruosoDosMonstros : public Livro {
public:
    LivroMonstruosoDosMonstros() { std::cout << "Livro monstruoso criado!" << std::endl; }
    void ler() const { std::cout << "Mastiga, mastiga, mastiga, mastiga..." << std::endl; }
};