/*
Ler 4 números que representem, respectivamente, a largura e altura de uma parede, largura e altura de uma janela retangular. Calcule a área da parede a ser pintada (área da parede menos área da janela), e mostre a resposta.
*/
#include <stdio.h>
int main(){
    float a1, l1, a2, l2, area_p, area_j, pintura;
    scanf("%f" "%f" "%f" "%f", &a1, &l1, &a2, &l2);
    area_p= a1*l1;
    area_j= a2*l2;
    pintura= area_p-area_j;
    printf("A área da parede a ser pintada é: %.2fm²", pintura);

    return 0;
}
