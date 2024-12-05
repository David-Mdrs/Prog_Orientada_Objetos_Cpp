#pragma once

class ArrayList
{
public:
  ArrayList(int tamanho);
  ~ArrayList();

  ArrayList &add(int valor);

  void print() const;
  
  int busca(const int indice) const;
  void remover(int indice);
  void removerEl(int elemento);
  
  friend void somaArray(ArrayList &array, const int soma);
  friend void subArray(ArrayList &array, const int subtracao);
  friend void mulArray(ArrayList &array, const int mul);
  friend void divArray(ArrayList &array, const int divi);

private:
  int *arr;
  int tamanho;
  int posicao;
};
