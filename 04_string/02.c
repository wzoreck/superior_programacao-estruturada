#include <stdio.h>
#include <string.h> // Nos fornece várias funcões prontas que facilitarão nossa vida
int main(){
    char s[10], s1[10], s2[0];
    int i;

    printf("Digite algo: ");
    fgets(s1, 10, stdin); // Vai ler 9 caracteres no máximo e no décimo será inserido o \0
    i= strlen(s1); // Vai contar o tamanho da string, para de contar quando encontra um \0, a contagem vai ser até o valor anterior do \0
    printf("%d posições - %s\n", i, s1);

    s1[2]='\n';
    i= strlen(s1);
    printf("%d posições - %s\n", i, s1);

    s1[2]= '\0';
    i= strlen(s1);
    printf("%d posições - %s\n", i, s1);

    printf("\nDigite outra coisa: ");
    fgets(s, 10, stdin);
    strcpy(s2, s); // Os valores de s serão copiados para s2
    puts(s2);

    // comparação de string strcmp(string1, string2);
    // Se i==0 iguais
    // i<0 s1<s2
    // i>0 s1>s2
    // EX:
    printf("Digite algo para s1: ");
    fgets(s1, 10, stdin);
    printf("Digite algo para s2: ");
    fgets(s2, 10, stdin);
    i= strcmp(s1, s2);
    printf("%d", i);

    // Concatenacao de string strcat(string1, string2); EX:
    // s1 = [programacao\n\0]
    // s2 = [estruturada]
    // strcat(s1, s2);
    // s1 = [programacao\nestruturada\n\0]
    // print seria igual a:
    // puts(s1);
    // programacao
    // estruturada
    printf("\nCom concatenação:\n");
    strcat(s1, s2);
    puts(s1);

    return 0;
}
