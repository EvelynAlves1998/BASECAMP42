#include <stdio.h>

void rush(int x, int y){
    // printf("o---o\n");
    // printf("|   |\n");
    // printf("o---o\n");

    int altura = x;
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

// x == largura    (o, -)
// y == altura     (|)