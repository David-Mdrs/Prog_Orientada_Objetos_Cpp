#pragma once

class Ampulheta{
public:
    Ampulheta(const int tempoMAX = 5, const int tempo = 0, const int direcao = 1);
    
    int mostrarTempo() const { return m_tempo; };
    void avancarTempo();
    void virarAmpulheta() { m_direcao = (m_direcao == 1 ? -1 : 1); };

private:
    int m_tempo;
    int m_direcao;
    const int m_tempoMAX;
    
    void setTempo(const int tempo) { m_tempo = (tempo > 0 && tempo <= m_tempoMAX ? tempo : 0); };
    void setDirecao(const int direcao) { m_direcao = (direcao == 1 || direcao == -1 ? direcao : 1); };
};