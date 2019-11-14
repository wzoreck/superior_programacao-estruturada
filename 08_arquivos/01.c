/*  1- criar um ponteiro para o tipo FILE

    2- ABRIR Arquivo

    3- informar o diretório ou nome do arquivo, caso esteja na mesma pasta

    4-  modo | descricao
        w    | Write --> apaga tudo - cursor inicio
        w+   | Write + read --> apaga tudo - cursor inicio
        r    | read --> não apaga - cursor inicio
        r+   | read + write --> não apaga - cursor inicio
        a    | append --> não apaga - cursor final
        a+   | append + read --> não apaga - cursor final

    5- verificar se foi possível abrir o arquivo

*/
#include <stdio.h>

int escreverArq();

int main() {

    escreverArq();

    return 0;
}

int escreverArq() {
    FILE *f; // primeiro criar um ponteiro para o tipo FILE
    f= fopen("arq.txt", "a"); // f recebe o endereço do arquivo | Caso o arquivo não exista ele será criado! | caso não seja possível abrir o arquivo f irá receber um NULL
    if(f == NULL) {
        return 1;
    }
    /*
    fputs("1\thp\t200\n", f); // gravar a string "1 hp  200" no arquivo f
    fputs("2\tlg\t300\n", f);
    */

    // saída formatada
    int x = 10, y = 20;
    char z[6] = "daniel";
    fprintf(f, "%d\t%s\t%d\n", x, z, y);

    fclose(f); // sair do arquivo
    return 0;
}
