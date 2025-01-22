#pragma once

#include <string>
#include "CapaBruxo.hpp"

using std::string;

class CapaBruxo{
public:
    CapaBruxo();
        
    CapaBruxo(const float tamanho, const string casa);

    float getTamanho() const { return m_tamanho; }
    string getCasa() const {return m_casa; }
    string getCor() const {return m_cor; }
    
    void setTamanho(const float tamanho) { m_tamanho = (tamanho <= 0 ? 0 : tamanho); }
    void setCasa(const string casa);
    
    void display() const;

private:
    float m_tamanho;
    string m_casa;
    string m_cor;

    void setCor(const string cor);
};