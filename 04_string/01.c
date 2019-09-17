#include <stdio.h>
int main(){

    /*
    Uma string em C nada mais é do que um vetor de caracteres
    Quando falamos de string usamos aspas duplas ""
    Qaundo falamos de caracteres usamos aspas simples ''
    */

    // Se você quer fazer uma atribuição simples pode-se fazer na hora da declaração ex: char s[30] = "Aula de PES";
    /*
    char s[30] = "Aula de PES";
    int i;

    for(i=0; i<30; i++){
        printf("%d %c\n", s[i], s[i]); // Todo caractere pode ser convertido para um inteiro, tabela ASCII
        // O 0 que aparece é o caractere '/0' que é o NULL
    }
    */
    //-----------------------------------------------------------------------------------------------------------------

    // Inicialização posição por posição
    /*
    int i;
    char s2[4];
    s2[0]= ' ';
    s2[1]= '\n';
    s2[2]= '\t'; // '\t' tabulação
    s2[3]= '\0'; // '\0' NULL, sempre será interpretado como final de string

    for(i=0; i<4; i++){
        printf("%c = %d\n", s2[i], s2[i]);
    }
    */
    //------------------------------------------------------------------------------------------------------------------

    // Inicialização por input
    /*
    int i;
    char v[11];

    for(i=0; i<11; i++){
        printf("Digite o número %d do seu cpf: ", i+1);
        scanf(" %c", &v[i]); // Deixar um espaço antes do %c para não dar o erro
    }
    for(i=0; i<11; i++){
        printf("%c", v[i]);
    }
    */
        // Capturar todo texto da linha, vai ler até o primeiro espaço
    /*
    char v[30];
    int i;
    scanf("%s", v);

    for(i=0; i<30; i++){
        printf("%c", v[i]);
    }
    */
    //-------------------------------------------------------------------------------------------------------------------
    //fgets - lê os espaços
    // fgets(string, número_maximo_de_caracteres, método);
    char s[20];
    fgets(s, 20, stdin); // vai ler até 20 ou até o primeiro enter
    // ao final do fgets é colocado um \n e um \0

    // EX 1 print:
    printf("%s", s);

    // EX 2 print:
    int i;
    for(i=0; i<20; i++){
        printf("%c = %d\n", s[i], s[i]);
    }

    // EX 3 print:
    puts(s);

    return 0;
}
