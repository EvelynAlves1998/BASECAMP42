/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:40:12 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/14 22:29:16 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*p;
	int				j;

	i = 0;
	j = 0;
	p = src;
	while (dest[j] != '\0')
		j++;
	while (p[i] != '\0' && i < nb)
	{
		dest[j] = p[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
