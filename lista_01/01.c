/*
Ler um número e calcular qual número é o antecessor dele e qual número é o sucessor dele, e mostrar na tela.
*/
#include <stdio.h>
int main(){
    int n, ante, suce;
    printf("Digite um numero: ");
    scanf("%d", &n);
    ante= n-1;
    suce= n+1;
    printf("\nO antecessor de %d é %d\n", n, ante);
    printf("O sucessor de %d é %d", n, suce);

    return 0;
}
