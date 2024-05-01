#include <iostream>

using namespace std;

// Função que verificar se vetor está ordenado de forma crescente.
bool ehOrdenadoCrescente(int vetor[], int tamVetor);

int main() {
  int N = 5;
  int A[] = {1,2,3,6,5};

  if(ehOrdenadoCrescente(A, N)){
    cout << "Verdadeiro" << endl;
  }else{
    cout << "Falso" << endl;
  }
}

bool ehOrdenadoCrescente(int vetor[], int tamVetor){
  for(int i=1; i < tamVetor; i++){
    if(vetor[i-1] > vetor[i]){
      /* 
        caso haja pelo menos um elemento anterior maior que o
        sucessor, quer dizer que o vetor não está ordenado de forma
        crescente.
      */
      return false;
    }
  }
  
  return true;
}