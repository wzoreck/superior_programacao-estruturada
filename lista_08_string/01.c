/*
Desenvolver um programa que leia uma string e descubra o tamanho dela (sem utilizar o strlen).
*/
#include <stdio.h>
int main(){

    char s[30];
    int i, cont=0;
    printf("Digite algo: ");
    scanf("%s", s);

    for(i=0; i<30; i++){
        if(s[i] != '\0'){
            cont++;
        } else{
            break; // caso s[i] seja igual a \0 usamos o break para sair do for e evitar que os espaços de memória após o \0 sejam contados
        }
    }
    printf("O tamanho da string é de: %d", cont);

    return 0;
}
