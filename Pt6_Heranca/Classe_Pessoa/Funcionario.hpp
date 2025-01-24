#pragma once

#include <iostream>
#include <string>
#include "PessoaFisica.hpp"

class Funcionario : public PessoaFisica {
public:
    // Construtor
    Funcionario(const std::string nome, const std::string cpf,
        const std::string matricula, const double salario,
        const double cargaHoraria, const double qntHorasMes);

    // Métodos get()
    std::string getMatricula() const { return m_matricula; }
    double getSalario() const { return m_salario; }
    double getCargaHoraria() const { return m_cargaHoraria; }
    double getQntHorasMes() const { return m_qntHorasMes; }
    
    // Métodos set()
    void setMatricula (const std::string matricula);
    void setSalario (const double salario);
    void setCargaHoraria (const double cargaHoraria);
    void setQntHorasMes (const double qntHorasMes);
    
    // Métodos especiais da classe
    void apresentar() const;
    double salarioBruto() const;
    
    // Sobrecarga de "<<" para imprimir dados
    friend std::ostream& operator<<(std::ostream &out, const Funcionario &funcionario);

private:
    std::string m_matricula;
    double m_salario;
    double m_cargaHoraria;
    double m_qntHorasMes;
};