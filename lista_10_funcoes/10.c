/*
Faça uma função que receba 3 números por parâmetro e os deixe em ordem crescente
(passagem de parâmetro por referência).
*/
#include <stdio.h>

void ordenar(int *a, int *b, int *c);

int main() {

    int x, y, z;
    printf("Informe o primeiro número: ");
    scanf("%d", &x);
    printf("Informe o segundo número: ");
    scanf("%d", &y);
    printf("Informe o terceiro número: ");
    scanf("%d", &z);

    ordenar(&x, &y, &z);

    printf("\n%d %d %d", x, y, z);

    return 0;
}

void ordenar(int *a, int *b, int *c) {
    int v[3], i;
    int menor=*a, meio=*b, maior=*c;
    v[0] = *a;
    v[1] = *b;
    v[2] = *c;
    for(i=0; i<3; i++) {
        if(v[i] < menor) {
            menor= v[i];
        }
    }
    for(i=0; i<3; i++) {
        if(v[i] > maior) {
            maior= v[i];
        }
    }
    for(i=0; i<3; i++) {
        if(v[i] > menor && v[i] < maior) {
            meio= v[i];
        }
    }
    *a= menor;
    *b= meio;
    *c= maior;
}
