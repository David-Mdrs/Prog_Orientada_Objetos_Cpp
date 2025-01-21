#include "Item.hpp"

Item::Item(string id, string descricao, int quantidade, double preco){
    setId(id);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}

string Item::getId() const {
    return m_id;
}
void Item::setId(string id){
    m_id = id;
}

string Item::getDescricao() const {
    return m_descricao;
}
void Item::setDescricao(string descricao){
    m_descricao = descricao;
}

int Item::getQuantidade() const {
    return m_quantidade;
}
void Item::setQuantidade(int quantidade){
    m_quantidade = (quantidade <= 0 ? 0 : quantidade);
}

double Item::getPreco() const {
    return m_preco;
}
void Item::setPreco(double preco){
    m_preco = (preco <= 0 ? 0 : preco);
}