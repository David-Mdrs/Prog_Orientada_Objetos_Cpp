#pragma once

#include <string>
using std::string;

class Cupom{
public:
    Cupom(string id, string descricao, int quantidade, double preco);

    string getId() const;
    void setId(string id);
    
    string getDescricao() const;
    void setDescricao(string descricao);
    
    int getQuantidade() const;
    void setQuantidade(int quantidade);
    
    double getPreco() const;
    void setPreco(double preco);

    double calculaCupom() const;
    
    string dados() const;

private:
    string m_id;
    string m_descricao;
    int m_quantidade;
    double m_preco;
};