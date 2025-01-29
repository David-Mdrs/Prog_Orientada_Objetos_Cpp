#pragma once 

#include <vector>
#include "Bruxo.hpp"
#include "Trouxa.hpp"

class ExpressoHogwarts {
public:
    // Construtor
    ExpressoHogwarts() { std::cout << "!!! EXPRESSO DE HOGWARTS PRONTO PARA EMBARQUE !!!" << std::endl << std::endl; }
    
    // Método da classe
    int getTamanho() const { return m_expresso.size(); }
    void display() const {
        if (getTamanho() <= 0) {
            std::cout << "!!!! EXPRESSO DE HOGWARTS SEM PASSAGEIROS !!!!" << std::endl << std::endl;
        } else {
            std::cout << ">>>> PASSAGEIROS DO EXPRESSO DE HOGWARTS <<<<" << std::endl << std::endl;
            for (int i = 0; i < getTamanho(); i++) {
                m_expresso[i]->display();
            }
        }
    }
    
    // Operadores de bitwise sobrecarregados
    void operator<<(const Bruxo &bruxo) {
        if (getTamanho() < 100) {
            m_expresso.push_back( new Bruxo{bruxo} );
            std::cout << bruxo.getNome() << " EMBARCOU" << std::endl << std::endl;
            return;
        }
        std::cout << "EXPRESSO HOGWARTS CHEIO !!!" << std::endl <<
        bruxo.getNome() << " NÃO EMBARCOU !!" << std::endl << std::endl;
    }
    void operator<<(const Trouxa &trouxa) {
        if (getTamanho() < 100) {
            m_expresso.push_back( new Trouxa{trouxa} );
            std::cout << trouxa.getNome() << " EMBARCOU" << std::endl << std::endl;
            return;
        }
        std::cout << "EXPRESSO HOGWARTS CHEIO !!!" << std::endl <<
        trouxa.getNome() << " NÃO EMBARCOU !!" << std::endl << std::endl;
    }
    
    void operator>>(const std::string nome) {
        for(int i = 0; i < getTamanho(); i++) {
            if (m_expresso[i]->getNome() == nome) {
                delete m_expresso[i];
                m_expresso.erase(m_expresso.begin() + i);
                std::cout << "Passageiro(a) " << nome << " removido(a) !!" << std::endl << std::endl;
                return;
            }
        }
        std::cout << "Passageiro(a) " << nome << " não encontrado(a) !!" << std::endl << std::endl;
    }

private:
    std::vector<Pessoa*> m_expresso;
};