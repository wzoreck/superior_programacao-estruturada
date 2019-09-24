/*
Desenvolver um programa que leia uma string e verifique quantas vezes cada caractere da string se repetiu.
*/
#include <stdio.h>
int main(){

    char string[30];
    int i, qtdCaracteres;

    printf("Digite algo: ");
    fgets(string, 30, stdin);

    // Contagem tamanho string
    for(i=0; i<30; i++){
        if(string[i] != '\n'){
            qtdCaracteres++;
        } else{
            break;
        }
    }

    // Declaração vetores auxiliares
    int repeticoes[qtdCaracteres], j;
    // Iniciando posições com zero
    for(i=0; i<qtdCaracteres; i++){
        repeticoes[i]= 0;
    }

    // Comparações
    for(i=0; i<qtdCaracteres; i++){
        for(j=0; j<(i+1); j++){
            if(string[i] == string[j]){
                repeticoes[j]++;
                break;
            }
        }
    }

    // Saídas
    /*  Teste de mesa vetor que conta repetições

    printf("[");
    for(i=0; i<qtdCaracteres; i++){
        printf(" %d", repeticoes[i]);
    }
    printf("]");
    */

    for(i=0; i<qtdCaracteres; i++){
        if(repeticoes[i]>1){
            printf("O caractere %c se repete %d vezes\n", string[i], repeticoes[i]);
        }
    }

    return 0;
}
