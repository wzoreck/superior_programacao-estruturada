/*
Ler dois números que representem a base a altura de um triângulo, calcular a área e escrever a resposta.
Área Triângulo = altura * base
*/
#include <stdio.h>
int main(){
    int area, altura, base;
    printf("Digite a altura de um triângulo: ");
    scanf("%d", &altura);
    printf("Digite a base de um triângulo: ");
    scanf("%d", &base);
    area= altura*base;
    printf("\nA área de um triângulo com base %d e altura %d é = %d", base, altura, area);

    return 0;
}
