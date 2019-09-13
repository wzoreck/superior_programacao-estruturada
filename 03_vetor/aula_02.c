// Utilizando estrutura de repetição para fazer a manipulação dos índices do vetor
// É comun utilizar a estrutura _for_ pois em maior parte dos casos a quantidade de posições do vetor vai ser uma constante, assim sabemos quantas vezes o loop deve ser executado

#include <stdio.h>
int main(){
  int v[10];
  int i; // Declaramos uma variável de controle para o laço for
  // Entrada de dados
  for(i=0; i<10; i++){
    printf("Digite a nota inteira %d: ", i+1);
    scanf("%d", &v[i] );
  }
  /*
  Observe que a variável i, tem uma dupla função neste programa.
  Além de controlar o laço a variável i também foi usada como índice do vetor.
  Desta forma, podemos inicializar i com valor zero e fazê-la variar até o tamanho do vetor
  */
  // Imprimir valores
  printf("[");
  for(i=0; i<10; i++){
    printf(" %d", v[i]);
  }
  printf("]");

  return 0;
}
