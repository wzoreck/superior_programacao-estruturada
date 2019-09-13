// Enquanto o valor informado for menor que 0, perguntar novamente até que seja maior ou igual a 0
#include <stdio.h>
int main(){
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);

    while( x < 0){
        printf("Valor menor que 0! digite novamente: ");
        scanf("%d", &x);
    } // neste while por ter somente 1 comando não é obrigado a usar chaves!
    printf("%d", x);
    /* Estrutura de repetição while
    Executa a repetição de um bloco de instruções enquanto uma condição é verdadeira (utilizamos quando não sabemos quentas vezes será necessário repetir o loop para que a condição se torne falsa).
    Chamamos de variável de controle a variável testada na condição.
    Para que seja possível fazer o teste, a variável de controle deve ter sido inicializada previamente.
    Enquanto a condição permanecer verdadeira, são executadas as instruções.
    Quando a condição se tornar falsa, o processamento será desviado para fora do laço.
    */

    return 0;
}
