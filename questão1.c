#include <stdio.h>

void somar(int* a, int* b, int* resultado, int* endereco) {
    *resultado = *a + *b;
    *endereco = (int)resultado;
}

int main() {
    int num1, num2, soma, endereco;

    printf("Digite o primeiro numero: ");scanf("%d", &num1);

    printf("Digite o segundo numero: ");scanf("%d", &num2);

    somar(&num1, &num2, &soma, &endereco);

    printf("Resultado da soma: %d\n", soma);
    printf("Endereco de memoria do resultado: %x\n", endereco);

    return 0;
}
