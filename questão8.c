#include <stdio.h>

int buscarCaractere(const char *string, char caractere) {
    while (*string != '\0') {
        if (*string == caractere) {
            return 1;
        }
        string++;
    }

    return 0;
}

int main() {
    char minhaString[100];
    char caractere;

    printf("Digite uma string: ");
    gets(minhaString); 

    printf("Digite o caractere a ser buscado: ");
    scanf("%c", &caractere); 

    if (buscarCaractere(minhaString, caractere)) {
        printf("O caractere '%c' foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", caractere);
    }

    return 0;
}
