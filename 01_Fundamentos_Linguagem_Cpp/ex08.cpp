#include <iostream>
#include <array>
#include <vector>

// Escreva um função que determina se um array-C++ de inteiros recebido como referência contém algum número primo.
// Escreva um função que determina se um vector recebido como referência contém algum número primo.

void NumeroPrimo(const std::array<int, 5> &arr){
    for (size_t i = 0; i < arr.size(); i++){
        if (arr[i] <= 1) continue;
        bool primo = true;
        for (int j = 2; j < arr[i]; j++){
            if (arr[i] % j == 0){
                primo = false;
                break;
            }
        }
        if(primo){
            std::cout << "O array possui números primos!" << std::endl;
            return;
        }
    }
    std::cout << "O array não possui números primos!" << std::endl;
}

void NumeroPrimoVector(const std::vector<int>& vec){
    for (size_t i = 0; i < vec.size(); i++){
        if (vec[i] <= 1) continue;
        bool primo = true;
        for (int j = 2; j < vec[i]; j++){
            if (vec[i] % j == 0){
                primo = false;
                break;
            }
        }
        if(primo){
            std::cout << "O vetor possui números primos!" << std::endl;
            return;
        }
    }
    std::cout << "O vetor não possui números primos!" << std::endl;
}

int main(){

    std::vector<int> vec{4, 6, 8, 9, 10};
    std::vector<int> vecPrimo{2, 3, 7, 11};
    NumeroPrimoVector(vec);
    NumeroPrimoVector(vecPrimo);

   return 0;
}