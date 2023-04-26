#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double gerarNumero() {
    return (double)rand() / (double)RAND_MAX;
}

int dentroDoIntervalo(double valor, double limiteInferior, double limiteSuperior) {
    return (valor > limiteInferior && valor <= limiteSuperior);
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
        vetorX[i] = gerarNumero() * N; 
        printf("%d ", vetorX[i]);
    }

    printf("\nVetor Y gerado:\n");
    for (int i = 0; i < tamanhoXY; i++) {
        double r = gerarNumero();
        if (dentroDoIntervalo(r, 0, 0.3)) {
            vetorY[i] = vetorX[i];
        } else if (dentroDoIntervalo(r, 0.3, 0.5)) {
            vetorY[i] = vetorX[i] - 1;
        } else if (dentroDoIntervalo(r, 0.5, 0.7)) {
            vetorY[i] = vetorX[i] + 1;
        } else if (dentroDoIntervalo(r, 0.8, 0.9)) {
            vetorY[i] = vetorX[i] - 2;
        } else if (dentroDoIntervalo(r, 0.9, 1.0)) {
            vetorY[i] = vetorX[i] + 2;
        }

        if (vetorY[i] < 0) {
            vetorY[i] = 0;
        } else if (vetorY[i] >= N) {
            vetorY[i] = N - 1;
        }

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

    printf("Matriz M gerada:\n");
    for (int i = 0; i < tamanhoXY; i++) {
       int x = vetorX[i];
      int y = vetorY[i];
      matrizM[x][y]++;
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
