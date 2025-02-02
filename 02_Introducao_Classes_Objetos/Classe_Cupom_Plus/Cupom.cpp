#include "Item.hpp"
#include "Cupom.hpp"

using std::string, std::vector;

void Cupom::addItem(string id, string descricao, int quantidade, double preco){
    Item item(id, descricao, quantidade, preco);
    itens.push_back(item);
}

string Cupom::get(string id) const {
    for(int i = 0; i < itens.size(); i++){
        if(itens[i].getId() == id){
            return itens[i].getDescricao();
        }
    }
    return "";
}

double Cupom::calculaCupom(){
    double contador{0};
    for(int i = 0; i < itens.size(); i++){
        contador += itens[i].getQuantidade() * itens[i].getPreco();
    }
    return contador;
}

void Cupom::imprimirNota(){
    std::cout << "=========================== Imprimindo Nota ===========================" << std::endl << std::endl;
    for (int i = 0; i < itens.size(); i++) {
        std::cout << "ID: " << itens[i].getId()
                  << ", Descrição: " << itens[i].getDescricao()
                  << ", Quantidade: " << itens[i].getQuantidade()
                  << ", Preço: " << itens[i].getPreco()
                  << ", Total produto: " << itens[i].getQuantidade() * itens[i].getPreco() << std::endl << std::endl;
    }
    std::cout << "Valor total da nota: " << calculaCupom() << std::endl;
    
}