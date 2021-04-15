/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:36:12 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/07 23:09:46 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			number;
	int				div;
	int				start;
	unsigned int	num;

	if (nb < 0)
		write(1, "-", 1);
	num = nb < 0 ? -nb : nb;
	start = 0;
	div = 1000000000;
	while (div > 0)
	{
		number = num / div + '0';
		if (number != '0' || start)
		{
			start = 1;
			write(1, &number, 1);
		}
		num = num % div;
		div = div / 10;
	}
}
