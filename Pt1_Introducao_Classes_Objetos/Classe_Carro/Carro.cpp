#include "Carro.hpp"

Carro::Carro(string marca, string modelo, int ano) {		
	setMarca(marca);
	setModelo(modelo);
	setAno(ano);
}
	
string Carro::getMarca() const {
	return m_marca;
}
void Carro::setMarca(string marca){
	m_marca = ( marca.empty() ? "\"Sem marca\"" : marca );
}
	
string Carro::getModelo() const {
	return m_modelo;
}
void Carro::setModelo(string modelo){
	m_modelo = ( modelo.empty() ? "\"Sem modelo\"" : modelo );
}

int Carro::getAno() const {
    return m_ano;
}
void Carro::setAno(int ano){
    m_ano = (ano <= 0 ? 0 : ano);
}

string Carro::toString() const {
    return "Marca: " + m_marca + ", Modelo: " + m_modelo + ", Ano: " + std::to_string(m_ano);
}
