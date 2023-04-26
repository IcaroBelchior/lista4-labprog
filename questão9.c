#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor antes da ordenacao:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    bubbleSort(vetor, n);

    printf("\nVetor depois da ordenacao:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
