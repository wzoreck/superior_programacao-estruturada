#include <stdio.h>
int main(){

    int x;

    printf("Digite um valor: ");
    scanf("%d", &x);

    while(x<0){
        printf("Valor menor que 0! digite novamente: ");
        scanf("%d", &x);
    } // neste while por ter somente 1 comando não é obrigatório utilizar chaves!
    printf("%d", x);

    return 0;
}
