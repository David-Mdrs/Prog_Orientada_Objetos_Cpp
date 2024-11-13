#include "Empregado.hpp"

Empregado::Empregado(string nome, string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

string Empregado::getNome(){
    return m_nome;
}
void Empregado::setNome(string nome){
    m_nome = (nome.empty() ? "Indefinido!" : nome);
}

string Empregado::getSobrenome(){
    return m_sobrenome;
}
void Empregado::setSobrenome(string sobrenome){
    m_sobrenome = (sobrenome.empty() ? "Indefinido!" : sobrenome);
}

double Empregado::getSalario(){
    return m_salario;

}
void Empregado::setSalario(double salario){
    m_salario = (salario <= 0 ? 0 : salario);
}
void Empregado::aumento(double aumento){
    m_salario = m_salario * ((100 + aumento) / 100);
}

string Empregado::dados() const {
    return m_nome + ' ' + m_sobrenome + ' ' + std::to_string(m_salario);
}