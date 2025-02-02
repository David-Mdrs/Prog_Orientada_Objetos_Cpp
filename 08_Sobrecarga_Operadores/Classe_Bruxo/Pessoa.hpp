#pragma once 

#include <string>

class Pessoa {
public:
    // Construtor
    Pessoa(const std::string nome) { setNome(nome); }
    
    // Método get()
    std::string getNome() const { return m_nome; }
    
    // Método set()
    void setNome(const std::string nome) { m_nome = (nome.empty() ? "Nenhum" : nome); }
    
    // Método virtual puro
    virtual void display() const = 0;
    
protected:
    std::string m_nome;
};