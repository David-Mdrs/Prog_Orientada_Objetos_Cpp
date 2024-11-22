#pragma once

#include <string>
#include <format>

using std::string, std::format;

class Pessoa{
public:

    Pessoa(string nome, string cpf = "00000000000");

    string getNome() const;
    void setNome(string nome);
    
    string getCpf() const;
    void setCpf(string cpf);
    
    string apresentar() const;

private:

    string m_nome;
    string m_cpf;
    bool m_cpfValido;
};