#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string cpf, string validade) {
    setNome(nome);
    setCpf(cpf);
}

string Pessoa::getNome() const {
    return m_nome;
}
void Pessoa::setNome(string nome) {
    m_nome = (nome.empty() ? "Sem registro" : nome); 
}

string Pessoa::getCpf() const {
    return m_cpf;
}
void Pessoa::setCpf(string cpf) {
    m_cpf = (cpf.size() == 11 ? cpf : "00000000000");
    setCpfValido();
}

string Pessoa::apresentar() const {
    return format("{} | {}", m_cpf, m_cpfValido);
}

void Pessoa::setCpfValido() {
    m_cpfValido = (m_cpf.size() == 11 && m_cpf != "00000000000" ? "Válido" : "Inválido");
}
