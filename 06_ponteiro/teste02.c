#include <stdio.h>

int main() {

    int i = 10, j = 20;
    int *k = NULL; // neste caso k recebe NULL, pois acabemos de declarar k, mas tirando o caso de declaração não devemos usar *variavel = NULL pois alteraria o valor do endereçõ que a variável aponta

    printf("\ni: %p\t %d", &i, i);
    printf("\nj: %p\t %d", &j, j);
    printf("\nk: %p\t %d\n", &k, k);

    k = &i;
    printf("\nk: %p\t %p\t %d", &k, k, *k);

    *k = 30;
    printf("\nk: %p\t %p\t %d", &k, k, *k);

    k = &j;
    printf("\nk: %p\t %p\t %d", &k, k, *k);

    return 0;
}

void f1(int *num) {
    *num = 20; // neste caso endereço do endereço de num recebe 20, no caso i;
}
