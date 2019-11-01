#include <stdio.h>

int f1();
int f2(int n);

int main() {

    // Quando uma função é chamada a função atual será pausada e executada a função chamada, e assim por dinate, isso gera um efeito cascata caso funções sejam chamadas dentro de funções

    // Função chamando ela mesma, executaria uma nova instância da função, geraria um loop infinito (mas acabaraia por conta de memória disponível pro programa) EX:

    //f1();

    int x=10;

    f2(x);

    return 0;
}

int f1() {
    printf("Loop infinito!");
    f1();
    printf("Terminou!"); // este nunca será executado
}

// A primeira a iniciar será a ultima a terminar neste caso, é como se desse um zoom e voltasse
int f2(int n) {
    if (n > 0) {
        printf("%d iniciando\n", n);
        f2(n - 1); // Chamada recursiva
        printf("%d terminando\n", n);
    } else {
        printf("Fim\n");
    }
}
