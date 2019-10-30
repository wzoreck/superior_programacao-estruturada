/*
Faça uma função que recebe um número inteiro e verifica se é positivo ou negativo. A
função deve retornar 1 se for positivo e 0 se for negativo.
*/
#include <stdio.h>

int verificarSinal(int n);

int main() {

    int x, verificacao;
    printf("Informe um número: ");
    scanf("%d", &x);
    verificacao = verificarSinal(x);
    if(verificacao == 1) {
        printf("\nPositivo!");
    } else {
        printf("\nNegativo!");
    }

    return 0;
}

int verificarSinal(int n) {
    int sinal = 1;
    if(n < 0) {
        sinal = 0;
    }
    return sinal;
}
