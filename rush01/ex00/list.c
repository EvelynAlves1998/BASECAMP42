/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:35:25 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/11 01:55:24 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		*ft_create_values(void)
{
	int	*new_values;
	int	count;

	new_values = (int *)malloc(4 * sizeof(int));
	count = 0;
	while (count < 4)
	{
		new_values[count] = 0;
		count++;
	}	
	return (new_values);
}

s_list	*ft_create_list(int value)
{
	s_list *new_list;

	new_list = (s_list *)malloc(sizeof(s_list));
	new_list->value = value;
	//new_list->values = values;
	return (new_list);
}
