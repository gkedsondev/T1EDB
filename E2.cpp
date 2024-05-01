#include <iostream>

using namespace std;

// Verifica se um número espeficado existe em vetor utilizando método de busca binária.
bool buscaBinaria(int vetor[], int tamVetor, int numBuscado);

int main() {
  int N = 13;
  int X = 10; // valor buscado.

  int A[] = {1, 10, 25, 35, 45, 55, 77, 88, 99, 100, 101, 101, 103};

  // Considera-se que o vetor informado já está ordenado de maneira crescente...
  if (buscaBinaria(A, N, X))
    cout << "Achou! ;)" << endl;
  else
    cout << "Valor não encontrado :(" << endl;
}

bool buscaBinaria(int vetor[], int tamVetor, int numBuscado) { 
  int esquerda = 0;
  int direita = tamVetor - 1;
  int meio;

  while(esquerda <= direita){
    meio = (esquerda + direita) / 2;

    if(vetor[meio] == numBuscado){
      return true;
    }
    
    if(vetor[meio] > numBuscado){
      direita = meio - 1;
    }else{
      esquerda = meio + 1;
    }
  }
  
  return false; 
}