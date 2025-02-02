#include <iostream>
#include <format>

// Usando PONTEIROS, escreva uma função chamada swap que troca os valores dos seus 2 parâmetros.

template <typename T>
void swap(T *dado1, T *dado2){
   T auxiliar = *dado1;
   *dado1 = *dado2;
   *dado2 = auxiliar;
}

int main(){

   int n1{1}, n2{2};

   std::cout << std::format("Antes do swap: {} {}", n1, n2) << std::endl;
   swap(&n1, &n2);
   std::cout << std::format("Depois do swap: {} {}", n1, n2) << std::endl;

   return 0;
}