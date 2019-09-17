/*
Faça um programa que leia um número. Esse número representa quantos números devem ser lidos   em   seguida. Leia   todos   esses   números   e   mostre   quantos   são   menores   que   10(contador).
*/
#include <stdio.h>
int main(){

    int quantidade, n, menores=0, i=0;

    printf("Digite quantos números devem ser lidos: ");
    scanf("%d", &quantidade);

    while(i<quantidade){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &n);
        if(n<10){
            menores++;
        }
        i++;
    }
    printf("O total de números menores do que 10 são: %d", menores);

    return 0;
}
