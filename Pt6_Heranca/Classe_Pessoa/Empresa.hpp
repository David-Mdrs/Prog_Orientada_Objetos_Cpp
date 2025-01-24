#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "PessoaJuridica.hpp"

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Empresa : public PessoaJuridica {
public:
    // Construtor
    Empresa(const std::string nome, const std::string cnpj, const std::string razaoSocial)
    : PessoaJuridica{nome, cnpj, razaoSocial} {}

    // Métodos get()
    std::vector<Funcionario> getFuncionarios() const { return m_listaFunc; }
    std::vector<Cliente> getClientes() const { return m_listaCli; }
    
    // Métodos especiais da classe
    void addFuncionario(const Funcionario &funcionario) { m_listaFunc.push_back(funcionario); }
    void addCliente(const Cliente &cliente) { m_listaCli.push_back(cliente); }
    
    // Métodos especiais da classe
    void apresentar() const;
    void apresentarFunc() const;
    void apresentarCli() const;

private:
    std::vector<Funcionario> m_listaFunc;
    std::vector<Cliente> m_listaCli;
};