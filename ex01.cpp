#include <iostream>
#include <string>

int main(){

    std::string nome;
    double a, b, c, mediaPonderada;

    std::cout << "Digite seu nome: " << std::endl;
    std::cin >> nome;
    std::cout << "Digite as três notas (0 à 10): " << std::endl;
    std::cin >> a >> b >> c;

    mediaPonderada = (a*3 + b*4 + c*5) / 12;
    std::cout << "o aluno " << nome << " obteve a média " << mediaPonderada << std::endl;

    if (mediaPonderada < 4){
        std::cout << "Aluno reprovado por média!" << std::endl;
    } else if (mediaPonderada >= 7){
        std::cout << "Aluno aprovado por média!" << std::endl;
    } else {
        std::cout << "Aluno em recuperação!" << std::endl;
    }

    return 0;
}