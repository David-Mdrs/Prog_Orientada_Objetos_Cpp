#pragma once 

#include <iostream>
#include <string>
#include "Pessoa.hpp"

class Bruxo : public Pessoa {
public:
    // Construtor
    Bruxo(const std::string nome, const std::string casa, const std::string feitico)
    : Pessoa{nome} { setCasa(casa); setFeitico(feitico); }
    
    // Métodos get()
    std::string getCasa() const { return m_casa; } 
    std::string getFeitico() const { return m_feitico; } 
    
    // Métodos set()
    void setCasa(const std::string casa) { m_casa = (casa.empty() ? "Nenhum" : casa); }
    void setFeitico(const std::string feitico) { m_feitico = (feitico.empty() ? "Nenhum" : feitico); }
    
    // Método virtual derivado
    void display() const override {
        std::cout << ">>>>>>> BRUXO <<<<<<<<" << std::endl <<
        " Nome:    " << getNome() << std::endl <<
        " Casa:    " << getCasa() << std::endl <<
        " Feitico: " << getFeitico() << std::endl << std::endl; }
    
private:
    std::string m_casa;
    std::string m_feitico;
};