#include <stdio.h>

struct livro {
    char titulo[20];
    int paginas;
    int id;
};

struct pessoa {
    char nome[20];
    int idade;
    int id;
};
/*
struct emprestimo {
    int id;
    char data[10];
    struct livro *livro;
    struct pessoa *pessoa;
}
*/

int main() {
    struct pessoa listaPessoas[5];
    struct livro listaLivros[5];

    //struct emprestimo listaEmprestimo[20];

    int i;
    // Cadastro de 5 pessoas
    for(i=0; i<5; i++) {
        printf("Cadastro pessoa %d\n", i+1);
        printf("Nome pessoa %d: ", i+1);
        scanf(" %s", listaPessoas[i].nome);
        /*fflush(stdin);
        fgets(listaPessoas[i].nome, 20, stdin);*/
        printf("\nIdade pessoa %d: ", i+1);
        scanf("%d", &listaPessoas[i].idade);
        printf("\nID pessoa %d: ", i+1);
        scanf("%d", &listaPessoas[i].id);
        printf("\n\n");
    }
    printf("\n\n");
    for(i=0; i<5; i++) {
        printf("Cadastro livro %d\n", i+1);
        printf("Título livro %d: ", i+1);
        scanf(" %s", listaLivros[i].titulo);
        //fgets(listaLivros[i].titulo, 20, stdin);
        printf("\nNúmero de página livro %d: ", i+1);
        scanf("%d", &listaLivros[i].paginas);
        printf("\nID livro %d: ", i+1);
        scanf("%d", &listaLivros[i].id);
    }

    char nomeInformado[20], nomeLivroInformado[20];
    int idPessoa, idLivro;
    printf("\n\nInforme o nome da pessoa: ");
    scanf(" %s", &nomeInformado);
    printf("\nInforme o ID da pessoa: ");
    scanf("%d", &idPessoa);
    printf("\n\nInforme o título do livro: ");
    scanf(" %s", &nomeLivroInformado);
    printf("\nInforme o ID do livro: ");
    scanf("%d", &idPessoa);

    // Fazer um while que procure por livro (titulo e id), e procure por pessoa (titulo e id)
    int controle=0, posicaoPessoa[2], posicaoLivro[2];
    while(controle != -1) {
        if(listaPessoas[controle].nome == nomeInformado) {
            posicaoPessoa[0]= controle;
        }
        if(listaLivros[controle].titulo == nomeLivroInformado) {
            posicaoLivro[0]= controle;
        }
        if(listaPessoas[controle].id == idPessoa) {
            posicaoPessoa[1]= controle;
        }
        if(listaLivros[ccontrole].id == idLivro) {
            posicaoLivro[1]= controle;
        }

        if(listaPessoas[controle].nome == nomeInformad && listaPessoas[controle].id == idPessoa && listaLivros[controle].titulo == nomeLivroInformado && listaLivros[ccontrole].id == idLivro) {
            controle = -1;
            printf("\n\nPessoa: %s", listaPessoa[posicaoPessoa[0]].nome);
            printf("\nLivro: %s", listaLivro[posicaoLivro[0]].titulo);
        } else {
            controle++;
        }
    }


    return 0;
}
