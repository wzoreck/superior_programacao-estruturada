/*
Ler um número, se ele for divisível (divisão ter resto igual a zero) por 4 e por 6 escrever na tela “divisível” caso contrário escrever “não divisível”.
*/
#include <stdio.h>
int main(){
    int n1, divisao_4, divisao_6;
    printf("Digite um número: ");
    scanf("%d", &n1);

    divisao_4= n1%4;
    divisao_6= n1%6;

    if(divisao_4 == 0 && divisao_6 == 0){
        printf("Divisível!");
    }else{
        printf("Não Divisível!");
    }

    return 0;
}
