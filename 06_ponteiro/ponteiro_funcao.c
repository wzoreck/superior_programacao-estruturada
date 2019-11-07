#include <stdio.h>

void teste(int *n);

int main() {

    // ao passar o atributo na função, ao invés de passar a conteúdo da variável, passamos o endereço da variável

    int a = 10;
    teste(&a);
    printf("%d", a);

    return 0;
}

void teste(int *n) {
    *n = 30; // estamos alterando o valor de onde n referência, no caso a variável a
}
