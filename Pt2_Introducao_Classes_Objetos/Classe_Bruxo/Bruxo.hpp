#pragma once

#include <iostream>
#include <string>
using std::string;

class Bruxo{
public:
    Bruxo(string nome, string casa, string feitico);

    string getNome() const;
    void setNome(string nome);
    
    string getCasa() const;
    void setCasa(string casa);

    string getFeitico() const;
    void setFeitico(string feitico);
    
    void lancarFeitico();
    
    string dados() const;
    
private:
    string m_nome;
    string m_casa;
    string m_feitico;
};