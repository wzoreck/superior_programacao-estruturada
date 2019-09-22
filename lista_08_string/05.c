/*
Desenvolver um programa que leia uma string e crie uma segunda string que seja a primeira string invertida.
*/
#include <stdio.h>
int main(){

    char v[30];
    int i, cont=0;
    // Entrada
    fgets(v, 30, stdin);

    // Processamento
     // Contagem de caracteres
    for(i=0; i<30; i++){
        if(v[i] != '\n'){
            cont++;
        } else{
            break;
        }
    }

     // Declaração do novo vetor com o tamanho exatao
    char v2[cont];

     // Invertendo a string
     int j=0;
    for(i=cont-1; i>=0; i--){
        v2[i]= v[j];
        j++;
    }
    v2[cont]= '\n'; // Utilizado o próprio valor de cont pois a string invertida foi armazenada entre os índices 0 e cont-1
    v2[cont+1]= '\0';

     // Saída
    printf("%s", v2);

    return 0;
}
