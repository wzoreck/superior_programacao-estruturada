#include <stdio.h>
int main(){
    float tempo_viagem, velocidade_media, consumo, distancia, litros_combustivel;
    printf("Informe o tempo de viagem, Horas: ");
    scanf("%f", &tempo_viagem);
    printf("Informe a velocidade média, Km/h: ");
    scanf("%f", &velocidade_media);
    printf("Informe o consumo, Litros: ");
    scanf("%f", &consumo);
    if(consumo <= 0){ // Se o consumo informado for menor ou igual a 0 executa os comandos do bloco abaixo
        // comandos condicionados a uma seleção lógica
        printf("O consumo informado foi menor ou igual a zero!");
    }else{ // Caso o cosumo seja maior que 0 executa os comandos do bloco abaixo
        // comandos condicionados a uma seleção lógica
        distancia= tempo_viagem*velocidade_media;
        litros_combustivel= distancia/consumo;
        printf("O consumo durante o percurso foi de %.2fKm/l", litros_combustivel);
    }

    return 0;
}
