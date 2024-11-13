#pragma once

#include <string>
using std::string;

class Empregado{
public:
    Empregado(string nome, string sobrenome, double salario);
    
    string getNome() const ;
    void setNome(string nome);
    
    string getSobrenome() const ;
    void setSobrenome(string sobrenome);
    
    double getSalario() const ;
    void setSalario(double salario);
    
    void aumento(double aumento);
    
    string dados() const;
private:
    string m_nome;
    string m_sobrenome;
    double m_salario;
};