/*
Ler um número que representa um ano, e escrever na tela “Ano bissexto” se no ano for bissexto, caso contrário escrever na tela “ano não bissexto”.
*/
#include <stdio.h>
int main(){
    int ano;
    //int divisao_400, divisao_4, divisao_100;
    printf("Digite o valor de um ano: ");
    scanf("%d", &ano);

/*
    divisao_400= ano%400;
    divisao_4= ano%4;
    divisao_100= ano%100;

    if( divisao_400 == 0 ){
        printf("Ano bissexto!");
    }else{
        if( divisao_4 == 0 && divisao_100 != 0 ){
            printf("Ano bissexto!");
        }else{
            printf("Ano não bissexto!");
        }
    }

*/
    // modo mais simples
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0 )){
        printf("Ano bissexto!");
    } else{
        printf("Ano não bissexto!");
    }

    return 0;
}
