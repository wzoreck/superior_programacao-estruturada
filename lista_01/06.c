/*
Ler três números que representem as variáveis ‘a’, ‘b’ e ‘c’ da fórmula “a.x + b = c”. Calcule o valor de ‘x’ e escreva na tela. (Antes de colocar a fórmula no seu programa você deve fazer manipulações matemáticas para isolar o x antes do igual).
*/
#include <stdio.h>
int main(){
    float calculo, a, b, c;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);
    printf("\nFormula: ((a.x)+b)= c");
    calculo= (c-b)/a;
    printf("\nValor de x: %.2f", calculo);

    return 0;
}
