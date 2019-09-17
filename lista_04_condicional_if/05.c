/*
Um triângulo retângulo possui dois catetos e uma hipotenusa. A hipotenusa é o maior dos lados do triângulo, e um triângulo retângulo obedece a regra:

Hipotenusa^2 = cateto adjacente^2 + cateto oposto^2

Faça um programa que leia 3 números, que representem três lados de um triângulo. Descubra qual é o maior lado (hipotenusa) e verifique se a regra acima é verdadeira. Se for verdadeira escreva na tela “Triângulo retângulo”, caso contrário escreva na tela “Triângulo não é retângulo”.
*/
#include <stdio.h>
#include <math.h>
int main(){
    float n1, n2, n3, c1, c2, hipotenusa;
    printf("Informe o lado 1 do triângulo: ");
    scanf("%f", &n1);
    printf("Informe o lado 2 do triângulo: ");
    scanf("%f", &n2);
    printf("Informe o lado 3 do triângulo: ");
    scanf("%f", &n3);

    if (n1>n2 && n1>n3){
        c1= n2*n2;
        c2= n3*n3;
        hipotenusa= sqrt(c1+c2);
        if(n1 == hipotenusa){
            printf("Triângulo retângulo!");
        } else{
            printf("Não é retângulo!");
        }
    } else if (n2>n1 && n2>n3){
        c1= n1*n1;
        c2= n3*n3;
        hipotenusa= sqrt(c1+c2);
        if(n2 == hipotenusa){
            printf("Triângulo retângulo!");
        } else{
            printf("Não é retângulo!");
        }
    } else if (n3>n1 && n3>n2){
        c1= n1*n1;
        c2= n2*n2;
        hipotenusa= sqrt(c1+c2);
        if(n3 == hipotenusa){
            printf("Triângulo retângulo!");
        }else{
            printf("Não é retângulo!");
        }
    }else{
        printf("Não é retângulo!");
    }

// Compilar com o g++
    return 0;
}
