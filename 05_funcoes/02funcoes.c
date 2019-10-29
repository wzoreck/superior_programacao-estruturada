#include <stdio.h>

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
