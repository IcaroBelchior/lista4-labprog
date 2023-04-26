#include <stdio.h>

void atualizarMenor(int* menor, int novoValor) {
    if (novoValor < *menor) {
        *menor = novoValor;
    }
}

int main() {
    int numero, menor;

    
    printf("Digite um numero (ou digite um valor negativo para sair): "); scanf("%d", &numero);

    menor = numero;

   
    while (numero >= 0) {
        printf("Digite um numero (ou digite um valor negativo para sair): ");
        scanf("%d", &numero);
        if (numero >= 0) {
            atualizarMenor(&menor, numero);
        }
    }

   
    printf("O menor valor fornecido foi: %d\n", menor);

    return 0;
}
