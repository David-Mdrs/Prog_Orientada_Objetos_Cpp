#include "Retangulo.hpp"

Retangulo::Retangulo(double altura = 1.0, double largura = 1.0) {
    setAltura(altura);
    setLargura(largura);
}

double Retangulo::getAltura() const {
    return m_altura;
}
void Retangulo::setAltura(double altura) {
    m_altura = (altura > 0 && altura < 20 ? altura : 1.0);
}

double Retangulo::getLargura() const {
    return m_largura;
}
void Retangulo::setLargura(double largura) {
    m_largura = (largura > 0 && largura < 20 ? largura : 1.0);
}

double Retangulo::perimetro() const {
    return 2 * (getAltura() + getLargura());
}
double Retangulo::area() const {
    return getAltura() * getLargura();
}
void Retangulo::desenho() const {
    for (int i = 0; i < getAltura(); i++) {
        for (int j = 0; j < getLargura(); j++) {
            if (i == 0 || i == getAltura()-1) {
                (j == 0 || j == getLargura()-1 ? std::cout << "+" : std::cout << "-");
            } else {
                (j == 0 || j == getLargura()-1 ? std::cout << "|" : std::cout << " ");
            }
        }
        std::cout << std::endl;
    }
}