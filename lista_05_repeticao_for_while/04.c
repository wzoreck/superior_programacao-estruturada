/*
Faça um programa que leia dois números, onde o primeiro deve ser menor que o segundo.
Seu programa deve mostrar na tela quantos números são pares entre o primeiro e o segundo (contador).
*/
#include <stdio.h>
int main(){
    
    int n1, n2, entre, contador=0;

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
            contador++;
        }
        entre++;
    }
    printf("Entre %d e %d existem %d números pares!", n1, n2, contador);

    return 0;
}
