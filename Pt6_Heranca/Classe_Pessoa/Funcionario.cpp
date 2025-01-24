#include "Empresa.hpp"

// Métodos especiais da classe
void Empresa::apresentar() const {
    std::cout << "============== EMPRESA =============" << std::endl <<
    "Nome: " << getNome() << std::endl <<
    "Cnpj: " << getCnpj() << std::endl <<
    "Razão Social: " << getRazaoSocial() << std::endl <<std::endl;
}
void Empresa::apresentarFunc() const {
    if (getFuncionarios().size() == 0) {
        std::cout << "======== NÃO HÁ FUNCIONÁRIOS ========" << std::endl << std::endl;
        return;
    }
    std::cout << "============ FUNCIONÁRIOS ===========" << std::endl;
    for(int i = 0; i < getFuncionarios().size(); i++) {
        std::cout << "Nome: " << getFuncionarios()[i].getNome() << std::endl <<
        "Cpf: " << getFuncionarios()[i].getCpf() << std::endl << std::endl;
    }
}
void Empresa::apresentarCli() const {
    if (getClientes().size() == 0) {
        std::cout << "========== NÃO HÁ CLIENTES ==========" << std::endl << std::endl;
        return;
    }
    std::cout << "============== Clientes =============" << std::endl;
    for(int i = 0; i < getClientes().size(); i++) {
        std::cout << "Nome: " << getClientes()[i].getNome() << std::endl <<
        "Cpf: " << getClientes()[i].getCpf() << std::endl << std::endl;
    }
}