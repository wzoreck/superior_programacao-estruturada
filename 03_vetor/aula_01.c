/*
O vetor é uma estrutura de dados indexada, que pode armazenar uma determinada quantidade de valores do mesmo tipo.
Os dados armazenados em um vetor são chamados de itens do vetor.
Para localizar a posição de um item em um vetor usamos um número inteiro denominado índice do vetor.
Vantagem de utilização do vetor
Facilidade de manipular um grande conjunto de dados do mesmo tipo declarando-se apenas uma variável
*/
#include <stdio.h>
int main(){
  // Aula 01 sobre vetores
  int v[5]; // declaração de um vetor de 5 posições do tipo inteiro
  scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]); // Como o vetor possui 5 posições, e os índices de vetores iniciam em 0 e vão até n, neste caso os respectivos índices são 0,1,2,3,4
  printf("[%d, %d, %d, %d, %d]", v[0], v[1], v[2], v[3], v[4]); // aqui buscamos os valores em suas respectivas posições do vetor para printalos na tela

  return 0;
}
