#include <stdio.h>

// Desafio de Xadrez - MateCheck
      // Nível Novato
    
int main() {
       //  Movimentação Torre 
       // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Direita\n");
    }

    //  Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    //  Movimentação Rainha
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
