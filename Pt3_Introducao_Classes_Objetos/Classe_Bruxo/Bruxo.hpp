#pragma once

#include <iostream>
#include <string>

using std::string;

class Bruxo{
public:
    // Construtor
    Bruxo(const string nome, const string casa, const string feitico);
    
    // Métodos get()
    string getNome() const { return m_nome; }
    string getCasa() const { return m_casa; }
    string getFeitico() const { return m_feitico; }
    
    // Métodos set()
    void setNome(const string nome) { m_nome = (nome.empty() ? "Nenhum" : nome); }
    void setCasa(const string casa);
    void setFeitico(const string feitico) { m_feitico = (feitico.empty() ? "Nenhum" : feitico); }
    
    // Métodos especiais
    void lancarFeitico() const { std::cout << "Lançando feitiço " << m_feitico << std::endl; }
    string dados() const { return "Nome: " + m_nome + "\nCasa: " + m_casa + "\nFeitico: " + m_feitico + "\n"; }
    
private:
    string m_nome;
    string m_casa;
    string m_feitico;
};
