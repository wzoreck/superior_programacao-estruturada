#include <stdio.h>

struct pessoa{
    char nome[20];
    int idade;
};

struct carro{
    char marca[20];
    char modelo[20];
    int ano;
    float preco;
    //struct pessoa;  --> isso não é recomendado a se fazer, o melhor é:
    struct pessoa *p; // o atributo p de carro, é um ponteiro para o tipo pessoa
}; // È obrigatório colocar o ponto e vírgula

int main() {
    // Criar uma variável do tipo carro
    struct carro c1; // Dentro de c1 existe tudos os atributos da struct
    // Passar o valor direto, usar strcpy(c1.marca, "marca"), necessita de uma biblioteca

    // Vetor de 'carros' ex: carros[10], teriamos: carros[0].marca, carros[0].modelo ...

    return 0;
}


/*TESTE DE MESA

c1
|marca   | modelo|
|        |       |
|ano|preco|p     | endereco 0x100
|   |      |0x200|

p1
|nome |
|     |  endereco 0x200
|idade|
|     |

*/
