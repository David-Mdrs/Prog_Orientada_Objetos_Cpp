#pragma once

#include <iostream>
#include "Imovel.hpp"

class ImovelVelho : public Imovel {
public:
    // Construtor
    ImovelVelho(const std::string endereco = "Nenhum", const double preco = 0.0, const double desconto = 0.0)
    : Imovel{endereco, preco}, m_desconto{desconto} {} 
    
    // Método set()
    void setDesconto(const double desconto);
    
    // Métodos get()
    double getDesconto() const { return m_desconto; }
    double getValorTotal() const { return (m_preco * ((100 - m_desconto) / 100)); }
    
    // Método especial da classe
    void dados() const;
private:
    double m_desconto;
};