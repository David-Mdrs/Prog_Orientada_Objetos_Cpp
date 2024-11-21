#include <iostream>
#include <string>
#include "Bruxo.hpp"

int main() {
    
    Bruxo bruxo{"Harry", "Grifinoria", "Expelliarmus"};
    Bruxo bruxo2{"Hermione", "Grifinoria", "Wingardium Leviosa"};

    bruxo.lancarFeitico();
    bruxo.dados();

    std::cout << bruxo.dados() << std::endl;
	return 0;
}