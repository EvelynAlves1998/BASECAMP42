/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:49:07 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/07 20:32:31 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	a[2];

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			a[0] = num1 / 10 + '0';
			a[1] = num1 % 10 + '0';
			write(1, a, 2);
			write(1, " ", 1);
			a[0] = num2 / 10 + '0';
			a[1] = num2 % 10 + '0';
			write(1, a, 2);
			if (num1 != 98 || num2 != 99)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
