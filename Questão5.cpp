5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;

#include <iostream>
#include <string>
using namespace std;
int main() {

  string frase, fraseespelhada;
  int i, i2, t1;

  cout<<"\nDigite uma frase: ";
  getline(cin,frase);

  t1 = frase.size();

  for(i=0; i<t1; i++){
    fraseespelhada[i] = frase[(t1-1)-i];
    cout<< fraseespelhada[i];
  }
}
