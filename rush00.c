#include <stdio.h>

void rush(int x, int y){
    // printf("o----o\n");
    // printf("|    |\n");
    // printf("o----o\n");

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

    printf("\n");


    int altura = y;
    int altura_praticada = altura - 2;

    if(altura_praticada >= 0)
    {
        int qtd_espacos_em_branco = largura - 2;
        i = 0;
        while(i <= altura_praticada)
        {
            printf("|");

            if(qtd_espacos_em_branco >=0){
                int j;
                j = 0;
                while(j < qtd_espacos_em_branco)
                {
                    printf(" ");
                    j++;
                }

            }
            else{
                printf("\n");
            }
            printf("|");

            i++;
        }

        printf("\n");

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

    // while(i < 10)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }



    // x == largura    (o, -)
    // y == altura     (|)

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", i);
    // }

    // int altura = x;
    // for(int i = 0; i < altura; i++){
    //     if(i == 0 || i == (altura -1)){
    //         printf("o");
    //     }
    //     else {
    //         printf("-");
    //     }
    // }

    // int qtd_de_espacos_entre = altura - 2;

    // printf("\n"); 

    // int largura = y;
    // for(int i = 0; i < largura; i++)
    // {
        
    //     printf("|");

    //     for(int j = 0; j < qtd_de_espacos_entre; j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("|");
    
    //     printf("\n");
    // }

    // for(int i = 0; i < altura; i++){
    //     if(i == 0 || i == (altura -1)){
    //         printf("o");
    //     }
    //     else {
    //         printf("-");
    //     }
    // }
    // printf("\n");
}