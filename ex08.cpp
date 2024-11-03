#include <iostream>
#include <array>

// Escreva um função que determina se um array-C++ de inteiros recebido como referência contém algum número primo.

void NumeroPrimo(const std::array<int, 5>& arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 2; j < i-1; j++){
            if(arr[i] / j == 0){
                std::cout << "Array possui números primos!" <<std::endl;
                return;
            }
        }
    }
    std::cout << "Array não possui números primos!" << std::endl;
    return;
}

int main(){

    std::array<int, 5> arr{4, 6, 8, 9, 10};
    std::array<int, 5> arrPrimo{2, 3, 7, 11};
    NumeroPrimo(arr);
    NumeroPrimo(arrPrimo);

   return 0;
}