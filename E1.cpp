#include <iostream>

using namespace std;

/**
Fun��o que busca o n�mero informado de forma recursiva

@params int vetor[]
@params int tamVetor
@params int numBuscado
@params int indice
@return int
*/
int buscarNumero(int vetor[], int tamVetor, int numBuscado, int indice);

int main() {
  int N = 9;
  int X = 15; // valor buscado.
  int indice = 0; 

  int A[] = {94, 50, 57, 16, 10, 32, 55, 9, 68};

  cout << "Indice do n�mero buscado: " << buscarNumero(A, N, X, indice);
}

int buscarNumero(int vetor[], int tamVetor, int numBuscado, int indice) {
  if (numBuscado == vetor[indice])
    return indice; // Achou ;)

  else if (indice + 1 == tamVetor)
    return -1; // N�o achou :(

  return buscarNumero(vetor, tamVetor, numBuscado, indice + 1);
}
