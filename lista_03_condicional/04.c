/*
Ler um número, se o número for maior ou igual a zero escrever positivo, caso contrário escrever negativo.
*/
#include <stdio.h>
int main(){
    float n1;
    printf("Digite um número: ");
    scanf("%f", &n1);
    
    if(n1 >= 0){
        printf("Positivo");
    }else{
        printf("Negativo");
    }

    return 0;
}
