/*
Faça um programa que leia um número e verifique se ele é primo ou não, e mostre essa informação na tela. A é primo se A não for divisível por nenhum número entre 2 e A-1
*/
#include <stdio.h>
int main(){
    int n1, contador=2, primo, igualz=0;
    printf("Digite um número: ");
    scanf("%d", &n1);

    while(contador<=(n1-1)){ // poderia ser feito igual ao explicado em aula,fazendo n1/2 como parâmetro de comparação, pois após o n1/2 somente n1 é divisivel por n1. Isso evita processamento desnecessário
        primo= n1%contador;
        if(primo == 0){
            igualz++;
        }
        contador++;
    }

    if(igualz == 0){
        printf("%d e um número primo!", n1);
    } else {
        printf("%d não e um número primo!", n1);
    }

    return 0;
}
