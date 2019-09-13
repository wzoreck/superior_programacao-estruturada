/*
Ler um número que represente uma temperatura em graus Celsius, converter o valor para graus Fahrenheit, e escrever a resposta.
*/
#include <stdio.h>
int main(){
    int graus, conversao;
    printf("Informe a temperatura em graus Celcius: ");
    scanf("%d", &graus);
    conversao= (graus*9/5)+32;
    printf("\n%d°C = %d°F", graus, conversao);

    return 0;
}
