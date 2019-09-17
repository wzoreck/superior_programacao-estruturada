/*
Faça um programa que leia o peso e a altura, calcule o índice de massa corporal (IMC). Se o IMC for menor que 16 escreva na tela “Magreza Grave”, senão, se for menor que 18.5 escreva   na   tela   “Magreza   moderada”,   senão,   se   for   menor   que   25   escreva   na   tela “Saudável”, senão, se for menor  que 30 escreva  na tela “Sobrepeso”,  senão,  escreva “Obesidade”. Faça com que o código seja repetido 10 vezes (leia o peso, altura, calcule o IMC, e mostre a resposta na tela para 10 pessoas diferentes) IMC = peso/(altura*altura)
*/
#include <stdio.h>
int main(){

    float fIMC, fPeso, fAltura;
    int iMagrezaG= 0, iMagrezaM= 0, iSaudavel= 0, iSobrepeso= 0, iObesidade= 0;

    for(int i=0; i<10; i++){
        printf("\nDigite seu peso: ");
        scanf("%f", &fPeso);
        printf("Digite sua altura: ");
        scanf("%f", &fAltura);

        fIMC= fPeso/(fAltura*fAltura);

        if(fIMC<16){
            printf("\nPessoa com %.2fKg e %.2fm de altura, Status:\n", fPeso, fAltura);
            printf("Magreza Garave!\n");
            printf("O IMC é: %.2f\n", fIMC);
            iMagrezaG++;
        } else if(fIMC<18.5){
            printf("\nPessoa com %.2fKg e %.2fm de altura, Status:\n", fPeso, fAltura);
            printf("Magreza Moderada!\n");
            printf("O IMC é: %.2f\n", fIMC);
            iMagrezaG++;
        } else if(fIMC<25){
            printf("\nPessoa com %.2fKg e %.2fm de altura, Status:\n", fPeso, fAltura);
            printf("Saudável!\n");
            printf("O IMC é: %.2f\n", fIMC);
            iSaudavel++;
        } else if(fIMC<30){
            printf("\nPessoa com %.2fKg e %.2fm de altura, Status:\n", fPeso, fAltura);
            printf("Sobrepeso!\n");
            printf("O IMC é: %.2f\n", fIMC);
            iSobrepeso++;
        } else{
            printf("\nPessoa com %.2fKg e %.2fm de altura, Status:\n", fPeso, fAltura);
            printf("Obesidade!\n");
            printf("O IMC é: %.2f\n", fIMC);
            iObesidade++;
        }
    }
    printf("\nTotal de pessoas com Magreza Grave: %d\n", iMagrezaG);
    printf("Total de pessoas com Magreza Moderada: %d\n", iMagrezaM);
    printf("Total de pessoas Saudáveis: %d\n", iSaudavel);
    printf("Total de pessoas com Sobrepeso: %d\n", iSobrepeso);
    printf("Total de pessoas com Obesidade: %d\n", iObesidade);

    return 0;
}
