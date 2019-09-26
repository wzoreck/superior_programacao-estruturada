/*
Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
*/
#include <stdio.h>
int main() {

    int matriz1[4][4], matriz2[4][4], matriz3[4][4], i, j;

    // Entradas
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite um valor para a matriz 1 (posição [%d][%d])", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite um valor para a matriz 2 (posição [%d][%d])", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Processamento
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(matriz1[i][j] > matriz2[i][j]){
                matriz3[i][j]= matriz1[i][j];
            } else{
                matriz3[i][j]= matriz2[i][j];
            }
        }
    }

    // Saida
    printf("\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
