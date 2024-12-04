#include <iostream>
#include "Treinador.hpp"

int main() {
    
    Treinador ash{"Ash"}, misty{"Misty"}, brock{"Brok"};
    
	Pokemon pikachu{"Pikachu","Eletrico","piiiika"};
	Pokemon caterpie{"Caterpie","Inseto","meeooohh"};

    ash.capturar(&pikachu);
	ash.capturar(&caterpie);
    
	Pokemon horsea{"Horsea","Aquatico","hor plupt"};
	Pokemon staryu{"Staryu","Aquatico","staaaary"};
    
	misty.capturar(&horsea);
	misty.capturar(&staryu);
    
	Pokemon geodude{"Geodude","Rocha","geudud"};
	Pokemon onix{"Onix","Rocha","Ooonx"};
    
	brock.capturar(&geodude);
	brock.capturar(&onix);

	std::cout << "Vai, Pikachu!" << std::endl;
	ash.vai("Pikachu");
	std::cout << "Vai, Caterpie!" << std::endl;
	ash.vai("Caterpie");
    
    std::cout << "Vai, Horsea!" << std::endl;
	misty.vai("Horsea");
	std::cout << "Vai, Staryu!" << std::endl;
	misty.vai("Staryu");
    
	std::cout << "Vai, Geodude!" << std::endl;
	brock.vai("Geodude");
	std::cout << "Vai, Steelix!" << std::endl;
	brock.vai("Steelix");
    
  return 0;
}
