#include <stdio.h>

struct film {
    int film_id;
    char title[100];
    char description[200];
    char realease_year[10];
    char language[30];
    int rental_duration;
    float rental_rate;
    int length;
};

struct category {
    int category_id;
    char name[25];
};

struct film_category {
    struct film *filme;
    struct category *categoria;
};


int main() {

    struct film *filme1;
    filme1= malloc(sizeof(struct film));

    struct category *categoria1;
    categoria1= malloc(sizeof(struct category));

    struct film_category *categoria_filme1;
    categoria_filme1= malloc(sizeof(struct film_category));

    categoria_filme1->filme1;
    categoria_filme1->categoria1;

    printf("Informe o título do filme:");
    fgets(categoria_filme1-> , 100, stdin)
    printf("\nDescrição do filme: ");
    printf("\nAno de lançamento: ");
    printf("\nLinguagem: ");
    printf("\nDuração de aluguel: ");
    printf("\nTaxa de alugel: ");
    printf("Tempo de duração filme: ");

    printf("Categoria: ");



    return 0;
}
