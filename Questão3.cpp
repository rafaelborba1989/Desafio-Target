/*3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

IMPORTANTE:
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;*/

/*Observação: Segundo o arquivo json em anexo, constam apenas 21 dias em que se tem faturamento com valores acima de 0.00, logo a media será calculada sobre os 21 dias com faturamento superior a 0.00*/
#include <iostream>
using namespace std;
int main() {
  int i, n = 21, numeroDeDias = 0;
  float vetor[n], acumulador = 0, menorFaturamento, maiorFaturamento, media21Dias;
  

  vetor[0] = 22174.1664; vetor[1] = 24537.6698; vetor[2] = 26139.6134; vetor[3] = 26742.6612; vetor[4] = 42889.2258;
  vetor[5] = 46251.174; vetor[6] = 11191.4722; vetor[7] = 3847.4823 ; vetor[8] = 373.7838; vetor[9] = 2659.7563; 
  vetor[10] = 48924.2448; vetor[11] = 18419.2614; vetor[12] = 35204.1826; vetor[13] = 43829.1667; vetor[14] = 18235.6852; 
  vetor[15] = 4355.0662; vetor[16] = 13327.1025; vetor[17] = 25681.8318; vetor[18] = 1718.1221; vetor[19] = 13220.495; vetor[20] = 8414.61;

  maiorFaturamento = menorFaturamento = vetor[0];
  for(i=0; i<n; i++){
    acumulador += vetor[i];
    if(menorFaturamento > vetor[i]){
      menorFaturamento = vetor[i];
    }
    if(maiorFaturamento < vetor[i]){
      maiorFaturamento = vetor[i];
    }
  }

  media21Dias = acumulador/21;  // media calculada sobre 21 dias conforme a orientação do enunciado da questão!

  for(i=0; i<n; i++){
    if(vetor[i] > media21Dias){
      numeroDeDias++;
    }
  }

  cout<<"Respostas:\n\n";
  cout<<"Media dos 21 dias com faturamento maior que 0.00: " << media21Dias << "\n";
  cout<<"O menor valor de faturamento ocorrido em um dia do mês: " << menorFaturamento << "\n";
  cout<<"O maior valor de faturamento ocorrido em um dia do mês: " << maiorFaturamento << "\n";
  cout<<"Número de dias no mês em que o valor de faturamento diário foi superior à média mensal: " << numeroDeDias;
}
