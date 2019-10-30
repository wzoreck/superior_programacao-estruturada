/*
Faça uma função que receba três números e retorne o maior.
*/
#include <stdio.h>

int maior(int n1, int n2, int n3);

int main() {

    int v[3], resposta, i;
    for(i=0; i<3; i++) {
        printf("Informe o número %d: ", i+1);
        scanf("%d", &v[i]);
    }

    resposta = maior(v[0], v[1], v[2]);
    printf("\nO maior número é: %d", resposta);

    return 0;
}

int maior(int n1, int n2, int n3) {
    if(n1 > n2 && n1 > n3) {
        return n1;
    } else if(n2 > n1 && n2 > n3) {
        return n2;
    } else {
        return n3;
    }
}
