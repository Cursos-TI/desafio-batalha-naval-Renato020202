#include <stdio.h>


int main() {
    printf(" Posicionamento dos Navios\n");
    // definindo o tabuleiro 10x10
    int tabuleiro[10][10];


     //iniciar o tabuleiro sendo 0 a agua
    for (int i = 0; i < 10; i++ )
    {
        for (int j = 0; j <10; j++)
        {
           tabuleiro[i][j] = 0;
        }
         
    }
    
// navio vertical
    for (int i = 0; i < 4; i++)
    {
        tabuleiro[i][2] = 3;
    }

    // navio horizontal
    for (int j  = 5; j < 8; j++)
    {
        tabuleiro[6][j]= 3;
    }

    //imprimindo o tabuleiro 
    printf("========= JOGO DE BATALHA NAVAL =============\n");
    printf("\n");
    

    for(int i= 0; i < 10;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d", tabuleiro[i][j]);
        }
        printf(" \n");
    }
    
    










































    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
