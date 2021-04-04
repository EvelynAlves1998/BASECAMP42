/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:22:17 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/04 14:44:37 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int a;
	int l;

	a = 0;
	while ((a < y) && (x > 0))
	{
		l = 0;
		while (l < x)
		{
			if ((a == 0 || a == (y - 1)) && (l == 0 || l == (x - 1)))
				ft_putchar('o');
			else if ((a == 0 || a == (y - 1)) && (l != 0 || l != (x - 1)))
				ft_putchar('-');
			else if ((a != 0 && a != (y - 1)) && (l == 0 || l == (x - 1)))
				ft_putchar('|');
			else 
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		a++;
	}
}
