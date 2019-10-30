/*
Faça uma função que receba um inteiro, um caractere, um inteiro, nesta ordem. Se o
caractere for igual a ‘+’ ou ‘-’ ou ‘x’ ou ‘/’ faça a operação correspondente ao caractere e
retorne o resultado. Se o caractere não for igual a nenhum dos símbolos retorne 0.
*/
#include <stdio.h>

int conta(int n1, char c, int n2);

int main() {

    int n1, n2, resultado;
    char c;
    printf("Informe a operção que deseja realizar ['+', 'x' ou '/']: ");
    scanf(" %c", &c);
    printf("Informe um número: ");
    scanf("%d", &n1);
    printf("Informe outro número: ");
    scanf("%d", &n2);

    resultado = conta(n1, c, n2);
    printf("O resultado da conta %d %c %d é: %d", n1, c, n2, resultado);

    return 0;
}

int conta(int n1, char c, int n2) {
    int resposta;
    if(c == '+') {
        resposta = n1+n2;
    } else if(c == 'x') {
        resposta = n1*n2;
    } else if(c == '/') {
        resposta = n1/n2;
    } else {
        return 0;
    }
    return resposta;
}
