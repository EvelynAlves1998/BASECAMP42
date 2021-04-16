/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:26:31 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/16 20:01:21 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else if (index > 1)
	{
		a = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		return (a);
	}
	else
		return (-1);
}
