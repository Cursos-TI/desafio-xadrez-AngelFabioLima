#include <stdio.h>

int main() {
    printf("Movimento do Cavalo:\n");

    // Movimentos do cavalo
    for (int i = 0; i < 3; i++) {
        // Loop aninhado: duas casas para baixo
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        // Depois, uma casa para a esquerda
        printf("Esquerda\n");

        printf("---\n"); // cada movimento do cavalo
    }

    return 0;
}
