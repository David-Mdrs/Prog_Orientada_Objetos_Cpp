#include "Cupom.hpp"

using std::string, std::vector;

Item::Item(string itemId, string itemDescricao, int itemQuantidade, double itemPreco)
    : id(itemId), descricao(itemDescricao), quantidade(itemQuantidade), preco(itemPreco) {
        
        id = (itemId == "" ? "Inválido" : itemId);
        descricao = (itemDescricao == "" ? "Inválido" : itemDescricao);
        quantidade = (itemQuantidade <= 0 ? 0 : itemQuantidade);
        preco = (itemPreco <= 0 ? 0 : itemPreco);
    }

void Cupom::addItem(string id, string descricao, int quantidade, double preco) {
    if (m_itens.size() < 20) {
        Item novoItem{id, descricao, quantidade, preco};
        m_itens.push_back(novoItem);
    } else {
        std::cout << "Cupom cheio!" << std::endl;
    }
}

string Cupom::get(string id) const {
    for (int i = 0; i < m_itens.size(); i++) {
        if (m_itens[i].id == id){
            return m_itens[i].descricao;
        }
    }
    return "Não encontrado!";
}

double Cupom::calculaCupom() const {
    double contador{0};
    for (int i = 0; i < m_itens.size(); i++) {
        contador +=  m_itens[i].quantidade * m_itens[i].preco;
    }
    return contador;
}

void Cupom::imprimirNota() const {
    std::cout << "=========================== Imprimindo Nota ===========================" << std::endl << std::endl;
    for (int i = 0; i < m_itens.size(); i++) {
        std::cout << "ID: " << m_itens[i].id
                  << " | Descrição: " << m_itens[i].descricao
                  << " | Quantidade: " << m_itens[i].quantidade
                  << " | Preço: " << m_itens[i].preco
                  << " | Total produto: " << m_itens[i].quantidade * m_itens[i].preco << std::endl << std::endl;
    }
    std::cout << "Valor total da nota: " << calculaCupom() << std::endl;
}