/*
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal secundária.
*/
#include <stdio.h>
int main(){

    int matriz[3][3], i, j, acumuladorDigonalSecundaria=0;

    // Entrada
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Informe um valor, posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            // Comparação diagonal secundária (i+1)+(j+1)=4 neste caso
            if((i+1)+(j+1) == 4){
                acumuladorDigonalSecundaria+= matriz[i][j];
            }
        }
    }

    // Saída
    printf("A somatória dos valores da diagonal secundária resultou em: %d", acumuladorDigonalSecundaria);

    return 0;
}
