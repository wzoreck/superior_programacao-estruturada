/*
Leia uma matriz 5 x 5. Leia também um valor X. O programa devera fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/
#include <stdio.h>
int main() {

    int matriz[5][5], x, i, j, cont=0;

    // Entradas
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite um valor (posição [%d][%d])", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nInforme o caractere de comparação: ");
    scanf("%d", &x);

    // Processamento / saida
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matriz[i][j] == x){
                printf("\nO valor foi encontrado na linha %d, coluna %d", i, j);
                cont++;
            }
        }
    }

    if(cont == 0){
        printf("\nValor não encontrado");
    }

    return 0;
}
