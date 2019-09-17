/*
Ler dois números, que representam o salário de uma pessoa, e o valor de parcela que a pessoa está se comprometendo a pagar por um determinado período. Se o valor da parcela for menor que 20% do salário da pessoa escrever na tela “Parcela Aprovada”, caso contrário escrever na tela “Parcela Reprovada”.
*/
#include <stdio.h>
int main(){
    float salario, parcela, p_salario;
    printf("Digite o valor do salário: ");
    scanf("%f", &salario);
    printf("Digite o valor da parcela: ");
    scanf("%f", &parcela);

    p_salario= salario*0.2;

    if( parcela < p_salario ){
        printf("Parcela Aprovada");
    }else{
        printf("Parcela Reprovada");
    }
    return 0;
}
