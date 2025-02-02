#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Alegria.hpp"
#include "Raiva.hpp"
#include "Tristeza.hpp"

class Riley {

// Operador de bitwise sobrecarregado para mostrar emoções ativas
friend std::ostream &operator<<(std::ostream &out, const Riley &riley) {
    if (riley.getTamanho() == 0) {
        out << "Riley não tem emoções ativas no momento!!" << std::endl;
        return out;
    }
    out << "Emocoes da Riley que estao ativas: " << std::endl;
    for(int i = 0; i < riley.getTamanho(); i++) {
        if (riley.getEmocoes()[i]->getAtiva() == true) {
            out << riley.getEmocoes()[i]->getNome() << std::endl;
        }
    }
    return out;
}

public:
    // Construtor
    Riley() { std::cout << "A Riley acordou!! Hora das emoções trabalharem!!" << std::endl << std::endl; }
    
    // Destrutor apenas para frase de efeito
    ~Riley() { std::cout << "A Riley voltou a dormir!! Hora das emocoes descansarem!!" << std::endl << std::endl; } 
    
    // Método especial da classe
    int getTamanho() const { return m_emocoes.size(); }
    std::vector<Emocao*> getEmocoes() const { return m_emocoes; }

    void processar(const std::string descricao) {
        if (getTamanho() > 0) {
            for(int i = 0; i < getTamanho(); i++) {
                getEmocoes()[i]->processar(descricao);
            }
        }
    }
    
    // Operadores de bitwise sobrecarregados para inserir emoções na Riley
    void operator<<(const Alegria &alegria) { m_emocoes.push_back( new Alegria{alegria} ); }
    void operator<<(const Raiva &raiva) { m_emocoes.push_back( new Raiva{raiva} ); }
    void operator<<(const Tristeza &tristeza) { m_emocoes.push_back( new Tristeza{tristeza} ); }
    
private:
    std::vector<Emocao*> m_emocoes;
};