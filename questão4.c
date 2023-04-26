#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
  
    int vetorInt[tamanho];
    float vetorFloat[tamanho];
    char vetorChar[tamanho];

    printf("Digite os valores do vetor de inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorInt[i]);
    }

    printf("Digite os valores do vetor de floats:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetorFloat[i]);
    }

    printf("Digite os valores do vetor de chars:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf(" %c", &vetorChar[i]); 
    }

   
    printf("\nValores e Enderecos dos vetores:\n");
    printf("Vetor de inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %d, Endereco: %p\n", vetorInt[i], &vetorInt[i]);
    }

    printf("Vetor de floats:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %.2f, Endereco: %p\n", vetorFloat[i], &vetorFloat[i]);
    }

    printf("Vetor de chars:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %c, Endereco: %p\n", vetorChar[i], &vetorChar[i]);
    }

    return 0;
}
