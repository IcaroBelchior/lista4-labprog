#include <stdio.h>
#include <string.h>

void concatenarStrings(char *destino, const char *origem) {
    while (*destino != '\0') {
        destino++;
    }

    
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0'; 
}

int main() {
    char string1[100]; 
    char string2[100]; 

    printf("Digite a primeira string: ");
    gets(string1); 

    printf("Digite a segunda string: ");
    gets(string2); 

    concatenarStrings(string1, string2);

    printf("A string concatenada eh: %s\n", string1); 

    return 0;
}
