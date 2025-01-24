#include "Empresa.hpp"

// Métodos especiais da classe
void Empresa::apresentar() const {
    std::cout << "============== EMPRESA =============" << std::endl <<
    "Nome: " << getNome() << std::endl <<
    "Cnpj: " << getCnpj() << std::endl <<
    "Razão Social: " << getRazaoSocial() << std::endl <<std::endl;
}
void Empresa::apresentarFunc() const {
    std::cout << "============ FUNCIONÁRIOS ===========" << std::endl;
    for(int i = 0; i < m_listaFunc.size(); i++) {
        std::cout << "Nome: " << m_listaFunc[i].getNome() << std::endl <<
        "Cpf: " << m_listaFunc[i].getCpf() << std::endl << std::endl;
    }
}
void Empresa::apresentarCli() const {
    std::cout << "============== Clientes =============" << std::endl;
    for(int i = 0; i < m_listaCli.size(); i++) {
        std::cout << "Nome: " << m_listaCli[i].getNome() << std::endl <<
        "Cpf: " << m_listaCli[i].getCpf() << std::endl << std::endl;
    }
}