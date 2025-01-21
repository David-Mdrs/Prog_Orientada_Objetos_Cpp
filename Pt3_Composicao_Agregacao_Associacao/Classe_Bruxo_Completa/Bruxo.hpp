#pragma once

#include <iostream>
#include <string>
#include "Varinha.hpp"
#include "CapaBruxo.hpp"

using std::string;

class Bruxo{
public:
    // Construtores
    Bruxo(const string nome, const string casa, const string feitico, Varinha *varinha = nullptr, CapaBruxo *capa = nullptr);
    
    // Funções get()
    string getNome() const { return m_nome; }
    string getCasa() const { return m_casa; }
    string getFeitico() const { return m_feitico; }

    // Funções set()
    void setNome(const string nome) { m_nome = (nome.empty() ? "Nenhum" : nome); }
    void setCasa(const string casa);
    void setFeitico(const string feitico) { m_feitico = (feitico.empty() ? "Nenhum" : feitico); }
    void setVarinha(Varinha& varinha) { m_varinha = &varinha; }
    void setCapa(CapaBruxo& capa) { m_capa = &capa; }
    
    // Funções especiais
    void lancarFeitico() const { std::cout << "Lançando feitiço " << m_feitico << std::endl << std::endl; }
    void dados() const;

    
private:
    string m_nome;
    string m_casa;
    string m_feitico;
    Varinha *m_varinha;
    CapaBruxo *m_capa;
};
