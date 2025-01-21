#include <iostream>
#include <string>

// Escreva uma função que determina se uma string C++ contém alguma letra maiúscula.

using std::string;

void strMaiuscula(const string str){
   for(int i = 0; i < str.length(); i++){
       if(str[i] >= 65 && str[i] <= 90){
           std::cout << "A string" << str << " possui letras maiúsculas!" << std::endl;  
           return; 
       }
   }
   std::cout << "A string" << str << " não possui letras maiúsculas!" << std::endl;
}

int main(){

   string str{};

   std::cout << "Digite uma string!" << std::endl;
   std::cin >> str;
   strMaiuscula(str);

   return 0;
}