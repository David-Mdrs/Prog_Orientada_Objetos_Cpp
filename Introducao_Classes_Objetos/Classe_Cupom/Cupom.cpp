#include "Cupom.hpp"

Cupom::Cupom(string id, string descricao, int quantidade, double preco){
    setId(id);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}

string Cupom::getId() const {
    return m_id;
}
void Cupom::setId(string id){
    m_id = id;
}

string Cupom::getDescricao() const {
    return m_descricao;
}
void Cupom::setDescricao(string descricao){
    m_descricao = descricao;
}

int Cupom::getQuantidade() const {
    return m_quantidade;
}
void Cupom::setQuantidade(int quantidade){
    m_quantidade = (quantidade <= 0 ? 0 : quantidade);
}

double Cupom::getPreco() const {
    return m_preco;
}
void Cupom::setPreco(double preco){
    m_preco = (preco <= 0 ? 0 : preco);
}

double Cupom::calculaCupom() const {
    return (m_quantidade * m_preco);
}

string Cupom::dados() const {
    return "Id: " + m_id + "\nDescrição: " + m_descricao +
    "\nQuantidade: " + std::to_string(m_quantidade) +
    "\nPreço: " + std::to_string(m_preco);
}