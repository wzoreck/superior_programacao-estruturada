/*
Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa
idade expressa em dias.
*/
#include <stdio.h>

int diasVida(int ano, int mes, int dia);

int main() {

    int ano, mes, dia, nDiasVida;
    printf("Quantos anos você tem: ");
    scanf("%d", &ano);
    printf("Quantos meses se passaram desde seu aniversário: ");
    scanf("%d", &mes);
    printf("Qual dia do mês é hoje: ");
    scanf("%d", &dia);

    nDiasVida = diasVida(ano, mes, dia);

    printf("\nVocê tem aproximadamente %d dias de vida", nDiasVida);

    return 0;
}

int diasVida(int ano, int mes, int dia) {
    int Dias=0;
    Dias+= ano*365;
    Dias+= mes*30;
    Dias+= dia;
    return Dias;
}
