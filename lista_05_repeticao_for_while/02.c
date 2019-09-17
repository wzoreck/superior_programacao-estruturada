/*
Faça um programa que leia dois números, onde o primeiro deve ser menor que o segundo.
Seu programa deve mostrar na tela todos os números entre o primeiro e o segundo.
*/
#include <stdio.h>
int main(){

    int n1, n2, entre;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    while(n1>n2){
        printf("\nO primeiro número deve ser menor que o segundo número!");
        printf("\nDigite novamente dois valores: ");
        scanf("%d %d", &n1, &n2);
    }

    entre= n1+1;
    while(entre<n2){
        printf("\n %d", entre);
        entre++;
    }

    return 0;
}
