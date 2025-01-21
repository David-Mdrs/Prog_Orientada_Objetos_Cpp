#include <iostream>
#include <string>

// Escreva duas funções que receba uma string C++ e converta cada letra para maiúscula e minúscula respectivamente.

using std::string;

void ConverterMaiusculo(string &str){
   for(int i = 0; i < str.length(); i++){
       if(str[i] >= 97 && str[i] <= 122){
           str[i] -= 32;
       }
   }
}
void ConverterMinusculo(string &str){
   for(int i = 0; i < str.length(); i++){
       if(str[i] >= 65 && str[i] <= 90){
           str[i] += 32;
       }
   }
}

int main(){

    string str{};

    std::cout << "Digite uma string!" << std::endl;
    std::cin >> str;

   ConverterMaiusculo(str);
   std::cout << "Convertendo string maiúsculo: " << str << std::endl;

   ConverterMinusculo(str);
   std::cout << "Convertendo string para minúsculo: " << str << std::endl;

   return 0;
}