//include guard
//header guard
//progegendo o cabeçalho contra múltiplas inclusões
#pragma once

#include <string>
using std::string;

class Carro {
public:
	Carro(string marca, string modelo, int ano);
	
	string getMarca() const;
	void setMarca(string marca);
		
	string getModelo() const;
	void setModelo(string modelo);
	
	int getAno() const;
	void setAno(int ano);
	
	string toString() const;
private:
	string m_marca;
	string m_modelo;
	int m_ano;
};
