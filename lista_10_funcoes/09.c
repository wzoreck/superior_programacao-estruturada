/*
Faça uma função que receba 2 números por parâmetro e troque o valor deles (passagem de
parâmetro por referência).
*/
#include <stdio.h>

void troca(int *n1, int *n2);

int main() {

    int a=5, b=10;
    troca(&a, &b);
    printf("a = %d | b = %d", a, b);

    return 0;
}

void troca(int *n1, int *n2) {
    int x;
    x = *n1;
    *n1 = *n2;
    *n2 = x;
}
