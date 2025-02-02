#pragma once
#include <array>
#include <string>

using std::array, std::string;

class HugeInteger {
public:

    HugeInteger(const string numero = "0") { input(numero); }   // Construtor com valor padrão '0'
    
    void input(const string numero);                        // Insere um novo número ao objeto
    
    string output() const;                                  // Retorna o número como string
    
    int getTamanho() const { return m_tamanho; }            // Retorna o tamanho do número

    HugeInteger add(const HugeInteger n) const;             // Soma dois objetos e retorna seu resultado
    
    bool isEqualTo(const HugeInteger n) const;              // Analisa igualdade
    
    bool isNotEqualTo(const HugeInteger n) const { return !isEqualTo(n); }   // Analisa diferença
    
    bool isGreaterThan(const HugeInteger n) const;          // Maior que
    
    bool isLessThan(const HugeInteger n) const;             // Menor que
    
    bool isGreaterThanOrIqual(const HugeInteger n) const;   // Maior ou igual
    
    bool isLessThanOrIqual(const HugeInteger n) const;      // Menor ou igual

private:
    array<char, 40> m_numero{};     // Cada dígito é armazenado em uma célula do array
    int m_tamanho;                  // Tamanho do número
};