/*
Ler um número, se ele for par escrever na tela “Par”, caso contrário escrever na tela “Impar”.
*/
#include <stdio.h>
    int main(){
    int n1, calculo;
    printf("Digite um número: ");
    scanf("%d", &n1);

    calculo= n1%2; // % = mod

    if( calculo == 0 ){
        printf("Par!");
    }else{
        printf("Impar!");
    }

    return 0;
}
