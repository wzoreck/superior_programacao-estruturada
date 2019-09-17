/*
Faça um programa que leia 10 números e calcule a média desses números, e mostre a média na tela (acumulador e calculo de média).
*/
#include <stdio.h>
int main(){

    int n, media=0, i;

    for(i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        media+= n;
    }
    media/= 10;
    printf("A média entre os %d números é: %d", i, media);

    return 0;
}
