/*
Leia dois números que representem respectivamente o preço do litro da gasolina e do litro
do álcool, calcule quanto custa uma mistura de 1 litro contendo 75% gasolina e 25% álcool.
Preço mistura = preço gasolina * (75/100) + preço álcool * (25/100)
*/
#include <stdio.h>
int main(){
    float gasolina, alcool, mistura;
    printf("Digite o preço do litro de gasolina: ");
    scanf("%f", &gasolina);
    printf("Digite o preço do litro de álcool: ");
    scanf("%f", &alcool);
    mistura= gasolina*0.75 + alcool*0.25;
    printf("Uma mistura de 1 litro contendo 75%% de gasolina e 25%% de álcool custa: R$%.2f", mistura);
    
    return 0;
}
