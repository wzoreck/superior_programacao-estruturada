/*
Ler três números, se o primeiro ou o segundo for maior que terceiro escrever na tela “pelo menos 1 deles é maior”, caso contrário escrever na tela “nenhum dos dois é maior”.
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

    if (n1>n3 || n2>n3){
        printf("pelo menos 1 deles é maior");
    }else{
        printf("nenhum dos dois é maior");
    }

    return 0;
}
