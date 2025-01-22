#pragma once

#include <iostream>
#include <string>

using std::string;

class Varinha{
public:
    Varinha(const string madeira, const string nucleo, const float comprimento);
    
    string getTipoMadeira() const { return m_tipoMadeira; }
    string getNucleo() const { return m_nucleo; }
    float getComprimento() const { return m_comprimento; }

    void setTipoMadeira(const string madeira) { m_tipoMadeira = (madeira.empty() ? "Nenhum" : madeira); }
    void setNucleo(const string nucleo) { m_nucleo = (nucleo.empty() ? "Nenhum" : nucleo); }
    void setComprimento(const float comprimento) { m_comprimento  = (comprimento <= 0 || comprimento > 40 ? 0 : comprimento); }
    
    void display() const;

private:
    string m_tipoMadeira;
    string m_nucleo;
    float m_comprimento;
};