#include <iostream>

// screva um programa que utiliza instruções for para imprimir cada um dos seguintes padrões separadamente.
// Utilize loops for para gerar os padrões. Atenção à seguinte restrição: cada asteriscos (*) deve ser 
// impresso por uma única instrução na forma cout << ‘*’, istó é, devem ser impressos individualmente.

int main(){

    for(int i = 5; i > 0; i--){
        for(int j = i; j < 6; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            (j < i) ? std::cout << ' ' : std::cout << '*';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;


    for(int i = 0; i < 5; i++)
        (i != 2) ? std::cout << ' ' : std::cout << '*';
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        (i == 0 || i == 4) ? std::cout << ' ' : std::cout << '*';
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        std::cout << '*';
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        (i == 0 || i == 4) ? std::cout << ' ' : std::cout << '*';
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        (i != 2) ? std::cout << ' ' : std::cout << '*';
    std::cout << std::endl;
    std::cout << std::endl;

    int esq{4}, dir{4};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            (j < esq || j > dir) ? std::cout << ' ' : std::cout << '*';
        }
        std::cout << std::endl;
        esq--;
        dir++;
    }
    std::cout << std::endl;

   return 0;
}