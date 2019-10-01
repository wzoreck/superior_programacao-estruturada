/*
Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais. Fazer um programa que leia um número N, uma matriz quadrada NxN e verifique se é um quadrado mágico.

EX:

8   0  7
4   5  6
3  10  2

É um quadrado mágico, pois a soma de cada linha é 15, de cada coluna é 15, da diagonal principal é 15 e da diagonal secundaria é 15.
*/
#include <stdio.h>
int main(){

    int n;
    printf("Informe um valor, (constante do sistema): ");
    scanf("%d", &n);

    // Declaração variáveis, matriz, vetores, acumuladores
    int matriz[n][n], i, j, linha[n], coluna[n], diagonalPrincipal=0, diagonalSecundaria=0;

    // Zerando posições de vetores
    for(i=0; i<n; i++){
        linha[i]=0;
        coluna[i]=0;
    }

    // Entradas matriz e comparações
    for(i=0;  i<n; i++){
        for(j=0; j<n; j++){
            printf("Informe um valor, posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Soma elementos linha
            linha[i]+= matriz[i][j];

            // Soma elementos coluna
            coluna[j]+= matriz[i][j];

            // Soma elementos diagonal principal
            if(i==j){
                diagonalPrincipal+= matriz[i][j];
            }

            // Soma elementos diagonal secundária
            if((i+1)+(j+1) == n+1){
                diagonalSecundaria+= matriz[i][j];
            }
        }
    }

    // Saída
    printf("\n\n");
    int Boole=0;
    for(i=0; i<n; i++){
        if(linha[i] == coluna[i] && linha[i] == diagonalPrincipal && linha[i] == diagonalSecundaria){
            Boole= 1;
        }
        printf("\nLinha posição [%d]: %d", i, linha[i]);
        printf("\nColuna posição [%d]: %d", i, coluna[i]);

    }
    printf("\nDiagonal principal: %d", diagonalPrincipal);
    printf("\nDiagonal secundária: %d", diagonalSecundaria);

    if(Boole == 1){
        printf("\n\nÉ um quadrado mágico!");
    } else{
        printf("\n\nNão é um quadrado mágico!");
    }

    return 0;
}
