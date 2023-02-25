/*2-Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor
 * sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8,
 * 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado
 * um número, ele calcule a sequência de Fibonacci e retorne uma mensagem
 * avisando se o número informado pertence ou não a sequência.*/

#include <iostream>

using namespace std;
int main() {
  int termo1, termo2, termoAtual, num, x, i;
  cout << "Digite um número inteiro: ";
  cin >> num;
  cout<<"\n";
  termo1 = 0;
  termo2 = 1;
  cout << termo1 <<  "\t"  << termo2 <<  "\t";
  for (i = 2; i < num + 1; i++) {
    termoAtual = termo1 + termo2;
    termo1 = termo2;
    termo2 = termoAtual;
    cout << termoAtual << + "\t";

    if(num == termoAtual){
      cout<<"\n\nNumero:" << num << " pertence a sequencia Fibonacci!";
      break;
    }else{
      if(termoAtual > num){
          cout<<"\n\nNumero:" << num << " não pertence a sequencia Fibonacci!";
          break;
      }
    }
  }
}
