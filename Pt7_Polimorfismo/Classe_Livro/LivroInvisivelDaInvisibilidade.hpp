#pragma once

#include <iostream>
#include "Livro.hpp"

class LivroInvisivelDaInvisibilidade : public Livro {
public:
    LivroInvisivelDaInvisibilidade() {}
    void ler() const override { return; }
};