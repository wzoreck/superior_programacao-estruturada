/*
Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1
+ 2 + 3, que são seus divisores). A função deve retornar 1 se o número é perfeito e 0 caso
contrario.
*/
#include <stdio.h>

int numeroPerfeiro(int n);

int main() {

    int numero, verificarPerfeito;
    printf("Informe um número: ");
    scanf("%d", &numero);

    verificarPerfeito = numeroPerfeiro(numero);

    if(verificarPerfeito == 1) {
        printf("\nO número %d é perfeito!", numero);
    } else {
        printf("\nO número %d não é perfeito!", numero);
    }

    return 0;
}
int numeroPerfeiro(int n) {
    int i, somaDivisores=0;
    if((n%2) == 0){
        for(i=1; i<n; i++) {
            if((n%i) == 0) {
                somaDivisores+= i;
            }
        }
        if(somaDivisores == n) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
