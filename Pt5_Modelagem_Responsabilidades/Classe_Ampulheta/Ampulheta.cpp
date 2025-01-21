#include "Ampulheta.hpp"

Ampulheta::Ampulheta(const int tempoMAX, const int tempo, const int direcao)
    : m_tempoMAX(tempoMAX) {
    setTempo(tempo);
    setDirecao(direcao);
}

void Ampulheta::avancarTempo() {
    if(m_direcao == 1){                         // Tempo crescente
        if (m_tempo < m_tempoMAX) m_tempo++;    // Incrementando no tempo
    } else {                                    // Tempo decrescente
        if (m_tempo > 0) m_tempo--;             // Decrementando no tempo
    }
}
