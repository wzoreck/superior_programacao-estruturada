/*
Ler dois números, escrever na tela “iguais” se eles forem iguais, ou “diferentes” caso contrário.
*/
#include <stdio.h>
int main(){
    float n1, n2;
    printf("Digite o número 1: ");
    scanf("%f", &n1);
    printf("Digite o número 2: ");
    scanf("%f", &n2);

    if(n1 == n2){
        printf("Iguais!");
    }else{
        printf("Diferentes!");
    }

    return 0;
}
