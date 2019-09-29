/*
Faça um programa que leia uma matriz de 10 linhas e 5 colunas. Cada linha representa uma pergunta de um teste e cada coluna representa a resposta do aluno atual. Leia um vetor de 10 posições que representa o gabarito do teste. Considerando que cada questão vale 1 ponto, calcule a nota dos 5 alunos.
*/
#include <stdio.h>
int main(){

    char teste[10][5], gabarito[10];
    int i, j;

    // Entrada de dados
    printf("As escolhas possíveis na prova são [a, b, c, d]!\n\n");
    // entra de dados do teste
    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            printf("Digite a resposta %d escolhida, aluno %d: ", j+1, i+1);
            scanf(" %c", &teste[j][i]);
        }
        printf("\n");
    }
    // entrada de dados do gabarito
    printf("Gabarito!\n\n");
    for(i=0; i<10; i++){
        printf("Informe a resposta correta para a pergunta %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }

    // Comparações acertos
    int notas[5];
    // zerando vetor de notas
    for(i=0; i<5; i++){
        notas[i]= 0;
    }
    // comparações
    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            if(teste[j][i] == gabarito[j]){
                notas[i]++;
                //printf("\n%d", gabarito[i]);
            }
        }
    }

    // Informando a nota dos alunos
    for(i=0; i<5; i++){
        printf("\nAluno %d tirou %d", i+1, notas[i]);
    }

    return 0;
}
