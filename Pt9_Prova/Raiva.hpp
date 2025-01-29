#pragma once

#include "Emocao.hpp"

class Raiva : public Emocao {
public:
    // Construtor
    Raiva(const std::string nome, const bool ativa = false) : Emocao{nome, ativa} {}
    
    // Método virtual sobrescrito
    void processar(const std::string descricao) override {
        int contador{0};
        for(int i = 0; i < descricao.size(); i++) {
            if (toupper(descricao[i]) == 'A' or toupper(descricao[i]) == 'E' or toupper(descricao[i]) == 'I' or toupper(descricao[i]) == 'O' or toupper(descricao[i]) == 'U') {
                contador++;
            }
        }
        if (contador % 2 == 1) {
            if(getAtiva() == true) { setAtiva(false); }
            else { setAtiva(true); }
        }
    }
};