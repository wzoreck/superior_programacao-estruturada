/*
Faça uma função que receba 3 números por parâmetro e os deixe em ordem crescente
(passagem de parâmetro por referência).
*/
#include <stdio.h>

void ordenar(int *a, int *b, int *c);

int main() {




    return 0;
}

void ordenar(int *a, int *b, int *c) {
    int maior, meio, menor;
    if (*a>*b && *a>*c && *b>*c){
        maior = *a;
        meio = *b;
        menor = *c;
    } else if(*c>*b) {
        maior = *a;
        meio = *c;
        menor = *b;
    } else if (*b>*a && *b>*c && *a>*c){
        maior = *b;
        meio = *a;
        menor = *c;
    } else if(*c>*a){
        maior = *b;
        meio = *c;
        menor = *a;
    } else if (*c>*a && *c>*b && *a>*b){
        maior = *c;
        meio = *a;
        menor = *b;
    } else {
        maior = *c;
        meio = *b;
        menor = *a;
    }
}
