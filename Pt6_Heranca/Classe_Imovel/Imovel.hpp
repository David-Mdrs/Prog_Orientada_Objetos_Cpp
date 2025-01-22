#pragma once

#include <iostream>
#include <string>

class Imovel {
public:
    // Construtor
    Imovel(const std::string endereco = "Nenhum", const double preco = 0.0)
    : m_endereco{endereco}, m_preco{preco} {}

    // Métodos set()
    void setEndereco(const std::string endereco) { m_endereco = endereco; }
    void setPreco(const double preco) { m_preco = preco; }
    
    // Métodos get()
    std::string endereco() const { return m_endereco; }
    double preco() const { return m_preco; }
    
    void dados() const;

protected:
    std::string m_endereco;
    double m_preco;
};