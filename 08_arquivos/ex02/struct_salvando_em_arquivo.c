#include <stdio.h>
#include <string.h>

struct livro {
    int id;
    char titulo[20];
    int pag;
};

int escreverArq(struct livro livro);
int lerArq();
int lerTodoArq();
int lerTodoArqSalvar();



int main() {
    /*
    struct livro l1;

    printf("Informe o nome do livro: ");
    fgets(l1.titulo, 20, stdin);
    l1.titulo[strlen(l1.titulo) -1] = '\0'; // inserir o \0 no final da string
    printf("\nInforme o ID do livro: ");
    scanf("%d", &l1.id);
    printf("\nInforme o nº de páginas do livro: ");
    scanf("%d", &l1.pag);


    escreverArq(l1); // Função para escrever no arquivo
    //printf("\n\n\n");
    //lerArq();  Função para ler o aquivo
    printf("\n\n\n");
    lerTodoArq();
    */

    lerTodoArqSalvar();

    return 0;
}




int escreverArq(struct livro livro) {
    FILE *f;
    f= fopen("arq.txt", "a");
    if(f == NULL) {
        return 1;
    }

    // saída formatada
    fprintf(f, "%d\t%s\t%d\n", livro.id, livro.titulo, livro.pag);

    fclose(f); // sair do arquivo
    return 0;
}

int lerArq() {
    FILE *f;
    f = fopen("arq.txt", "r");
    if(f==NULL)
        return 1;
    char entrada[50];
    fgets(entrada, 50, f); // meio de entrada vai ser o arquivo no caso f
    puts(entrada);

    fclose(f);
    return 0;
}

int lerTodoArq() {
    FILE *f;
    f = fopen("arq.txt", "r");
    if(f==NULL)
        return 1;
    char entrada[50];
    while(!feof(f)) {
        fgets(entrada, 50, f); // meio de entrada vai ser o arquivo no caso f
        puts(entrada);
    }

    fclose(f);
    return 0;
}

int lerTodoArqSalvar() {
    FILE *f;
    struct livro livroLido;
    f = fopen("arq.txt", "r");
    if(f==NULL)
        return 1;
    char entrada[50];
    while(!feof(f)) {
        fscanf(f, "%d\t%s\t%d\n", &livroLido.id, livroLido.titulo, &livroLido.pag);
        printf("%d\t%s\t%d\n", livroLido.id, livroLido.titulo, livroLido.pag);
    }

    fclose(f);
    return 0;
}
