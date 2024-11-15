#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Item.hpp"

using std::string, std::vector;

class Cupom{
public:
    void addItem(string id, string descricao, int quantidade, double preco);

    string get(string id) const;
    
    double calculaCupom();
    
    void imprimirNota();

private:
    vector<Item> itens;
};