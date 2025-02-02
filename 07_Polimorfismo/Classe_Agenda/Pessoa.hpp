#pragma once

#include <iostream>
#include <string>

class Pessoa{
public:
    // Construtor
    Pessoa(const std::string nome = "Nenhum", const std::string endereco = "Nenhum", const std::string email = "Nenhum");
    
    // Destrutor
    virtual ~Pessoa() { std::cout << "Destruindo!" << std::endl; }

    // Métodos get()
    std::string getNome() const { return m_nome; }
    std::string getEndereco() const { return m_endereco; }
    std::string getEmail() const { return m_email; }

    // Métodos set()
    void setNome(const std::string nome);
    void setEndereco(const std::string endereco);
    void setEmail(const std::string email);

    // Método especial da classe
    virtual void apresentar() const = 0;

private:
    std::string m_nome;
    std::string m_endereco;
    std::string m_email;
};