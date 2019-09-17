/*
Faça um programa que leia 4 números, calcule a soma dos que forem par e mostre a resposta na tela.
*/
#include <stdio.h>
int main(){
    int n[4], somaPares= 0, i;
    for(i=0; i<4; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &n[i]);
    }

    for(i=0; i<4; i++){
        if(n[i]%2 == 0){
            somaPares+= n[i];
        }
    }
    printf("A soma dos números pares resultou em: %d", somaPares);

    return 0;
}
