/*
Ler dois números, um que representa a altura e outro que representa o sexo de uma pessoa (0 para masculino, qualquer outro valor para feminino). Calcular o peso ideal e mostrar a resposta na tela.
*/
#include <stdio.h>
int main(){
    float altura, masculino, feminino;
    int sexo;
    printf("Digite seu sexo [0 Masculino, outro para Feminino]: ");
    scanf("%d", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(sexo == 0 ){
        masculino = (72.7*altura)-58;
        printf("O peso ideal para você é: %.2f", masculino);
    }else{
        feminino = (62.1*altura)-44.7;
        printf("O peso ideal para você é: %.2f", feminino);
    }

    return 0;
}
