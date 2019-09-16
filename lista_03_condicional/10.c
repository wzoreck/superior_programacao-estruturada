/*
Ler três números, se o primeiro for maior que o segundo e que o terceiro escrever na tela “é maior que os dois”, caso contrário escrever na tela “não é maior que os dois”.
*/
#include <stdio.h>
int main(){
    float n1, n2, n3;
    printf("Digite o número 1: ");
    scanf("%f", &n1);
    printf("Digite o número 2: ");
    scanf("%f", &n2);
    printf("Digite o número 3: ");
    scanf("%f", &n3);

    if( n1>n2 && n1>n3 ){
        printf("é maior que os dois");
    }else{
        printf("não é maior que os dois");
    }

    return 0;
}
