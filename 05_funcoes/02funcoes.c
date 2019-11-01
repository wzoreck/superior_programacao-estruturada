#include <stdio.h>

// Estas funções declaradas antes servem para o programa reconhescer antes a existência das funções, ajuda a evitar futuros erros por conta da ordem de criação das funções
void func1();
void funcComParametro();
int dobroNumero( int num );
float soma(float n1, float n2);

// declarando variáveis globais, se a variável for declarada fora da função main() ela se torna global, em qualquer parte do código é possível acessar o valor da variável

int i;

int main() {


    func1();

    i = 20;
    printf("i global dentro do main = %d\n", i);

    // Parâmetros
    i = 30;
    funcComParametro(i);
    funcComParametro(100);

    // retorno da resposta
    int d = dobroNumero(200);
    printf("\nO dobro do valor informado é %d", d);

    // retorno da função soma() que possui 2 parâmetros
    float s = soma(3, d); // variável d vale 400
    printf("\n\nA soma de 3 e d é = %f", s);


    return 0;
}

/* Caractereisticas de funções, (tipo de retorno, nome, parametros)

    EX:

    TIPO - void, int, char, float ...
    NOME - Funcao1, Daniel, Soma (escolha a seu critério) ...
    ATRIBUTOS - TIPO NOME(int i, char c, float f, ...)

    -------------------------------------------------------------------------

    As variáveis declaradas em uma função só existem nela. É conhecido como variável local

    Ao passar um parâmetro em uma função, a função rebece uma cópia do valor original da variável, se o valor passado for alterado ele não irá alterar o valor da vairável inicial fora da função

    Deve haver uma variável no código principal para receber o valor de retorno gerado pela função (caso a função funcione dessa maneira)

    -------------------------------------------------------------------------

    Variáveis globais existem em todo o seu programa

*/

void func1() {
    i = 10;
    printf("i global na func1 = %d\n", i);
}

void funcComParametro( int i ) {
    printf("i na função com parâmetro = %d\n", i);
}

int dobroNumero( int num ) {
    int resultado = num*2;
    return resultado;
}

float soma(float n1, float n2) {
    float r = n1+n2;
    return r;
}
