#include <iostream>
#include <string>
#include "CapaBruxo.hpp"

using std::string;

CapaBruxo::CapaBruxo() 
    : m_tamanho{0}, m_casa{"Nenhum"} {
}

CapaBruxo::CapaBruxo(float tamanho, std::string casa) 
    : m_tamanho{0}, m_casa{"Nenhum"} {
    setTamanho(tamanho);
    setCasa(casa);
}

void CapaBruxo::setCasa(const string casa) {
    if (casa == "Grifinória") {
        setCor("Vermelho");
    } else if (casa == "Sonserina") {
        setCor("Verde");
    } else if (casa == "Corvinal") {
        setCor("Azul");
    } else if (casa == "Lufa-Lufa") {
        setCor("Amarelo");
    } else {
        m_casa = "Nenhum";
        setCor("Nenhum");
        return;
    }
    m_casa = casa;
}

void CapaBruxo::display() const {
    std::cout << "Tamanho: " << m_tamanho <<
    " | Casa: " << m_casa <<
    " | Cor: " << m_cor << std::endl;
}

void CapaBruxo::setCor(const string cor) {
    m_cor = cor;
}