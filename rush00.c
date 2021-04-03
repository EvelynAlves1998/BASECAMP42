/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:22:17 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/03 22:29:44 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while ((i < y) && (x > 0))
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0) || (i == (y - 1)))
			{
				if ((j == 0) || (j == (x - 1)))
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if ((j == 0) || j == (x - 1))
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
