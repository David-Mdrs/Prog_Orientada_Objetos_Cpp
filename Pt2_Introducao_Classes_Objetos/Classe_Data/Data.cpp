#include "Data.hpp"

using std::string;

Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

int Data::getDia() const {
    return m_dia;
}
void Data::setDia(int dia){
    m_dia = (dia > 31 ? 1 : dia);
}

int Data::getMes() const {
    return m_mes;
}
void Data::setMes(int mes){
    m_mes = (mes > 12 ? 1 : mes);
}

int Data::getAno() const {
    return m_ano;
}
void Data::setAno(int ano){
    m_ano = ano;
}

string Data::dados(){
    return std::to_string(m_dia) + " / " + std::to_string(m_mes) + " / " + std::to_string(m_ano);
}