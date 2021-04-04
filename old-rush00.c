#include <stdio.h>

void 	rush(int x, int y){
    // printf("o----o\n");
    // printf("|    |\n");
    // printf("o----o\n");

   // Lógica da base

int largura = x;
int i = 0;

while(i < largura)
{
    if(i == 0 || i == (largura - 1))
    {
        printf("o");
    }
    else 
    {
        printf("-");
    }

    i++;
}

int altura = y;
int altura_praticada = altura - 2;

if(altura_praticada >= 0 && largura > 0)
{
    printf("\n");
    int qtd_espacos_em_branco = largura - 2;
    i = 0;
    while(i < altura_praticada || i == 0)
    {
        printf("|");

        if(qtd_espacos_em_branco >= 0){
            int j;
            j = 0;
            while(j < qtd_espacos_em_branco)
            {
                printf(" ");
                j++;
            }
            printf("|");
        }

        printf("\n");

        i++;
    }

    i = 0;
    while(i < largura)
    {
        if(i == 0 || i == (largura - 1))
        {
            printf("o");
        }
        else 
        {
            printf("-");
        }

        i++;
    }
    
}

printf("\n");