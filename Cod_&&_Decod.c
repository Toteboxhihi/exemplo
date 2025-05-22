#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char codificar(char string[], int k) {
    int i;
    char resultado[100];
    for (i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
        string[i] = string[i] + k;
    }
    strcpy(resultado, string);
    return resultado;
}

char decodificar(char codigo[], int k) {
    int i;
    for (i = 0; codigo[i] != '\0' && codigo[i] != '\n'; i++) {
        codigo[i] = codigo[i] - k;
    }
    return codigo;
}

int main() {

    setlocale(LC_ALL, "");

    int j, a, opcao = 1;
    char vetor[100];
    for (a = 0; opcao == 1 || opcao == 2; a++) {
        printf("\nO que deseja realizar?\n\nCodificação: Digite 1\nDecodificação: Digite 2\n\n");
        scanf("%d", &opcao);
        getchar();

    if (opcao == 1) {
        printf("Digite uma palavra: ");
        fgets(vetor, 100, stdin);
        printf("Digite um valor: ");
        scanf("%d", &j);
        getchar();
        if (j >= 1 && j <= 10) {
            codificar(vetor, j);
            printf("Palavra codificada: %s\n\n", vetor);
        }
    } else if (opcao == 2) {
         printf("Digite uma palavra codificada: ");
        fgets(vetor, 100, stdin);
        printf("Digite o valor utilizado para codificar: ");
        scanf("%d", &j);
        getchar();
        if (j >= 1 && j <= 10) {
            decodificar(vetor, j);
            printf("Palavra decodificada: %s\n\n", vetor);
        }
    }
    }
    return 0;
}
