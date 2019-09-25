/*
(desafio) Desenvolver um programa que leia uma string e um caractere. Separar a string em N substrings separadas pelo caractere. Exemplo: String: “Programação Estruturada é a melhor disciplina”, caractere ‘ ’ (espaço em branco). Como o caractere aparece 5 vezes vai gerar 6 substrings. Substring1 = “Programação”, substring2 = “Estruturada”, substring3 = “é”, substring4 = “a”, substring5 = “melhor”, substring6 “disciplina”.
*/
#include <stdio.h>
#include <string.h>
int main() {

    int i, j, k, cont=1; // cont=1 pois sempre vai haver no mínimo 1 substring
    char string[20], c; // Vai gerar uma matriz de 5 linhas e 10 colunas

    // Entradas
    printf("Digite algo: ");
    fgets(string, 20, stdin);
    printf("Informe o caractere de comparação: ");
    scanf("%c", &c);

    // Contar qunatidade de substrings
    for(i=0; i<strlen(string)-1; i++){
        if(string[i] == c)
            cont++;
    }

    // Criação da Matriz, e zerando variavel auxiliar
    char vetorString[cont][20];
    k=0;
    // Inserindo substrings na matriz
    for(i=0; i<cont; i++){
        for(j=0; j<20; j++){
            if(string[k]!=c && string[k]!='\0'){
                vetorString[i][j]= string[k];
                k++;
            } else{
                vetorString[i][j]= '\0';
                k++;
                break;
            }
        }
    }

    // Saida
    for(i=0; i<cont; i++){
        puts(vetorString[i]);
    }

    return 0;
}
