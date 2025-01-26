#pragma once

#include <iostream>
#include "Livro.hpp"

class LivroMonstruosoDosMonstros : public Livro {
public:
    LivroMonstruosoDosMonstros() {}
    void ler() const override { std::cout << "Mastiga, mastiga, mastiga, mastiga..." << std::endl << std::endl; }
};