/*
Faça um programa que leia dois números, que representem a velocidade de um carro e a velocidade máxima permitida na via. Se a velocidade do carro for menor ou igual à velocidade máxima escrever na tela “Sem multa”. Caso contrário se a velocidade do carro ultrapassar a velocidade máxima em até 10 km/h, escrever na tela “Multa de 50 reais”. Caso contrário se a velocidade do carro ultrapassar a velocidade máxima entre 11 e 30 km/h, escrever na tela “Multa de 100” reais. Caso contrário escrever na tela “Multa de 200” reais.
*/
#include <stdio.h>
int main(){
    float velocidade, velocidade_max, calculo;
    printf("Digite a velocidade do carro: ");
    scanf("%f", &velocidade);
    printf("Digite a velocidade máxima permitida na via: ");
    scanf("%f", &velocidade_max);

    if( velocidade <= velocidade_max ){
        printf("Sem multa!");
    }else{
        calculo= velocidade-velocidade_max;
        if( calculo <= 10 ){
            printf("Multa de 50 reais");
        }else{
            if ( calculo>10 && calculo<=30 ){
                printf("Multa de 100");
            }else{
                printf("Multa de 200");
            }
        }
    }

    return 0;
}
