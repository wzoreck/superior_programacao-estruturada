/*
Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos definidos de acordo com seus índices, da seguinte forma:
A[i][j] = 2i + 7j − 2       se i < j;
A[i][j] = 3i^2 − 1          se i = j;
A[i][j] = 4i^3 − 5j^2 + 1   se i > j.
*/
#include <stdio.h>
#include <math.h>
int main(){

    int constante=10; // Basta alterar o valor da constante para reduzir a matriz
    int matriz[constante][constante], i, j;

    // Entrda
    for(i=0; i<constante; i++){
        for(j=0; j<constante; j++){
            printf("Informe o valor (posição [%d][%d]: )", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Processamento
    for(i=0; i<constante; i++){
        for(j=0; j<constante; j++){
            if(i < j){
                matriz[i][j]= 2*i+7*j-2;
            } else if(i > j){
                matriz[i][j]= 4*pow(i,3) - 5*pow(j,2)+1;
            } else{
                matriz[i][j]= 3*pow(i,2)-1;
            }
        }
    }

    // Saida
    printf("\n");
    for(i=0; i<constante; i++){
        for(j=0; j<constante; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Executar com o compilador g++

    return 0;
}
