/*
Faça uma função que receba 3 números (o primeiro por referência e os outros dois por
valor).

n1 por referencia

n2 e n3 por VALOR

se n1 for menor que n2, n1= n2

senão se n1>n3 alterar n1= n3

senão manter o valor de n1
*/
#include <stdio.h>

void f1(int *n1, int n2, int n3);

int main() {

    int a, b, c;
    printf("Informe o primeiro número: ");
    scanf("%d", &a);
    printf("Informe o segundo número: ");
    scanf("%d", &b);
    printf("Informe o terceiro número: ");
    scanf("%d", &c);

    f1(&a, b, c);

    printf("\na= %d b= %d c= %d", a, b, c);

    return 0;
}

void f1(int *n1, int n2, int n3) {
    if(*n1 < n2) {
        *n1 = n2;
    } else if(*n1 > n3) {
        *n1 = n3;
    }
}
