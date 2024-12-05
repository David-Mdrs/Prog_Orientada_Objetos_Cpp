#include <iostream>
#include "ArrayList.hpp"

int main() {
    
    ArrayList lista{10};
    
    lista.add(1).add(2).add(10).add(20);
    
    lista.print();

    // somaArray(lista, 2);
    // subArray(lista, 2);
    // mulArray(lista, 2);
    
    divArray(lista, 2);
    lista.print();

  return 0;
}
