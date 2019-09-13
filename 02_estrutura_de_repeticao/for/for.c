
// Gerar uma tabuada com o laço de repetição _for_
#include <stdio.h>
int main(){
    /*
    As estruturas de repetição, executam a repetição de um conjunto de instruções enquanto uma determinada condição é verdadeira.
    O laço for é uma estrutura de repetição muito utilizada nos programas em C.
    É muito útil quando se sabe de antemão quantas vezes a repetição deverá ser executada.
    Este laço utiliza uma variável para controlar a contagem do loop, bem como seu incremento.
    Trata-se de um comando bem enxuto, já que própria estrutura faz a inicialização, incremento e encerramento do laço.
    */
    int x, tabuada;
    printf("Digite um valor: ");
    scanf("%d", &x);
    for (int i=0; i<11; i++){
        tabuada = x * i;
        printf("\n%d X %d = %d", x, i, tabuada);
    }
    // Se você chegou no for pela linha de cima a ordem é: primeira execução será  i recebe 0; enquanto i<10 ou outra comparação
    // Quando o ciclo retornar a ordem de execução em diante passa a ser primeiro i++ (i incrementa 1) e ĺogo após a comparação enquanto i<10 ou outra comparação

    return 0;
}
