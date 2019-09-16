/*
Ler quatro números, que representem quatro notas, calcular a média, se a média for maior ou igual a 6 escrever na tela “Aprovado”, caso contrário escrever “Reprovado”.
*/
#include <stdio.h>
int main(){
    float n1, n2, n3, n4, media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    media= (n1+n2+n3+n4)/4;

    if( media >= 6){
        printf("Aluno aprovado com média %.2f", media);
    }else{
        printf("Aluno reprovado com média %.2f", media);
    }

    if((n1 && n2 && n3 && n4) < 0){
        printf("Uma nota digitada foi inferior a 0");
    }

    return 0;
}
