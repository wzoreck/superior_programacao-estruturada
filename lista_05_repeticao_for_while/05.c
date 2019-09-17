/*
Faça um programa que leia dois números, onde o primeiro deve ser menor que o segundo.
Seu programa deve mostrar na tela a soma dos números pares entre o primeiro e o segundo (acumulador).
*/
#include <stdio.h>
int main(){

    int n1, n2, entre, soma=0;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    while(n1>n2){
        printf("\nO primeiro número deve ser menor que o segundo número!");
        printf("\nDigite novamente dois valores: ");
        scanf("%d %d", &n1, &n2);
    }

    entre= n1+1;
    while(entre<n2){
        if(entre%2 == 0){
            soma+= entre;
        }
        entre++;
    }
    printf("A soma dos números pares entre %d e %d é igual a %d", n1, n2, soma);
    
    return 0;
}
