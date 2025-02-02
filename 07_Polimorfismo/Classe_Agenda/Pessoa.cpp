#include "Pessoa.hpp"

Pessoa::Pessoa(const std::string nome, const std::string endereco, const std::string email) {
    setNome(nome);
    setEndereco(endereco);
    setEmail(email);
}

void Pessoa::setNome(std::string nome) {
    m_nome = (nome.empty() ? "Sem registro" : nome); 
}

void Pessoa::setEndereco(const std::string endereco) {
    m_endereco = (endereco.empty() ? "Sem registro" : endereco); 

}
void Pessoa::setEmail(const std::string email) {
    m_email = (email.empty() ? "Sem registro" : email); 
}
