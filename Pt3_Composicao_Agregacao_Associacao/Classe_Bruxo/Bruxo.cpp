#include "Bruxo.hpp"

Bruxo::Bruxo(const string nome, const string casa, const string feitico){
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