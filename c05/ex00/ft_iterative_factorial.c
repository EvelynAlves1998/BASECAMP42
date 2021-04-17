/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:57:53 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/16 19:48:49 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
