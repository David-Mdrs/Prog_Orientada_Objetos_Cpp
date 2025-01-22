#include "Imovel.hpp"

void Imovel::dados() const {
    std::cout << "========== Dados do Imóvel ==========" <<
    "\nEndereço:  " << m_endereco <<
    "\nPreço:     " << m_preco << std::endl;
}