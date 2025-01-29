#pragma once

#include <string>

// Classe Abstrata
class Emocao {
public:
    // Construtor
    Emocao(const std::string nome, const bool ativa = false) { setNome(nome); }
    
    // Destrutor
    virtual ~Emocao() {}
    
    // Métodos get()
    std::string getNome() const { return m_nome; }
    bool getAtiva() const { return m_ativa; }
    
    // Métodos set()
    void setNome(const std::string nome) { m_nome = (nome.empty() ? "Nenhum" : nome); }
    void setAtiva(const bool ativa) { m_ativa = ativa; }

    // Método especial da classe
    bool estaAtiva() const { return getAtiva(); }

    // Método virtual puro
    virtual void processar(const std::string descricao) = 0;
    
private:
    std::string m_nome;
    bool m_ativa;
};