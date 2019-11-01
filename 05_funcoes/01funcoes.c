#include <stdio.h>
#include <math.h>

void func1();
void func2();
void func3();
void func4();

int main (){ // o main em si já é uma função, essa função é responsável por iniciar o nosso programa

    //int i = sqrt(9);  outro exemplo de função sendo chamada, realiza a raiz quadrada do número informado

    // void significa que não vai ter retorno, podemos escolher o tipo de retorno das nossas funções, ex:

    /*
        void func1(){

        }

        int func2(){

        }

    */

    // a função somente vai ser executada quando chamada! quando executada ela executa o seu código e volta para a função main e continua da linha onde ele foi chamada
    // as funções podem ser chamadas infinitas vezes

    // as variáveis só existem dentro da função que ela foi declarada

    int i = 5 ;

    // chamando as funções
    func1();
    func2();
    func3();

    printf("i na main %d\n\n", i);

    func4();


    return 0;
}


void func1() {
    puts("Olá mundo da função 1!\n");
}

void func2() {
    printf("print da função 2!\n\n");
}

void func3() {
    printf("pi é 3.14\n\n");
}

void func4() {
    int i = 10;
    printf("i na func4 %d\n\n", i);
}
