/*
Considerando que um carro que tenha o consumo de 12 km por litro de combustível, faça um programa que leia dois números que representem o tempo de viagem e a velocidade média, calcule a quantos litros de combustível foram gastos e mostre a resposta.
Distância = tempo * velocidade média
Litros = Distância / consumo
*/
#include <stdio.h>
int main(){
    float tempo, velocidade_media, distancia, litros, consumo;
    printf("Digite o tempo de viagem, Horas: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média, Km/h: ");
    scanf("%f", &velocidade_media);
    distancia= tempo*velocidade_media;
    litros= distancia/12;
    printf("Neste percurso você gastou: %.2f Litros", litros);

    return 0;
}
