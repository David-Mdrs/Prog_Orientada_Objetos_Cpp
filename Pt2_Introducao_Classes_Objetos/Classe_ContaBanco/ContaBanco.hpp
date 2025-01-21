#pragma once
#include <iostream>

class ContaBanco{
public:
    ContaBanco(double saldo);
    
    double getSaldo() const;
    void setSaldo(double saldo);
    
    void creditar(double valor);
    
    void debitar(double valor);
    
private:
    double m_saldo;
};