#pragma once

#include <iostream>
#include <string>

using std::string;

class Varinha{
public:
    Varinha(string madeira, string nucleo, float comprimento);
    
    string getTipoMadeira() const { return m_tipoMadeira; }
    string getNucleo() const { return m_nucleo; }
    float getComprimento() const { return m_comprimento; }

    void setTipoMadeira(string madeira) { m_tipoMadeira = madeira; }
    void setNucleo(string nucleo) { m_nucleo = nucleo; }
    void setComprimento(float comprimento) { m_comprimento = comprimento; }
    
    void display() const;

private:
    string m_tipoMadeira;
    string m_nucleo;
    float m_comprimento;
};