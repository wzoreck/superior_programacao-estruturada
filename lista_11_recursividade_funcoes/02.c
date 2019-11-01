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

int main() {

    int teste = MDC(25, 15);
    printf("\nValor %d", teste);



    return 0;
}

int MDC(int m, int n) {
    int r = m%n;
    m = n;
    n = r;
    if(r > 0) {
        int x = MDC(m, r);
        return x;
    }
}
