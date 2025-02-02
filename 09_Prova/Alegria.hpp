#pragma once

#include "Emocao.hpp"

class Alegria : public Emocao {
public:
    // Construtor
    Alegria(const std::string nome, const bool ativa = false) : Emocao{nome, ativa} {}
    
    // Método virtual sobrescrito
    void processar(const std::string descricao) override {
        if (descricao.size() % 2 == 0) { setAtiva(true); }
    }
};