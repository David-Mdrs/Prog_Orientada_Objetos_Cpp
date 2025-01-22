#include "Humano.hpp"

// Método especial da classe
void Humano::dados() const { std::cout << "========= Dados do Humano =========" <<
    "\nNome: " << m_nome <<
    "\nIdade: " << m_idade << std::endl  << std::endl;
}