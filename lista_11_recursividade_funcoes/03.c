/*
Escreva funções recursivas para as seguintes regras:
    1. Sequência de Ackerman;
    2. MOD;
    3. DIV;
    4. Fibonacci;
    5. MMC.

*/
#include <stdio.h>

int ackerman(int n);
int mod(int x, int y);
int div(int x, int y);
int fib(int n);
int mmc(int x, int y);

int main() {

    int funcao;
    printf("Escolha a função que deseja realizar", );

    switch (variável) {
    case constante1:
     Instruções;
    break;

    case constante2:
     Instruções;
    break;

    default
     Instruções;
    }

    int sequenciaDeAckerman;
    printf("Digite um número para a sequência de ackerman: ");
    scanf("%d", &sequenciaDeAckerman);
    sequenciaDeAckerman = ackerman(sequenciaDeAckerman);
    printf("\nresultado: %d", sequenciaDeAckerman);


    return 0;
}

int ackerman(int n) {
    if(n > 2) {
        int x;
        x = 2*ackerman(n -1)+3*ackerman(n-2);
        return x; // as chamadas de função poderiam ser feitas diretamente no return, assim dispensando o uso da variável x
    } else if(n == 1) {
        return 1;
    } else if(n == 2) {
        return 2;
    }

}

int mod(int x, int y) {
    if(x > y) {
        int resultado;
        resultado = mod(x-y, y);
        return resultado;
    } else if(x < y) {
        return x;
    } else if(x == y){
        return 0;
    }
}
