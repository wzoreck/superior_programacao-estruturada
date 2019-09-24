/*
Desenvolver um programa que leia uma strings e verificar se é um palíndromo (escrita da mesma forma do inicio ao fim e do fim ao inicio, exemplos: arara, esse, mirim, reviver)
*/
#include <stdio.h>
int main(){

    char palindromo[30];
    int i, quantidadeCaracteres=0;

    printf("Digite algo: ");
    fgets(palindromo, 30, stdin);

    // Contagem do tamanho da string
    for(i=0; i<30; i++){
        if(palindromo[i] != '\n'){
            quantidadeCaracteres++;
        } else{
            break;
        }
    }

    // Processamento
    // Invertendo string
    char palindromoInvertido[quantidadeCaracteres];
    int aux= quantidadeCaracteres-1;

    for(i=0; i<quantidadeCaracteres; i++){
        palindromoInvertido[i]= palindromo[aux];
        aux--;
    }
    palindromoInvertido[quantidadeCaracteres]= '\n'; // Finalizando string
    palindromoInvertido[quantidadeCaracteres+1]= '\0';
    //puts(palindromoInvertido);

    // Comparação
    int iguais=0;
    for(i=0; i<quantidadeCaracteres; i++){
        if(palindromo[i] == palindromoInvertido[i]){
            iguais++;
        }
    }

    // Saídas
    if(iguais == quantidadeCaracteres){
        printf("É um palindromo!");
    } else{
        printf("Não é um palindromo");
    }

    return 0;
}
