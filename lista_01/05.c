/*
Ler um número que represente a base de um triângulo equilátero (todos os lados têm a mesma medida), calcular a área do triângulo e escrever a resposta.
Altura Triângulo Equilátero = base/2 * 1.73
*/
#include <stdio.h>
int main(){
    float base, area;
    printf("Digite a base de um triângulo equilátero: ");
    scanf("%f", &base);
    area= (base/2)*1.73;
    printf("\nA área de um triangulo equilátero de base %.2f é = %.2f", base, area);

    return 0;
}
