#pragma once 

#include <iostream>
#include <string>
#include "Pessoa.hpp"

class Trouxa : public Pessoa {
public:
    // Construtor
    Trouxa(const std::string nome, const std::string cpf, const std::string emprego)
    : Pessoa{nome} { setCpf(cpf); setEmprego(emprego); }
    
    // Métodos get()
    std::string getCpf() const { return m_cpf; } 
    std::string getEmprego() const { return m_emprego; }
    
    // Métodos set()
    void setCpf(const std::string cpf) { m_cpf = (cpf.empty() ? "Nenhum" : cpf); }
    void setEmprego(const std::string emprego) { m_emprego = (emprego.empty() ? "Nenhum" : emprego); }
    
    // Método virtual derivado
    void display() const override {
        std::cout << ">>>>>>> TROUXA <<<<<<<" << std::endl <<
        " Nome:    " << getNome() << std::endl <<
        " Cpf:     " << getCpf() << std::endl <<
        " Emprego: " << getEmprego() << std::endl << std::endl; }
    
private:
    std::string m_cpf;
    std::string m_emprego;

};