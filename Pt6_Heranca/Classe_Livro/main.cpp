#include <iostream>

#include "Livro.hpp" // Opcional
#include "LivroMonstruosoDosMonstros.hpp"
#include "LivroInvisivelDaInvisibilidade.hpp"

using std::cout;

int main() {

    Livro livro{};
    livro.ler();
    
    LivroMonstruosoDosMonstros livroMostruoso{};
    livroMostruoso.ler();
	
	LivroInvisivelDaInvisibilidade livroInvisivel{};
	livroInvisivel.ler();
	
	return 0;
}
