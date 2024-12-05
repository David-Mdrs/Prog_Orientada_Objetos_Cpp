#pragma once

class ArrayList
{
public:
  ArrayList(int tamanho);
  ~ArrayList();

  ArrayList &add(int valor);

  void print() const;
  
  friend void somaArray(ArrayList &array, const int soma);
  friend void subArray(ArrayList &array, const int subtracao);
  friend void mulArray(ArrayList &array, const int mul);
  friend void divArray(ArrayList &array, const int divi);

private:
  int *arr;
  int tamanho;
  int posicao;
};
