#include <stdio.h>

int main() {
    char string[100]; 
    char *ptr; 

    printf("Digite uma string: ");
    gets(string); 

    ptr = string; 

    int tamanho = 0; 

    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }

    printf("O tamanho da string '%s' eh: %d\n", string, tamanho);

    return 0;
}
