#include <iostream>

#include "Pessoa.hpp" // Opcional
#include "Bruxo.hpp"
#include "Trouxa.hpp"
#include "ExpressoHogwarts.hpp"

int main() {
    
    ExpressoHogwarts expresso{};

    Bruxo bruxo {"Sara", "Sonserina", "Alomohomora"};
    Trouxa trouxa {"Marcos", "98573686494", "Mecânico"};

    expresso.display();
    
    expresso << bruxo;
    expresso << trouxa;
    expresso.display();
    
    expresso >> "Sara";
    expresso.display();
    
    return 0;
}