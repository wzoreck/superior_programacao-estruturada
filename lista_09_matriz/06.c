/*
Leia uma matriz e verifique se ela é triangular superior (se todos os elementos abaixo da diagonal principal são zero)
Quando os elementos à esquerda e abaixo da diagonal principal forem nulos, teremos uma matriz triangular superior, ou, simplesmente, se Aij = 0, para i > j.
*/
#include <stdio.h>
int main(){

    int matriz[4][4], i, j, abaixoDiagonalPrincipal=0, acimaDiagonalPrincipal=0;

    // Entrada de dados
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Informe um valor, posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            // Comparações
            if(i>j && matriz[i][j] == 0){
                abaixoDiagonalPrincipal++;
            } else{
                if(matriz[i][j] != 0)
                    acimaDiagonalPrincipal++;
            }
        }
    }

    // Saida e comparação final
    if(abaixoDiagonalPrincipal == 6 && acimaDiagonalPrincipal <= 10){
        printf("\nÉ uma matrix triangular superior!");
    } else{
        printf("\nNão é uma matrix triangular superior!");
    }

    return 0;
}
