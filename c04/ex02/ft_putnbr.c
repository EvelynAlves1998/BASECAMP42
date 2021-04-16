/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:52:11 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/16 13:09:06 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	negative_max(int nb, int *p)
{
	if (nb < 0)
		ft_putchar(45);
	if (nb == -2147483648)
		ft_putchar('2');
	nb = (nb == -2147483648) ? -147483648 : nb;
	nb = (nb < 0) ? -nb : nb;
	*p = nb;
}

void	ft_putnbr(int nb)
{
	int check;
	int counter;
	int number[10];
	int *p;

	check = 1;
	counter = 10;
	p = &nb;
	negative_max(nb, p);
	while (--counter != -1)
	{
		while (check == 1)
		{
			if (counter != 9)
				number[counter] = (nb != 0) ? (nb % 10) + 48 : 0;
			else
				number[counter] = (nb != 0) ? (nb % 10) + 48 : (nb % 10) + 48;
			check = 0;
		}
		nb = nb / 10;
		check = 1;
	}
	while (++counter != 10)
		if (number[counter] != 0)
			ft_putchar(number[counter]);
}
