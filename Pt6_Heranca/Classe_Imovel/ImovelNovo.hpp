#pragma once

#include <iostream>
#include "Imovel.hpp"

class ImovelNovo : public Imovel {
public:
    // Construtor
    ImovelNovo(const std::string endereco = "Nenhum", const double preco = 0.0, const double aumento = 0.0)
    : Imovel{endereco, preco}, m_aumento{aumento} {} 
    
    // Método set()
    void setAumento(const double aumento);
    
    // Métodos get()
    double getAumento() const { return m_aumento; }
    double getValorTotal() const { return (m_preco * m_aumento); }
    
    // Método especial da classe
    void dados() const;
private:
    double m_aumento;
};