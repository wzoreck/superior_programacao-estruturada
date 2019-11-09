/*
vetores e matrizes, a passagem de parâmetros será por referência
*/
#include <stdio.h>

void preencherMatrix(int l, int c, int m[l][c]);
void preencherVetor(int l, int v[l]);

int main() {

    int v[5], m[5][5];
    int i, j;

    preencherVetor(5, v);
    preencherMatrix(5, 5, m);

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for(i=0; i<5; i++){
        printf("%d\t", v[i]);
    }

    return 0;
}

void preencherMatrix(int l, int c, int m[l][c]) {
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            m[i][j] = 1;
        }
    }
}

void preencherVetor(int l, int v[l]) {
    int i;
    for(i=0; i<5; i++){
        v[i] = 0;
    }
}
