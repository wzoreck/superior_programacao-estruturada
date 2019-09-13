// Informa quantos números são pares e a soma dos pares;
#include <stdio.h>
int main(){
    int n, i= 0, qtd= 0, soma= 0;
    /*
    Um contador é utilizado para contar o número de vezes que um evento (uma instrução) ocorre, ou seja, contar a quantidade de vezes que uma instrução é executada. Um contador é uma variável (qualquer) que recebe ela mesma mais um valor (uma constante).

    Um acumulador, também conhecido como Somador, é utilizado para obter somatórios. Um acumulador (somador) é uma variável (qualquer) que recebe ela mesma mais uma outra variável.


    Neste exemplo a variável qtd é o contador e a variável soma é o acumulador
    */
    while(i < 4){
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n%2 == 0){
            qtd++;
            soma+= n;
        }
        i++;
    }
    printf("Total de números pares: %d", qtd);
    printf("\nTotal da soma de pares: %d", soma);

    return 0;
}
