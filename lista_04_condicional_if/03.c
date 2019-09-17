/*
Faça um programa que leia 3 números. Se o terceiro número for 0, some o primeiro e o segundo número e mostre a resposta na tela. Caso contrário, se o terceiro número for 1, subtraia o segundo número do primeiro e mostre a resposta na tela. Caso contrário, se o terceiro número for 2, multiplique o primeiro número pelo segundo e mostre a resposta na tela. Caso contrário divida o primeiro número pelo segundo e mostre a resposta na tela.
*/
#include <stdio.h>
int main(){
    int n1, n2, n3, calculo;
    printf("Digite o nº1: ");
    scanf("%d", &n1);
    printf("Digite o nº2: ");
    scanf("%d", &n2);
    printf("Digite o nº3: ");
    scanf("%d", &n3);

    if(n3 == 0){
        calculo= n1+n2;
        printf("A soma %.2d + %.2d, resulta em: %.2d", n1, n2, calculo);
    }else{
        if(n3 == 1){
            calculo= n1-n2;
            printf("A subtração entre %.2d - %.2d, resulta em: %.2d", n1, n2, calculo);
        } else{
            if(n3 == 2){
                calculo= n1*n2;
                printf("A multiplicação %.2d * %.2d, resulta em: %.2d", n1, n2, calculo);
            } else{
                calculo= n1/n2;
                printf("A divisão %.2d / %.2d, resulta em: %.2d", n1, n2, calculo);
            }
        }
    }

    return 0;
}
