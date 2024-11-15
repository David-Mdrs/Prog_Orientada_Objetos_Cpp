#pragma once

#include <string>
using std::string;

class Data {
public:
    Data(int dia, int mes, int ano);

    int getDia() const;
    void setDia(int dia);
    
    int getMes() const;
    void setMes(int mes);
    
    int getAno() const;
    void setAno(int ano);
    
    string dados();

private:
    int m_dia;
    int m_mes;
    int m_ano;
};