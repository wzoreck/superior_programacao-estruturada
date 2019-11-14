#include <stdio.h>

// Tipo eterogêneo, é um tipo e dentro dela tem vários tipos

struct carro {

    char marca[20];
    char modelo[20];
    int ano;
    float preco;

};

int main() {

    struct carro c1;

    fgets(c1.marca, 20, stdin);
    fgets(c1.modelo, 20, stdin);
    scanf("%d %f", &c1.ano, &c1.preco);

    printf("Marca: %s\t Modelo: %s\t Ano: %d\t Preço: %f", c1.marca, c1.modelo, c1.ano, c1.preco);

    return 0;
}
