/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:03:18 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/08 18:46:19 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	array[9];
	int		i;
	int		c;

	i = -1;
	while (++i < n)
		array[i] = '0' + i;
	c = n - 1;
	while (c >= 0)
	{
		if (c == n - 1 || array[c] == '9' - (n - 1) + c)
		{
			write(1, array, n);
			if (c != 0)
				write(1, ", ", 2);
		}
		if (array[c] == '9' - (n - 1) + c)
			--c;
		else if (c != n - 1)
		{
			++c;
			array[c] = array[c - 1] + 1;
		}
		array[c]++;
	}
}
