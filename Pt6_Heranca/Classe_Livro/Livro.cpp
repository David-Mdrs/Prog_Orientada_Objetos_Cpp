#include "Livro.hpp"

Livro::Livro(const std::string titulo, int ano, int paginas, const std::string conteudo)
    : m_titulo{titulo}, m_ano{ano}, m_paginas{paginas}, m_conteudo{conteudo} {}

void Livro::ler() const {
    std::cout << "Título: " << m_titulo << std::endl <<
        "Ano: " << m_ano << std::endl <<
        "Paginas: " << m_paginas << std::endl <<
        "Conteudo: " << m_conteudo << std::endl;
}