/*
Desenvolver um programa que leia uma string e um caractere, conte quantas vezes o caractere digitado aparece na string. Exemplo: string: “teste de programação”, caractere = ‘e’. O caractere aparece 3 vezes na string.
*/
#include <stdio.h>
int main(){

    char v[30], caractere;
    int i, cont=0;

    // Entradas
    printf("Digite algo: ");
    fgets(v, 30, stdin);
    printf("Digite o caractere de comparação: ");
    scanf("%c", &caractere);


    // Processamento
    for(i=0; i<30; i++){
        if(v[i] != '\n'){
            if(v[i] == caractere){
                cont++;
            }
        } else{
            break;
        }
    }

    // Saída
    printf("\nO caractere (%c) apareceu %d vezes", caractere, cont);

    return 0;
}
