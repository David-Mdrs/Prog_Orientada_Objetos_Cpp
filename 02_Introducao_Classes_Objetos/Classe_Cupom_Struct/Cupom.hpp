#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::string, std::vector;

typedef struct Item {
    string id;
    string descricao;
    int quantidade;
    double preco;
    
    Item(string itemId, string itemDescricao, int itemQuantidade, double itemPreco);
} Item;

class Cupom {
public:
    void addItem(string id, string descricao, int quantidade, double preco);

    string get(string id) const;
    
    double calculaCupom() const;
    
    void imprimirNota() const;

private:
    vector<Item> m_itens;
};