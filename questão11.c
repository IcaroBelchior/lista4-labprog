#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumero(int N) {
    return rand() % N;
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    srand(time(0));

    int tamanhoXY;
    printf("Digite o tamanho dos vetores X e Y: ");
    scanf("%d", &tamanhoXY);

    int* vetorX = (int*) malloc(tamanhoXY * sizeof(int));
    int* vetorY = (int*) malloc(tamanhoXY * sizeof(int));

    printf("Vetor X gerado:\n");
    for (int i = 0; i < tamanhoXY; i++) {
        vetorX[i] = gerarNumero(N);
        printf("%d ", vetorX[i]);
    }

    printf("\nVetor Y gerado:\n");
    for (int i = 0; i < tamanhoXY; i++) {
        vetorY[i] = gerarNumero(N);
        printf("%d ", vetorY[i]);
    }

    int** matrizM = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        matrizM[i] = (int*) malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizM[i][j] = 0;
        }
    }

    printf("\nMatriz M (coocorrências dos elementos de X e Y):\n");
    for (int i = 0; i < tamanhoXY; i++) {
        matrizM[vetorX[i]][vetorY[i]]++; 
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrizM[i][j]);
        }
        printf("\n");
    }

    free(vetorX);
    free(vetorY);
    for (int i = 0; i < N; i++) {
        free(matrizM[i]);
    }
    free(matrizM);

    return 0;
}
