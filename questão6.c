#include <stdio.h>
#include <string.h>

void copiarString(char *destino, const char *origem) {

    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0';
}

int main() {
    char origem[100]; 
    char destino[100];

    printf("Digite uma string: ");
    fgets(origem, sizeof(origem), stdin); 


    origem[strcspn(origem, "\n")] = '\0';

    copiarString(destino, origem); 

    printf("A string copiada eh: %s\n", destino);

    return 0;
}
