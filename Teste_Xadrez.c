#include <stdio.h>

// Funções de movimento

// ---- NÍVEL NOVATO ----
// A Torre anda em linha reta.
void moverTorreNovato() {
    printf("\nMovimento da Torre (5 casas para a Direita):\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");  // Anda uma casa para a direita
    }
}

// O Bispo anda na diagonal (ex: cima + direita).
void moverBispoNovato() {
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");

    int i = 0;
    while (i < 5) {
        printf("Cima Direita\n");  // Anda uma casa na diagonal
        i++;
    }
}

// A Rainha anda em todas as direções.
void moverRainhaNovato() {
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");

    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
}

// NÍVEL AVENTUREIRO 
// O Cavalo anda em L.
void moverCavaloAventureiro() {
    printf("\nMovimento do Cavalo (3 vezes em L - Baixo, Baixo, Esquerda):\n");

    for (int i = 0; i < 3; i++) {  // Três em L
        int j = 0;
        while (j < 2) {  // Anda 2 vezes para baixo
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");  // Depois 1 vez para esquerda
        printf("---\n");  // Separador entre  movimentos
    }
}

// ---- NÍVEL MESTRE ----

// Torre (5 casas para a direita usando recursão)
void moverTorreMestre(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Direita\n");
    moverTorreMestre(casas - 1);
}

// Bispo (5 casas na diagonal superior direita)
void moverBispoMestre(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoMestre(casas - 1);
}

// Rainha (8 casas para a esquerda)
void moverRainhaMestre(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaMestre(casas - 1);
}

// Cavalo com break 
void moverCavaloMestre() {
    printf("\nMovimento do Cavalo (1 vez em L - Cima, Cima, Direita):\n");

    for (int i = 0, j = 0; i < 3; i++, j++) {
        if (i == 1) continue;  // Pula o segundo passo
        printf("Cima\n");
        if (j == 2) break;     
        }
    printf("Direita\n");  // Finaliza o L com um passo para a direita
}


// Função Menu
int main() {
    int escolha;

    do {
        // Opções de Menu 
        printf("\n=============\n");
        printf("Desafio de Xadrez \n");
        printf("============\n");
        printf("1 - Nível Novato (Torre, Bispo, Rainha)\n");
        printf("2 - Nível Aventureiro (Cavalo em L)\n");
        printf("3 - Nível Mestre (Funções recursivas + Cavalo avançado)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        // Verifica a opção escolhida
        switch (escolha) {
            case 1:
                moverTorreNovato();
                moverBispoNovato();
                moverRainhaNovato();
                break;
            case 2:
                moverCavaloAventureiro();
                break;
            case 3:
                printf("\nMovimento da Torre (Recursiva):\n");
                moverTorreMestre(5);
                printf("\nMovimento do Bispo (Recursiva):\n");
                moverBispoMestre(5);
                printf("\nMovimento da Rainha (Recursiva):\n");
                moverRainhaMestre(8);
                moverCavaloMestre();
                break;
            case 0:
                printf("Encerrando o programa. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (escolha != 0);  // O programa continua até o usuário digitar 0

    return 0;
}
