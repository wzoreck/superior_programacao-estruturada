/*
Um banco oferece diferentes taxas de correção (anual) dependendo do valor investido. Se um cliente investe até R$ 2000 (inclusive) o banco utiliza a taxa de correção de 8% do valor. Para valores maiores que R$ 2000 e até R$ 5000 (inclusive) a de correção é de 10%. Para valores maiores que R$ 5000 a taxa de correção é de 12%. Faça um programa que leia um número que representa o valor investido pelo cliente. Calcule o retorno do investimento e mostre o valor na tela.
*/
#include <stdio.h>
int main(){
    float valor_investimento, valor_final, lucro;
    printf("Informe o valor do seu investimento: ");
    scanf("%f", &valor_investimento);

    if( valor_investimento <= 2000 ){
        lucro= valor_investimento*0.08;
        valor_final= valor_investimento+lucro;
        printf("O seu lucro foi de %.2f o valor final fica: %.2f", lucro, valor_final);
    } else{
        if( valor_investimento>2000 && valor_investimento<=5000 ){
            lucro= valor_investimento*0.1;
            valor_final= valor_investimento+lucro;
            printf("O seu lucro foi de %.2f o valor final fica: %.2f", lucro, valor_final);
        }else{
            lucro= valor_investimento*0.12;
            valor_final= valor_investimento+lucro;
            printf("O seu lucro foi de %.2f o valor final fica: %.2f", lucro, valor_final);
        }
    }

    return 0;
}
