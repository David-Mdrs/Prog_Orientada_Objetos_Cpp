#include "Animal.hpp"

// Construtores
Animal::Animal() : m_nome{"Nenhum"}, m_raca{"Nenhum"}, m_caminha{false} {}
Animal::Animal(const std::string nome) : m_nome{nome}, m_raca{"Nenhum"}, m_caminha{false} {}

// Métodos especiais da classe
void Animal::caminha() {
    if (m_caminha) {
        m_caminha = false;
        std::cout << (m_nome != "Nenhum" ? m_nome : "Animal") << " parou!" << std::endl;
    } else {
        m_caminha = true;
        std::cout << (m_nome != "Nenhum" ? m_nome : "Animal") << " começou a caminhar!" << std::endl;
    }
}