/*
Ler um número que represente um lado de um quadrado, calcular a área e escrever a resposta.
*/
#include <stdio.h>
int main(){
    int l, area;
    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%d", &l);
    area = l*l;
    printf("\nA área do quadrado e igual a: %d", area);
    
    return 0;
}
