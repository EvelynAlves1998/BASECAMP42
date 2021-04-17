/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:58:57 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/16 17:56:22 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- != 0)
		p *= nb;
	return (p);
}
