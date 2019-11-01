/*
A função a seguir calcula o MDC (máximo divisor comum) de dois inteiros positivos m e n.
Escreva uma função recursiva equivalente.

int MDC (int m, int n){
    int r = 1;
    while(r !=0){
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}

*/
#include <stdio.h>

int MDC(int m, int n);
int r = 1;

int main() {

    int teste = MDC(40, 60);
    printf("\nValor %d", teste);

    return 0;
}

int MDC(int m, int n) {
    if(r != 0) {
        r = m%n;
        int x = MDC(n, r);
    } else {
        return m;
    }
}
