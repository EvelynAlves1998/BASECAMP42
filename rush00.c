#include <stdio.h>

void rush(int x, int y){
    // printf("o---o\n");
    // printf("|   |\n");
    // printf("o---o\n");

    // x == largura    (o, -)
    // y == altura     (|)

    int altura = x;
    for(int i = 0; i < altura; i++){
        if(i == 0 || i == (altura -1)){
            printf("o");
        }
        else {
            printf("-");
        }
    }

    int qtd_de_espacos_entre = altura - 2;

    printf("\n"); 

    int largura = y;
    for(int i = 0; i < largura; i++)
    {
        
        printf("|");

        for(int j = 0; j < qtd_de_espacos_entre; j++)
        {
            printf(" ");
        }
        printf("|");
    
        printf("\n");
    }

    for(int i = 0; i < altura; i++){
        if(i == 0 || i == (altura -1)){
            printf("o");
        }
        else {
            printf("-");
        }
    }
    printf("\n");
}