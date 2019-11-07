#include <stdio.h>

int main() {
    int i = 5;
    printf("endereço de i = %p \t valor = %d\n", &i, i);
    i=10;
    /* Quando usamos &variável, estamos acessando o endereço de memória da variável */
    printf("endereço de i = %p \t valor = %d\n", &i, i);
    i=15;
    printf("endereço de i = %p \t valor = %d\n", &i, i);
    i=20;
    printf("endereço de i = %p \t valor = %d\n", &i, i);
    int j=25;
    printf("endereço de j = %p \t valor = %d\n", &j, j);

    /* uma variável possui um endereço, podemos usar outra variável para armazenar o endereço dessa variável, a variável que armazena enderço é chamada de ponteiro, para isso fazemos: */
    int *h;
    h = &i;
    printf("\n\nendereço de h = %p\t valor de h, endereço de i = %p\t aponta = %d", &h, h, *h);
    i = 10;
    printf("\n\nendereço de h = %p\t valor de h, endereço de i = %p\t aponta = %d", &h, h, *h);
    *h = 21;
    printf("\n\nendereço de h = %p\t valor de h, endereço de i = %p\t aponta = %d", &h, h, *h);

    /*

    &variável --> endereço da variável

    variável --> conteúdo da variável

    *variável --> conteúdo de onde a variável aponta

    - DENTRO DE UMA FUNÇÃO NÃO PODEMOS AALTERAR O VALOR DA VARIÁVEL DE OUTRA FUNÇÃO, MAS COM PONTEIROS PODEMOS CONTORNAR ESSA CITUAÇÃO

    */

    return 0;
}
