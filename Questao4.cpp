/*4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por
estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de
representação que cada estado teve dentro do valor total mensal da
distribuidora.*/

#include <iostream>
using namespace std;
int main() {
  float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48,outros = 19849.53, total, percentualSp, percentualRj, percentualMg,
        percentualEs, percentualOutros;

  total = (sp + rj + mg + es + outros);

  percentualSp = (sp / total) * 100;
  percentualRj = (rj / total) * 100;
  percentualMg = (mg / total) * 100;
  percentualEs = (es / total) * 100;
  percentualOutros = (outros / total) * 100;

  cout << "Total do faturtamento mensal da distribuidora em todos os estados declarados: " << total << "\n";
  cout << "Percentual de representação do estado de SP: " << percentualSp << "%\n";
  cout << "Percentual de representação do estado de RJ: " << percentualRj << "%\n";
  cout << "Percentual de representação do estado de MG: " << percentualMg << "%\n";
  cout << "Percentual de representação do estado de ES: " << percentualEs << "%\n";
  cout << "Percentual de representação dos outros estados: " << percentualOutros << "%\n";
  
  //Observação; o algoritmo arrendondou o resultado do total altomatucamente devido a diferença de 00.02 centavos. Logo, o valor sem arredondamento é: 180759.98!
}
