#include "ImovelNovo.hpp"

void ImovelNovo::setAumento(const double aumento) {
    m_aumento = ((aumento > 0 && aumento < 100) ? aumento : 0);
}

void ImovelNovo::dados() const {
    std::cout << "========== Dados do Imóvel ==========" <<
    "\nEndereço:    " << m_endereco <<
    "\nPreço:       " << m_preco << " R$" <<
    "\nAumento:     " << m_aumento << "%" <<
    "\nPreço total: " << (m_preco * ((m_aumento + 100) / 100)) << " R$" << std::endl << std::endl;
}