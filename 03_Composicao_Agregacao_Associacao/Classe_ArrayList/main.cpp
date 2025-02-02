#include <iostream>
#include "ArrayList.hpp"

int main() {
    
    ArrayList lista{10};
    
    lista.add(1).add(2).add(1).add(1).add(3);
    
    lista.print();

    // somaArray(lista, 2);
    // subArray(lista, 2);
    // mulArray(lista, 2);
    // divArray(lista, 2);
    
    std::cout << lista.busca(2) << std::endl;
    
    lista.remover(0);
    lista.print();
    
    lista.removerEl(1);
    lista.print();

  return 0;
}
