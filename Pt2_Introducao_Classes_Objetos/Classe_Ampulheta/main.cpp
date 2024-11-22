#include <iostream>
#include "Ampulheta.hpp"

int main() {
    
    Ampulheta tempo(5);            // Apenas tempo máximo
    Ampulheta tempo2(5, 2);         // Tempo máximo e atual
    Ampulheta tempo3(5, 3, -1);     // Tempo máximo, atual e direção

    std::cout << tempo.mostrarTempo() << std::endl;
    tempo.avancarTempo();
    std::cout << tempo.mostrarTempo() << std::endl;
    tempo.virarAmpulheta();
    tempo.avancarTempo();
    std::cout << tempo.mostrarTempo() << std::endl;
    tempo.virarAmpulheta();
    for (int i = 0; i < 6; i++){
        tempo.avancarTempo();
        std::cout << tempo.mostrarTempo() << std::endl;
    }
    tempo.virarAmpulheta();
    for (int i = 0; i < 7; i++){
        tempo.avancarTempo();
        std::cout << tempo.mostrarTempo() << std::endl;
    }

  return 0;
}