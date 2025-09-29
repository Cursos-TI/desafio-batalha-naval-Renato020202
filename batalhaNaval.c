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
// os navios sendo representado = 3 
// navio vertical
    for (int i = 5; i < 8; i++)
    {
        tabuleiro[i][5] = 3;
    }


    // navio horizontal
    for (int j  = 6; j < 9; j++)
    {
        tabuleiro[4][j]= 3;
    }


    // navio diagonal direita
    for (int i  = 0; i < 3; i++)
    {
        tabuleiro[1 + i][1 + i]= 3;
    }


// navio diagonal esquerda
for (int i  = 0; i < 3; i++)
    {
        tabuleiro[1 + i][8 - i]= 3;
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
