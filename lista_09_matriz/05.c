/*
Leia uma matriz e verifique se ela é uma matriz diagonal (uma matriz diagonal tem todos os elementos fora da diagonal principal igual a zero).
*/
#include <stdio.h>
int main(){

    int matriz[4][4], i, j, diagonalPrincipal=0, foraDiagonal=0;

    // Entrada de dados
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Informe um valor, posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            // Comparação se é uma matriz diagonal
            if(i != j && matriz[i][j] == 0){
                foraDiagonal++;
            } else{
                if(matriz[i][j] != 0)
                    diagonalPrincipal++;
            }
        }
    }

    // Saida e comparação final para conclusão
    if(foraDiagonal == 12 && diagonalPrincipal == 4){
        printf("\nMatriz diagonal!");
    } else{
        printf("\nNão é uma matriz diagonal");
    }

    return 0;
}
