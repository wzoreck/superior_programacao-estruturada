/*
Leia uma matriz de 5x5. Gere dois vetores de 5 posições cada, no primeiro vetor, cada posição deve ter a média dos elementos de uma das linhas da matriz (elemento 1 do vetor é a media dos elementos da primeira linha, elemento 2 média dos elementos da segunda linha ...). No segundo vetor cada posição deve ter a média dos elementos de uma das colunas do vetor (elemento 1 do vetor é a media dos elementos da primeira coluna, elemento 2 média dos elementos da segunda coluna ...).
*/
#include <stdio.h>
int main(){

    int constante=5;
    int i, j;
    float matriz[constante][constante],linhas[constante], colunas[constante];

    // Zerando vetor linhas e vetor colunas
    for(i=0; i<constante; i++){
        linhas[i]=0;
        colunas[i]=0;
    }

    // Entradas
    for(i=0; i<constante; i++){
        for(j=0; j<constante; j++){
            printf("Informe um valor, posição[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            // Vetor 1 linha
            linhas[i]+= matriz[i][j]/constante;
            // Vetor 2 coluna
            colunas[j]+= matriz[i][j]/constante;
        }
    }

    // Saída
    // linhas
    for(i=0; i<constante; i++){
        printf("\nMédia linha posição [%d]: %.2f", i, linhas[i]);
    }
    // colunas
    for(i=0; i<constante; i++){
        printf("\nMédia coluna posição [%d]: %.2f", i, colunas[i]);
    }

    return 0;
}
