#include <iostream>

using namespace std;

// Retorna o valor da sequencia fibonnaci dada uma posição X.
int getValorDeFibonacciPerPosicao(int posicao);

int main() {
  cout << getValorDeFibonacciPerPosicao(3) << endl;
}

int getValorDeFibonacciPerPosicao(int posicao){
  int nFib = 0, aux1=0, aux= 1;

  if(posicao <= 1)
    return 1;
  
  for(int i = 0; i < posicao; i++){
    nFib = aux1 + aux;
    aux = aux1;
    aux1 = nFib;
  }
  
  return nFib;
}