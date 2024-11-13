#include "Bruxo.hpp"

Bruxo::Bruxo(string nome, string casa, string feitico){
    setNome(nome);
    setCasa(casa);
    setFeitico(feitico);
}

string Bruxo::getNome() const {
    return m_nome;
}
void Bruxo::setNome(string nome){
    m_nome = (nome.empty() ? "Indeterminado!" : nome);
}

string Bruxo::getCasa() const {
    return m_casa;
}
void Bruxo::setCasa(string casa){
    if (casa == "Grifinoria" || casa == "Sonserina" || casa == "LufaLufa" || casa == "Corvinal"){
        m_casa = casa;
    } else {
        m_casa = "Vazia!";
    }
}

string Bruxo::getFeitico() const {
    return m_feitico;
}
void Bruxo::setFeitico(string feitico){
    m_feitico = (feitico.empty() ? "Indeterminado!" : feitico);
}

void Bruxo::lancarFeitico(){
    std::cout << "Lançando feitiço " << m_feitico << std::endl;
}

string Bruxo::dados() const {
    return "Nome: " + m_nome + "\nCasa: " + m_casa + "\nFeitico: " + m_feitico + "\n";
}