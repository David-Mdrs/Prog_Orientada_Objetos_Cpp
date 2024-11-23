#include <iostream>
#include <array>
#include <string>
#include "HugeInteger.hpp"

using std::array, std::string;

class HugeInteger {
public:

    HugeInteger(const string numero = "0") {
        input(numero);
    }
    
    void input(const string numero) {
        if(numero.size() <= 40) {
            bool auxiliar{true};                // Auxiliar para caractere alpha
            for(int i = 0; i < numero.size(); i++) {
                if(!std::isdigit(numero[i])) {  // Caractere inválido
                    auxiliar = false;           // Acione o auxiliar
                    break;                      // Pare de incrementar
                }
            }
            if(auxiliar) {                       // Numero válido
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
    
    string output() const {
        string saida{};
        for(int i = 0; i < m_numero.size(); i++) {
            saida += m_numero[i];
        }
        return saida;
    }
    
    int getTamanho() const {
        return m_tamanho;
    }

private:
    array<char, 40> m_numero{};
    int m_tamanho;
};

int main() {

    HugeInteger formatacao{};                                        // Correto (0)
    formatacao.input("777");                                         // Correto
    formatacao.input("000307");                                      // Correto (307)
    formatacao.input("10000000001000000000100000000010000000001");   // Maior que 40 (valor não muda)
    formatacao.input("1abc");                                        // Caracteres alpha (valor não muda)
    std::cout << "Numero: " << formatacao.output() << " | Tamanho: " << formatacao.getTamanho() << std::endl;

  return 0;
}