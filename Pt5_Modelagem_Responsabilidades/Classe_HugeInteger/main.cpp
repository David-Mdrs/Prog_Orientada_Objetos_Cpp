#include <iostream>
#include "HugeInteger.hpp"

int main() {
    // ANALISANDO FORMATAÇÃO NA CRIAÇÃO DO OBJETO
    HugeInteger formatacao{};                                        // Correto (0)
    formatacao.input("777");                                         // Correto
    formatacao.input("000307");                                      // Correto (307)
    formatacao.input("10000000001000000000100000000010000000001");   // Maior que 40 (valor não muda)
    formatacao.input("1abc");                                        // Caracteres alpha (valor não muda)
    std::cout << "Numero: " << formatacao.output() << " | Tamanho: " << formatacao.getTamanho() << std::endl;

    // ANALISANDO MÉTODO DE SOMATÓRIA DE OBJETOS
    HugeInteger n1{"999116"};                               // Valor de teste
    HugeInteger n2{"9183"};                                 // Valor de teste
    HugeInteger soma = n1.add(n2);                          // Novo objeto com somatória
    std::cout << "Soma: " << soma.output() << " | Tamanho: " << soma.getTamanho() << std::endl << std::endl;

    // ANALISANDO MÉTODOS DE IGUALDADE
    HugeInteger num1{};
    HugeInteger num2{};
    
    num1.input("1"); num2.input("1");
    std::cout << "1 | 1 | Igualdade: " << (num1.isEqualTo(num2) ? "true" : "false") << std::endl;
    num2.input("2");
    std::cout << "1 | 2 | Igualdade: " << (num1.isEqualTo(num2) ? "true" : "false") << std::endl << std::endl;

    num2.input("1");
    std::cout << "1 | 1 | Diferente: " << (num1.isNotEqualTo(num2) ? "true" : "false") << std::endl;
    num2.input("2");
    std::cout << "1 | 2 | Diferente: " << (num1.isNotEqualTo(num2) ? "true" : "false") << std::endl << std::endl;

    num2.input("1");
    std::cout << "1 | 1 | Maior ou igual: " << (num1.isGreaterThanOrIqual(num2) ? "true" : "false") << std::endl;
    num2.input("2");
    std::cout << "1 | 2 | Maior ou igual: " << (num1.isGreaterThanOrIqual(num2) ? "true" : "false") << std::endl;
    num1.input("2"); num2.input("1"); 
    std::cout << "2 | 1 | Maior ou igual: " << (num1.isGreaterThanOrIqual(num2) ? "true" : "false") << std::endl << std::endl;

    num1.input("1"); num2.input("1");
    std::cout << "1 | 1 | Menor ou igual: " << (num1.isLessThanOrIqual(num2) ? "true" : "false") << std::endl;
    num2.input("2");
    std::cout << "1 | 2 | Menor ou igual: " << (num1.isLessThanOrIqual(num2) ? "true" : "false") << std::endl;
    num1.input("2"); num2.input("1"); 
    std::cout << "2 | 1 | Menor ou igual: " << (num1.isLessThanOrIqual(num2) ? "true" : "false") << std::endl << std::endl;

  return 0;
}