#pragma once

#include <iostream>
#include <string>

class Livro{
public:
    // Construtor
    Livro(const std::string titulo = "Nenhum", int ano = 0, int paginas = 0, const std::string conteudo = "Nenhum");
    
    // Métodos set()
    void setTitulo(const std::string titulo) { m_titulo = titulo; }
    void setAno(const int ano) { m_ano = ano; }
    void setPaginas(const int paginas) { m_paginas = paginas; }
    void setConteudo(const std::string conteudo) { m_conteudo = conteudo; }

    // Métodos get()
    std::string getTitulo() const { return m_titulo; }
    int getAno() const { return m_ano; }
    int getPaginas() const { return m_paginas; }
    std::string getConteudo() const { return m_conteudo; }
    
    // Métodos especiais da classe
    void ler() const;
    
private:
    std::string m_titulo;
    int m_ano;
    int m_paginas;
    std::string m_conteudo;
};