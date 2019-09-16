/*
Para que se possa construir um triângulo é necessário que a medida de qualquer um dos lados seja menor que a soma das medidas dos outros dois e maior que o valor absoluto da diferença entre essas medidas. Exemplo:
3, 4 e 5 formam um triângulo:
3 < 4+5 → 3 < 9 E 3 > |4-5| → 3 > |-1| → 3 > 1. VERDADEIRO.

1 4 e 9 não formam um triângulo porque:
1 < 4 + 9 → 1 < 13 E 1 > |4-9| → 1 > |-5| →1 > 5. FALSO.

Faça um programa que leia três números, e verifiquem se esses números podem formar um triângulo. Se formarem escreva na tela “Formam um triângulo”, caso contrário escreva na tela “Não formam um triângulo”.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int l1, l2, l3, soma, sub;
    printf("Digite os três lados de um triângulo: ");
    scanf("%d" "%d" "%d", &l1, &l2, &l3);
    soma= l2+l3;
    sub= l2-l3;
    // absoluto ou  "móduolo" para gerar um valor sempre positivo, com a biblioteca math usamos abs("formula")
    if(sub<0){
        sub= sub*-1;
    }
    if(l1<soma && l1>sub){
        printf("Triângulo");
    } else{
        printf("Não é um triângulo");
    }

    return 0;
}
