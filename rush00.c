/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:17:18 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/03 16:22:57 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_putchar(char a);

void	rush(int x, int y)
{
        int largura;
        largura = x;
        int i;
        i = 0;
        while (i < largura)
        {
            if(i == 0 || i == (largura - 1))
            {
                ft_putchar('o');
            }
            else 
            {
                ft_putchar('-');
            }

            i++;
        }

        /*
        **  Lógica Altura        
        */
        int altura = y;
        int altura_praticada = altura - 2;
        if((altura_praticada >= 0) && (largura > 0))
        {
            ft_putchar('\n');
            
            int qtd_espacos_em_branco = largura - 2;
            i = 0;
            while(i < altura_praticada || i == 0)
            {
                ft_putchar('|');

                if(qtd_espacos_em_branco >= 0){
                    int j;
                    j = 0;
                    while(j < qtd_espacos_em_branco)
                    {
                        ft_putchar(' ');
                        j++;
                    }
                    ft_putchar('|');
                }

                ft_putchar('\n');

                i++;
            }

            /*
            **  Lógica Largura, novamente        
            */
            i = 0;
            while(i < largura)
            {
                if(i == 0 || i == (largura - 1))
                {
                    ft_putchar('o');
                }
                else 
                {
                    ft_putchar('-');
                }

                i++;
            }
            
        }
        
        ft_putchar('\n');
}



        /*
        **                          REGRA: 
        **   1 - Um "o" conta como 1 de altura e 1 de largura.
        **
        **                          LÓGICA:
        **
        **   1 - Só mostrar qualquer coisa na tela quando o valor da largura (x),
        **       for MAIOR que 0 (lagura > 0), caso contratio não mostrar nada na tela.
        **   
        **   2 - Quando a altura (y) for MENOR ou IGUAL que 0 (altura <= 0)
        **       não mostra o "|", pois a "o" já conta como 1 de altura.
        **
        **   3 - Existe uma diferença entre a altura total e a quantidade de "|" que 
        **       que devem ser mostrados na tela, uma vez que o carectere "o" também
        **       conta como um caractere de altura, portando a quantidade de caracteres
        **       "|" que devem ser mostrados na tela é igual a (altura - 2).
        **
        **    4 - Apáos mostrar a altura, devemos repetir o processo para mostrar para 
        **        mostrar a base do sólido.
        **         
        **
        **
        */
        /*
        **  Lógica Largura 
        */