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

    int tamanhoX;
    printf("Digite o tamanho do vetor X: ");
    scanf("%d", &tamanhoX);

    int vetorX[tamanhoX];
    int vetorF[N]; 

    printf("Vetor X gerado:\n");
    for (int i = 0; i < tamanhoX; i++) {
        vetorX[i] = gerarNumero(N);
        printf("%d ", vetorX[i]);
    }

    for (int i = 0; i < N; i++) {
        vetorF[i] = 0;
    }

    printf("\nVetor F (quantidade de ocorrências dos elementos de X):\n");
    for (int i = 0; i < tamanhoX; i++) {
        vetorF[vetorX[i]]++; 
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", vetorF[i]);
    }

    return 0;
}
