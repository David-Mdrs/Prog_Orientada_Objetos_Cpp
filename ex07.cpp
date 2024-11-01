#include <iostream>
#include <string>

// Escreva uma função que receba uma string C++ e converta cada letra para maiúscula.

using std::string;

void ConverterMaiusculo(string &str){
   for(int i = 0; i < str.length(); i++){
       if(str[i] >= 97 && str[i] <= 122){
           str[i] -= 32;
       }
   }
}

int main(){

    string str{};

    std::cout << "Digite uma string!" << std::endl;
    std::cin >> str;

   ConverterMaiusculo(str);
   std::cout << "Convertendo string maiúsculo: " << str << std::endl;

   return 0;
}