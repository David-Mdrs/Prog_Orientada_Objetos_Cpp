#include <iostream>
#include <stdexcept>
#include "ArrayList.hpp"

using std::cout, std::endl;

ArrayList::ArrayList(int tamanho) : posicao(0) {
  if (tamanho > 0) {
    this->tamanho = tamanho;
    arr = new int[tamanho];
  } else {
    arr = nullptr;
    this->tamanho = 0;
  }
}

ArrayList::~ArrayList() {
  if (arr)
    delete[] arr;
}

ArrayList &ArrayList::add(int valor) {
  //validando espaço
  if (posicao >= tamanho)
	throw std::out_of_range("Não há mais espaço no ArrayList!");
  
  arr[posicao++] = valor;

  return *this;
}

void ArrayList::print() const {
  for (int i = 0; i < posicao; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}

void somaArray(ArrayList &array, const int soma) {
    if(array.posicao > 0) {
        for (int i = 0; i < array.posicao; i++) {
            array.arr[i] += soma;
        }
    }
}

void subArray(ArrayList &array, const int sub) {
    if(array.posicao > 0) {
        for (int i = 0; i < array.posicao; i++) {
            (array.arr[i] < sub ? array.arr[i] = 0 : array.arr[i] -= sub);
        }
    }
}

void mulArray(ArrayList &array, const int mul) {
    if(array.posicao > 0) {
        for (int i = 0; i < array.posicao; i++) {
            array.arr[i] *= mul;
        }
    }
}

void divArray(ArrayList &array, const int divi) {
    if(array.posicao > 0) {
        for (int i = 0; i < array.posicao; i++) {
            array.arr[i] /= divi;
        }
    }
}