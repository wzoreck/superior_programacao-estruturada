/*
Faça um programa que leia um número e calcule o fatorial deste número e mostre o resultado na tela (acumulador com multiplicação).
(a fatorial) a! = a*(a-1)!, exemplo: 5! = 5*4! = 5*4*3! = 5*4*3*2! = 5*4*3*2*1! = 5*4*3*2*1 (1! = 1).
*/
#include <stdio.h>
int main(){

    int n1, fatorial, contador;

    printf("Digite um número: ");
    scanf("%d", &n1);

    contador= n1;
    fatorial= n1;
    while(contador>=2){
        fatorial= fatorial*(contador-1);
        contador--;
    }
    printf("O fatorial de %d é: %d", n1, fatorial);

    return 0;
}
