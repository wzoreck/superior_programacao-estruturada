/*
Ler três números, se o primeiro for diferente de zero somar o segundo e o terceiro e escrever a resposta na tela, caso contrário multiplicar o segundo e o terceiro e escrever o resultado na tela.
*/
#include <stdio.h>
int main(){
    float n1, n2, n3, calculo;
    printf("Digite o número 1 [valor de comparação]: ");
    scanf("%f", &n1);
    printf("Digite o número 2: ");
    scanf("%f", &n2);
    printf("Digite o número 3: ");
    scanf("%f", &n3);

    if( n1 != 0 ){
        calculo= n2+n3;
        printf("A soma %.2f + %.2f resulta em: %.2f", n2, n3, calculo);
    }else{
        calculo= n2*n3;
        printf("A soma %.2f * %.2f resulta em: %.2f", n2, n3, calculo);
    }

    return 0;
}
