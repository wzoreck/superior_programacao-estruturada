/*
Faça uma função que receba um caractere e verifique se ele é uma vogal ou não. Se ele for
vogal retorne 1, caso contrario retorne 0.
*/
#include <stdio.h>

char isVowel(char c);

int main() {

    int retorno;
    char caracter;
    printf("Informe um caractere: ");
    scanf(" %c", &caracter);
    retorno = isVowel(caracter);
    if(retorno == 1) {
        printf("O caracter informado é uma vogal!");
    } else {
        printf("O caracter informado não é uma vogal!");
    }

    return 0;
}

char isVowel(char c) {
    int resposta = 0;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        resposta = 1;
    }
    return resposta;
}
