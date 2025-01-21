#include <iostream>

// Escreva uma função que retorna 0 (zero) quando chamada pela primeira vez e
// então gera números em sequência em cada uma das chamadas posteriores.

int somatoria{0};

int contador(int &somatoria){
   return somatoria++;
}

int main(){

   std::cout << contador(somatoria) << std::endl;
   std::cout << contador(somatoria) << std::endl;
   std::cout << contador(somatoria) << std::endl;

   return 0;
}
