#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    int tabuleiro[10][10];
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // 1. Inicializando o tabuleiro com 0:
    for (int i = 0; i < 10; i++) {  // Loop externo: Linhas (i de 0 a 9)

        // loop que percorre as COLUNAS
        for (int j = 0; j < 10; j++) {   // Loop interno: Colunas (j de 0 a 9)
            tabuleiro[i][j] = 0;         // Atribui 0 à célula
        }
    }

    // 2. Exibindo o cabeçalho das colunas:
    printf("  "); // Espaço inicial para alinhar
    for (int j = 0; j < 10; j++) {
        printf("%d ", j + 1);   //Imprimi o número da coluna (1 a 10)
    }
    printf("\n"); // Quebra de linha para começar a imprimir o tabuleiro
    
    //Definindo navio horinzotal (3 peças)
    int i_linhahoriz = 7;

    for (int j = 1; j < 4; j++) {
        tabuleiro[i_linhahoriz][j] = 3;
    }

    //Navio vertival (3 peças)
    int j_colunavert = 8;

    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][j_colunavert] = 3;
    }

    //Navio orizontal 1 (Esquerda)
    int i_oriz1 = 1;
    int j_oriz1 = 2;
    
    for (int k = 0; k < 3; k++) {
        tabuleiro[i_oriz1 + k][j_oriz1 + k] = 3;
    }

    //Navio orizontal 2 (Direita)
    int i_oriz2 = 1;
    int j_oriz2 = 7;

    for (int k = 0; k < 3; k++) {
        tabuleiro[i_oriz2 + k][j_oriz2 - k] = 3;
    }

    // 3. Exibindo as linhas:
    for (int i = 0; i < 10; i++) {    //Loop externo: Linhas
        printf("%c ", linha[i]);

        //Loop interno: Colunas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula
        }
        printf("\n");   //Pula uma linha após a impressão de todas as colunas
    }

    
   
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
