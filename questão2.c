#include <stdio.h>

void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");scanf("%d", &num1);

    printf("Digite o segundo numero: ");scanf("%d", &num2);

    printf("Valores originais: num1 = %d, num2 = %d\n", num1, num2);

    trocar(&num1, &num2);

    printf("Valores trocados: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
