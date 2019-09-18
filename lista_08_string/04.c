/*
Desenvolva um programa que leia uma string e dois caracteres. Troque todas as ocorrências do primeiro caractere na string pelo segundo caractere.
*/
#include <stdio.h>
int main(){

    int constante= 20;
    char s[constante], a, b;
    printf("Digite algo: ");
    fgets(s, constante, stdin);
    printf("Informe o caractere que será substituido: ");
    scanf(" %c", &a);
    printf("Informe o novo caractere: ");
    scanf(" %c", &b);

    for(int i=0; i<constante; i++){
        if(s[i] == a){
            s[i]= b;
        }
    }

    puts(s);

    return 0;
}
