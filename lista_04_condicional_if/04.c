/*
Um triângulo pode ser classificado de acordo com as medidas relativas de seus lados. Um triângulo que todos os lados têm a mesma medida é chamado de equilátero, se dois lados têm a mesma medida é chamado de isósceles e com lados de medidas diferentes é chamado de escaleno. Faça um programa que leia três números que representem os três lados de um triângulo, e escreva na tela “equilátero” ou “isósceles” ou “escaleno” dependendo de quantos lados são iguais. */
#include <stdio.h>
int main(){
    float n1, n2, n3;
    printf("Digite o lado 1 do triângulo: ");
    scanf("%f", &n1);
    printf("Digite o lado 2 do triângulo: ");
    scanf("%f", &n2);
    printf("Digite o lado 3 do triângulo: ");
    scanf("%f", &n3);

    if(n1 == n2 && n1 == n3){
        printf("Triângulo Equilátero!");
    } else{
        if(n1 == n2 || n1 == n3 || n2 == n3){
            printf("Triângulo Isósceles!");
        } else{
            if(n1 != n2 && n1 != n3 && n2 != n3){
                printf("Triângulo Escaleno!");
            }
        }
    }

    return 0;
}
