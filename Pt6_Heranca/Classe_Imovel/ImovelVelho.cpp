#include "ImovelVelho.hpp"

void ImovelVelho::setDesconto(const double desconto) {
    m_desconto = ((desconto > 0 && desconto < 100) ? desconto : 0);
}

void ImovelVelho::dados() const {
    std::cout << "========== Dados do Imóvel ==========" <<
    "\nEndereço:    " << m_endereco <<
    "\nPreço:       " << m_preco << " R$" <<
    "\nDesconto:    " << m_desconto << "%" <<
    "\nPreço total: " << (m_preco * ((100 - m_desconto) / 100)) << " R$" << std::endl << std::endl;
}