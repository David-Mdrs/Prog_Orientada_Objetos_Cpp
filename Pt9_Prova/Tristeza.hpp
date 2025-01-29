#pragma once

#include "Emocao.hpp"

class Tristeza : public Emocao {
public:
    // Construtor
    Tristeza(const std::string nome, const bool ativa = false) : Emocao{nome, ativa} {}
    
    // Método virtual sobrescrito
    void processar(const std::string descricao) override {
        if (descricao.size() % 2 == 1) { setAtiva(true); }
    }
};