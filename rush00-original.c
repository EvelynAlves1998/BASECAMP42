/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:22:17 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/04 14:08:58 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int height;
	int width;

	height = 0;
	while ((height < y) && (x > 0))
	{
		width = 0;
		while (width < x)
		{
			if ((height == 0) || (height == (y - 1)))
			{
				if ((width == 0) || (width == (x - 1)))
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if ((width == 0) || width == (x - 1))
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
