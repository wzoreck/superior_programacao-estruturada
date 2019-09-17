#include <stdio.h>
int main(){
    // Faça um programa que leia três números e escreva na tela o maior.
    int n1, n2, n3;
    printf("Digite três números: ");
    scanf("%d" "%d" "%d", &n1, &n2, &n3);

    if(n1>n2 && n1>n3){
        printf("%d é o maior número!", n1);
    } else if(n2>n1 && n2>n3){
        printf("%d é o maior número!", n2);
    } else if(n3>n1 && n3>n2){
        printf("%d é o maior número!", n3);
    }

    return 0;
}
