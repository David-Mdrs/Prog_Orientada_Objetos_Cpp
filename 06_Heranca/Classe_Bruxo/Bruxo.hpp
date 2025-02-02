#pragma once

#include <iostream>
#include <string>

#include "Humano.hpp"
#include "Varinha.hpp"
#include "CapaBruxo.hpp"

using std::string;

class Bruxo : public Humano{
public:
    // Construtores
    Bruxo(const string nome = "Nenhum", const int idade = 0, const string casa = "Nenhum", const string feitico = "Nenhum", Varinha *varinha = nullptr, CapaBruxo *capa = nullptr);
    
    // Funções get()
    string getCasa() const { return m_casa; }
    string getFeitico() const { return m_feitico; }

    // Funções set()
    void setCasa(const string casa);
    void setFeitico(const string feitico) { m_feitico = (feitico.empty() ? "Nenhum" : feitico); }
    void setVarinha(Varinha& varinha) { m_varinha = &varinha; }
    void setCapa(CapaBruxo& capa) { m_capa = &capa; }
    
    // Funções especiais
    void lancarFeitico() const { std::cout << "Lançando feitiço " << m_feitico << std::endl << std::endl; }
    void dados() const;

    
private:
    string m_casa;
    string m_feitico;
    Varinha *m_varinha;
    CapaBruxo *m_capa;
};
