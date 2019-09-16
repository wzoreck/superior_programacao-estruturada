/*
Ler um número, se ele for divisível (divisão ter resto igual a zero) por 3 ou por 8 escrever na tela “divisível” caso contrário escrever “não divisível”.
*/
#include <stdio.h>
int main(){
    int n1, resto_3, resto_8;
    printf("Digite um número: ");
    scanf("%d", &n1);

    resto_3= n1%3;
    resto_8= n1%8;

    if(resto_3 == 0 || resto_8 == 0){
        printf("Divísível!");
    }else{
        printf("Não Divisível!");
    }

    return 0;
}
