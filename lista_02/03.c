/*
Leia 3 números que representem um horário no formato horas, minutos e segundos, calcule o tempo equivalente em segundos, e mostre a resposta (exemplo: 1 hora 40 minutos 10 segundos correspondem a 6010 segundos).
1 hora = 60 minutos
1 minuto = 60 segundos
*/
#include <stdio.h>
int main(){
    int v[3], total_segundos;
    printf("Digite os valores para Horas, Minutos e Segundos: ");
    scanf("%d" "%d" "%d", &v[0], &v[1], &v[2]);
    total_segundos= ((v[0]*60)*60) + (v[1]*60) + v[2];
    printf("%d hora %d minutos e %d segundos corresponde a %d segundos", v[0], v[1], v[2], total_segundos);

    return 0;
}
