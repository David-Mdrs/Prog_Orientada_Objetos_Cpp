#include <iostream>
#include <string>
#include <random>

#include "ChapeuSeletor.hpp"

ChapeuSeletor::ChapeuSeletor() {}

void ChapeuSeletor::recepcionar() const {
    std::cout << "Não há nada escondido em sua cabeça que o Chapéu Seletor não consiga ver, " << std::endl <<
    "por isso é só me porem na cabeça que vou dizer em que casa de Hogwarts deverão ficar" << std::endl << std::endl;
}

std::string ChapeuSeletor::sortearCasa() const {
    std::random_device seqAleatoria;
    std::mt19937 gen(seqAleatoria());
    std::uniform_int_distribution<int> distInt(1, 4);
    int numeroCasa = distInt(gen);
    
    switch(numeroCasa) {
        case 1:
            return "Sonserina";
        case 2:
            return "Grifinória";
        case 3:
            return "Corvinal";
    }
    return "Lufa-Lufa";
}