/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:49:07 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/07 00:13:17 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char array[3];

	array[0] = '0';
	array[1] = '1';
	array[2] = '2';
	write(1, &array, 3);
	array[2]++;
	while (array[0] <= '7')
	{
		while (array[1] <= '8')
		{
			while (array[2] <= '9')
			{
				write(1, ", ", 2);
				write(1, array, 3);
				array[2]++;
			}
			array[1]++;
			array[2] = 1 + array[1];
		}
		array[0]++;
		array[1] = 1 + array[0];
		array[2] = 1 + array[1];
	}
}
