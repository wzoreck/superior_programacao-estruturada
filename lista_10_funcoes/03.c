/*
Faça uma função que receba um número inteiro e retorne o valor absoluto dele (o valor
positivo).
*/
#include <stdio.h>

int valorAbsoluto(int n);

int main() {

    int valor, vAbsoluto;
    printf("Informe um valor: ");
    scanf("%d", &valor);
    vAbsoluto = valorAbsoluto(valor);
    printf("O valor absoluto de %d é %d", valor, vAbsoluto);

    return 0;
}

int valorAbsoluto(int n) {
    if(n < 0) {
        n = n*-1;
    }
    return n;
}
