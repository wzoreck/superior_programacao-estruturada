/*
Leia dois números que representem o custo de um produto, e o porcentual de desconto, calcule o preço que o cliente vai pagar e mostre a resposta (exemplo: custo 60 reais, 10% de desconto, valor que o cliente vai pagar 54).
Desconto = preço * (desconto / 100)
*/
#include <stdio.h>
int main(){
    float valor, desconto, total_desconto, total;
    printf("Digite o custo do produto: ");
    scanf("%f", &valor);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    total_desconto= valor*(desconto/100);
    total= valor-total_desconto;
    printf("O valor final do produto com %.0f%% de desconto fica: R$%.2f", desconto, total);

    return 0;
}
