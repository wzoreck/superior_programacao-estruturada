/*
Desenvolver um programa que leia duas strings, verificar se a segunda está contida na primeira.
*/
#include <stdio.h>
int main(){

    char s1[30], s2[30];
    int i, cont1=0, cont2=0;

    // Entradas
    printf("Digite algo [s1]: ");
    fgets(s1, 30, stdin);
    printf("Digite algo [s2]: ");
    fgets(s2, 30, stdin);

    // Processamento
     // Contagem tamanho de cada string
    for(i=0; i<30; i++){
        if(s1[i] != '\n'){
            cont1++;
        } else{
            break;
        }
    }
    for(i=0; i<30; i++){
        if(s2[i] != '\n'){
            cont2++;
        } else{
            break;
        }
    }

     // Verificações
    int j, cont3=0;

    if(cont2>cont1){ // Se a segunda for maior que a primeira
        printf("\nA segunda não está contida na primeira!");
    } else{
        for(i=0; i<cont1; i++){ // Percorrer a primeira string
            if(s1[i] == s2[cont3] && s1[i+(cont2-1)] == s2[cont2-1]){ // Se o caracter de s1 na posição i for igual ao primeiro caracter de s2, e s1 na suposta ultima posição for igual ao ultimo caractere de s2
                for(j=0; j<cont2; j++){
                    if(s1[i+j] == s2[j]){
                        cont3++;
                    } else{ // Caso conhecida de haver o primieiro e o ultimo caracter iguais ao da string 2, mas a palavra não for igual, zeramos o contador
                        cont3=0;
                        break;
                    }
                }
            }
        }
        if(cont3 == cont2){
            printf("\nA segunda está contida na primeira!");
        } else{
            printf("\nA segunda não está contida na primeira!");
        }
    }

    return 0;
}
