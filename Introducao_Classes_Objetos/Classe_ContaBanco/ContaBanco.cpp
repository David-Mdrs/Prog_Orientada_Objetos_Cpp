#include "ContaBanco.hpp"

ContaBanco::ContaBanco(double saldo){
    setSaldo(saldo);
}

double ContaBanco::getSaldo() const {
    return m_saldo;
}
void ContaBanco::setSaldo(double saldo){
    m_saldo = (saldo <= 0 ? 0 : saldo);
}

void ContaBanco::creditar(double valor){
    if(valor > 0){
        m_saldo += valor;
    }
}

void ContaBanco::debitar(double valor){
    if(m_saldo - valor > 0){
        m_saldo -= valor;
    } else {
        std::cout << "Saldo insuficiente!" << std::endl;
    }
}