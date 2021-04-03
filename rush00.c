/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:17:18 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/03 14:34:10 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y)
{
            /*
            **                      REGRA: 
            **   Um "o" conta como 1 de altura e 1 de largura.
            **
            **                      LÓGICA:
            **
            **   1 - Só Mostrar qualquer coisa na tela quando o valor da Largura (x),
            **       for MAIOR que 0 (lagura > 0), caso contratio não mostrar nada na tela
            **   
            **   2 - Quando a altura (y) for MENOR ou IGUAL que 0 (altura <= 0)
            **   não mostra o "|", pois a "o" já conta como 1 de altura
            **                  
            
            */
        
            int largura = x;
            int altura = y;
            int altura_praticada = altura - 2;

             int i;
                
            i = 0;
            
            while (i < largura)
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


            if((altura_praticada >= 0))
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
}