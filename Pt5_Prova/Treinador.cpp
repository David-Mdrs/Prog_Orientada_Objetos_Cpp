#include "Treinador.hpp"

void Treinador::capturar(Pokemon *pokemon) {
    if(m_pokebolas.size() >= 6) {
        std::cout << "Pokebolas cheias!" << std::endl << std::endl;
        return;
    }
    Pokebola pokebola{};
    pokebola.setPokemon(pokemon);
    m_pokebolas.push_back(pokebola);
}
void Treinador::vai(const std::string nome) const {
    for(int i = 0; i < m_pokebolas.size(); i++) {
        if (m_pokebolas[i].getPokemon()->getNome() == nome) {
            std::cout << m_pokebolas[i].getPokemon()->getSom() << std::endl;
            return;
        }
    }
    std::cout << "Ooooops. Ainda não capturei esse pokemon!"  << std::endl;
}