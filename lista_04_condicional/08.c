#include <stdio.h>
int main(){
    //Faça um programa que leia três números e escreva na tela em ordem crescente.
    int n1, n2, n3, maior, medio, menor;
    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>n2 && n1>n3){
        maior= n1;
        if(n2>n3){
            medio= n2;
            menor= n3;
        } else{
            medio= n3;
            menor= n2;
        }
    } else{
        if(n2>n3){
            maior=n2;
            if(n1>n3){
                medio= n1;
                menor= n3;
            } else{
                medio= n3;
                menor= n1;
            }
        } else{
            maior= n3;
            if(n1>n2){
                medio= n1;
                menor= n2;
            } else{
                medio= n2;
                menor= n1;
            }
        }
    }
    printf("%d, %d, %d", menor, medio, maior);

    return 0;
}
