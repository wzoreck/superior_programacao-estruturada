/*
Desenvolver um programa que leia duas strings e compare se elas são iguais (sem utilizar o strcmp).
*/
#include <stdio.h>
int main() {

    char s1[30], s2[30];
    int i, cont=0, iguais=0, diferentes=0;
    printf("Digite algo (s1): ");
    fgets(s1, 30, stdin);
    printf("Digite algo (s2): ");
    fgets(s2, 30, stdin);

    for(i=0; i<30; i++){
        if (s1[i] != '\0' && s2[i] != '\0') {
            cont++;
        } else{
            break;
        }
    }

    for(i=0; i<cont; i++){
        if(s1[i] == s2[i]){
            iguais++;
        } else{
            diferentes++;
        }
    }

    if(iguais == cont){
        printf("São iguais!");
    } else{
        printf("São diferentes!");
    }

    return 0;
}
