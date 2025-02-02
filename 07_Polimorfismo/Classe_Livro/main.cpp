#include <iostream>

#include "Livro.hpp" // Opcional
#include "LivroMonstruosoDosMonstros.hpp"
#include "LivroInvisivelDaInvisibilidade.hpp"

using std::cout;

int main() {

    Livro *li{nullptr};

    Livro livro{};
    LivroMonstruosoDosMonstros livroMostruoso{};
    LivroInvisivelDaInvisibilidade livroInvisivel{};

    std::cout << "Livro criado!" << std::endl <<
    "Livro monstruoso criado!" << std::endl <<
    "Livro invisível criado!" << std::endl << std::endl;
    
    li = &livro;
    li->ler();
    
    li = &livroMostruoso;
    li->ler();
	
	li = &livroInvisivel;
	li->ler();
	
	return 0;
}
