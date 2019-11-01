/*
Faça uma função recursiva para resolver a seguinte equação de recorrência:
T(n) = 2T(n/2) + n;
T(1) = 1
*/
#include <stdio.h>

int  T(int n);

int main() {

    int x;
    printf("Informe um valor: ");
    scanf("%d", &x);
    x = T(x);
    printf("\nRetornou: %d", x);

    return 0;
}

int T(int n) {
    if(n > 1) {
        n = 2*T(n/2)+n;
        return n;
    } else {
        return 1;
    }
}
