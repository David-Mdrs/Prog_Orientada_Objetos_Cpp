#include <iostream>
#include "Bruxo.hpp"

Bruxo::Bruxo(const string nome, const string casa, const string feitico, Varinha *varinha, CapaBruxo *capa)
    : m_nome(nome), m_casa(casa), m_varinha(varinha), m_capa(capa) {
        setNome(nome);
        setCasa(casa);
        setFeitico(feitico);
    }

void Bruxo::setCasa(const string casa){
    if (casa == "Grifinoria" || casa == "Sonserina" || casa == "LufaLufa" || casa == "Corvinal"){
        m_casa = casa;
    } else {
        m_casa = "Vazia!";
    }
}

void Bruxo::dados() const {
    std::cout << "========== Dados do Bruxo ==========" <<
    "\nNome:    " << m_nome <<
    "\nCasa:    " << m_casa <<
    "\nFeitico: " << m_feitico <<
    "\nVarinha: " << (m_varinha ? "Possui" : "Nenhum") <<
    "\nCapa:    " << (m_capa ? "Possui" : "Nenhum") <<
    std::endl << std::endl;
    
}
