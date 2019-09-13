/*
Ler três números que representam as variáveis ‘a’, ‘b’ e ‘c’ da fórmula “ a.x^2+b.x+c=0”. Calcular o valor de x1 e x2, e mostrar as respostas. (Bhaskara!)
*/
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, x1, x2;
    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("Digite um valor para C: ");
    scanf("%f", &c);
    // x1
    x1= (-b - sqrt(pow(b,2)-4*a*c))/2*a;
    printf("O valor do x1 é: %.2f", x1);
    // x2
    x2= (-b + sqrt(pow(b,2)-4*a*c))/2*a;
    printf("\nO valor do x2 é: %.2f", x2);
    // g++ usar este compilador neste exercício
    // Caso for executar no terminal g++ 09.c
    // ./a.out

    return 0;
}
