/*
Ler três números que representam três notas de um aluno, calcular a média ponderada e mostrar a resposta. Os pesos para cada uma das notas são respectivamente 1, 3 e 6.
Média ponderada três notas = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3)
*/
#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    media= (n1*1 + n2*3 + n3*6)/10;
    printf("A média ponderada do aluno é: %.2f", media);

    return 0;
}
