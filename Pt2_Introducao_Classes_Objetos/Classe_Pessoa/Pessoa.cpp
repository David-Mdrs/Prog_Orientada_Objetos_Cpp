#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string cpf) {
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
    m_cpfValido = false;
    
    // Tamanho inválido
    if (cpf.size() != 11){
        m_cpf = "00000000000";
        return;
    }
    
    m_cpf = cpf;
    int contador{0};
    
    // Somando elementos para teste
    for(int i = 0; i < 9; i++){
        contador += ((cpf[i]-'0') * (10 - i));
    }
    contador = (contador * 10) % 11;
    if(contador == 10) contador = 0;
    
    // Validando primeiro dígito
    if(contador != cpf[9] - '0') return;
    
    contador = 0;
    // Somando elementos para teste
    for(int i = 0; i < 10; i++){
        contador += ((cpf[i]-'0') * (11 - i));
    }
    contador = (contador * 10) % 11;
    if(contador == 10) contador = 0;
    
    // Validando segundo dígito
    if(contador != cpf[10] - '0') return;

    // CPF válido, passou por todas as etapas
    m_cpfValido = true;
}

string Pessoa::apresentar() const {
    return format("{} | {} | {}", m_nome, m_cpf, m_cpfValido);
}