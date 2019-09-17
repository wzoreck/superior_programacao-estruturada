/*
Faça um programa que leia um número. Esse número representa quantos números devem ser lidos em seguida. Leia todos esses números e mostre a média dos que são maiores que 10(contador e acumulador, calculo de média)
*/
#include <stdio.h>
int main(){

    int i=0, acumulador=0, soma=0, n, quantidade_n;
    float media_final;

    printf("Digite quantos números devem ser lidos: ");
    scanf("%d", &quantidade_n);

    while(i<quantidade_n){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &n);
        if(n>10){
            soma+= n;
            acumulador++;
        }
        i++;
    }
    media_final= soma/acumulador;
    printf("A média da soma de %d números maiores que 10 é: %.2f", acumulador, media_final);

    return 0;
}
