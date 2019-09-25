/*
Desenvolver um programa que leia duas strings e concatene elas em uma terceira String com um espaço entre elas (sem utilizar o strcpy e o strcat).
*/
#include <stdio.h>
int main(){

    int constante=20;
    char s1[constante], s2[constante];
    int i, cont1=0, cont2=0;
    printf("Digite algo (s1): ");
    fgets(s1, constante, stdin);
    printf("Digite algo (s2): ");
    fgets(s2, constante, stdin);

    // Contagem do tamanho de cada string
    for(i=0; i<constante; i++){
        if(s1[i] != '\0'){
            cont1++;
        } else{
            break;
        }
    }
    for(i=0; i<constante; i++){
        if(s2[i] != '\0'){
            cont2++;
        } else{
            break;
        }
    }
    int tamanho_s3;
    tamanho_s3= cont1+cont2;

    // Concatenação
    char s3[tamanho_s3];
    int j=0;
    for(i=0; i<(tamanho_s3); i++){ // Percorre o vetor s3
        if(i<cont1){ // Seleciona se o caractere a ser adicionado em s3 é de s1 ou s2 com base no valor de i
            if(s1[i] != '\n'){ // Se caractere de s1[i] for diferente de '\n'
                s3[i]= s1[i]; // s3 recebe caractere de s1
            } else{ // senão, s1[i] vai ser igual a '\n'
                s3[i]= ' '; // Substitui o '\n' por ' '
            }
        } else{
            s3[i]= s2[j];
            j++;
        }
    }
    //acrescentar \0 no final do s3
    s3[tamanho_s3]= '\0';

    // Print
    puts(s3);

    return 0;
}
