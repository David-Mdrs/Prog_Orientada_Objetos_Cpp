#include <array>
#include <string>
#include "HugeInteger.hpp"

using std::array, std::string;

void HugeInteger::input(const string numero) {
    if(numero.size() <= 40) {                       // Apenas números menores que 40
        bool auxiliar{true};                        // Auxiliar para caractere alpha
        for(int i = 0; i < numero.size(); i++) {    // Interando sobre cada dígito
            if(!std::isdigit(numero[i])) {          // Caractere inválido
                auxiliar = false;                   // Acione o auxiliar
                break;                              // Pare de incrementar
            }
        }
        if(auxiliar) {                              // Numero válido
            int primeiroDigito = numero.find_first_not_of('0'); // Inserção de números com zero
            int i{primeiroDigito};
            while(m_numero[i] != '\0' || i < numero.size()) {   // Inserindo digitos
                m_numero[i-primeiroDigito] = (i < numero.size() ? numero[i] : '\0');
                i++;
            }
            m_tamanho = numero.size() - primeiroDigito;
        }
    }
    if (m_numero[0] == '\0') {              // Se não tiver valor
        m_numero[0] = '0';                  // Inicialize como 0
        m_tamanho = 0;
    }
}

string HugeInteger::output() const {
    string saida{};
    for(int i = 0; i < m_numero.size(); i++) {  // Interando sobre cada dígito
        saida += m_numero[i];                   // Concatenando dígitos na string de saída
    }
    return saida;
}

HugeInteger HugeInteger::add(const HugeInteger n) const {
    int digito1{0}, digito2{0};     // Variáveis auxiliares
    int tamanho1{getTamanho()}, tamanho2{n.getTamanho()}; // Variáveis auxiliares
    int soma{0}, complemento{0};    // Variáveis auxiliares para somar digitos
    string numero{};                // Variável auxiliar para receber novo número
    
    for (int i = 0; i < std::max(tamanho1, tamanho2); i++) {
        // Buscando dígitos considerando seus tamanhos
        digito1 = (tamanho1 - 1 - i >= 0) ? (output()[tamanho1 - 1 - i] - '0') : 0; 
        digito2 = (tamanho2 - 1 - i >= 0) ? (n.output()[tamanho2 - 1 - i] - '0') : 0;
    
        soma = digito1 + digito2 + complemento;         // Somando dígitos e o complemento
        if (soma < 10) {                                // Soma não ultrapassou 10
            numero.insert(0, 1, (char)(soma + '0'));    // Insira digito
            complemento = 0;                            // Desconte no complemeto
        } else {
            complemento = soma / 10;                        // Soma ultrapassou 10
            numero.insert(0, 1, (char)((soma % 10) + '0')); // Insira o último digito
        }
    }
    if (complemento > 0) {                              // Sobrou complemento?
        numero.insert(0, 1, (char)(complemento + '0')); // Insira no início do número
    }
    HugeInteger somatoria{numero};  // Criando novo objeto
    return somatoria;               // Retornando somatoria dos objetos
}

bool HugeInteger::isEqualTo(const HugeInteger n) const {
    if(getTamanho() == n.getTamanho()) {        // Analisando igualdade
        for(int i = 0; i < getTamanho(); i++) { // Interando sobre cada dígito
            if(output()[i] != n.output()[i]) {  // Analisando diferença
                return false;
            }
        }
    }
    return true;
}

bool HugeInteger::isGreaterThan(const HugeInteger n) const {
    if (getTamanho() != n.getTamanho()) {                       // Tamanhos diferentes
        return (getTamanho() > n.getTamanho() ? true : false);  // É maior?
    } for(int i = 0; i < getTamanho(); i ++) {                  // Interando sobre cada dígito
        if((output()[i] - '0') > n.output()[i] - '0') {         // É maior?
            return true;
        }
    }
    return false;
}

bool HugeInteger::isLessThan(const HugeInteger n) const {
    if (getTamanho() != n.getTamanho()) {                       // Tamanhos diferentes
        return (getTamanho() < n.getTamanho() ? true : false);  // É menor?
    } for(int i = 0; i < getTamanho(); i ++) {                  // Interando sobre cada dígito
        if((output()[i] - '0') < n.output()[i] - '0') {         // É menor?
            return true;
        }
    }
    return false;
}

bool HugeInteger::isGreaterThanOrIqual(const HugeInteger n) const {
    if (getTamanho() != n.getTamanho()) {                       // Tamanhos diferentes
        return (getTamanho() >= n.getTamanho() ? true : false); // É maior ou igual?
    } for(int i = 0; i < getTamanho(); i ++) {                  // Interando sobre cada dígito
        if((output()[i] - '0') >= n.output()[i] - '0') {        // É maior ou igual?
            return true;
        }
    }
    return false;
}

bool HugeInteger::isLessThanOrIqual(const HugeInteger n) const {
    if (getTamanho() != n.getTamanho()) {                       // Tamanhos diferentes
        return (getTamanho() <= n.getTamanho() ? true : false); // É menor ou igual?
    } for(int i = 0; i < getTamanho(); i ++) {                  // Interando sobre cada dígito
        if((output()[i] - '0') <= n.output()[i] - '0') {        // É menor ou igual?
            return true;
        }
    }
    return false;
}