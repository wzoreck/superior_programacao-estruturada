/*
Faça um programa que leia dois números, e calcule o primeiro elevado ao segundo e mostre o resultado na tela (acumulador com multiplicação).
*/
#include <stdio.h>
int main(){

    int n1, n2, acumulador, contador=1;

    printf("Digite 2 números: ");
    scanf("%d %d", &n1, &n2);

    acumulador= n1;
    while(contador<n2){
        acumulador*= n1;
        contador++;
    }
    printf("O valor %d elevado a %d, é igual a %d", n1, n2, acumulador);

    return 0;
}
