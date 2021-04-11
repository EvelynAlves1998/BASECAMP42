/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:34:28 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/11 01:56:46 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define TRUE 1
#define FALSE 0

int	ft_is_valid(int a, int b)
{
	int is_valid;

	is_valid = FALSE;
	if (a > 0 && a < 5)
		if (b > 0 && b < 5)
			if (a + b <= 5)
				is_valid = TRUE;
	return (is_valid);
}

int ft_check_list(s_list **list1, s_list **list2)
{
	int count = 0;
	int is_valid = FALSE;
	while (count < 4)
	{
		printf("%d - %d\n", count, list1[count]->value);
		printf("%d - %d\n", count, list2[count]->value);
		is_valid = ft_is_valid(list1[count]->value, list2[count]->value);
		if (is_valid == FALSE)
			break;
		else
		{
			int *values = ft_create_values();
			list1[count] -> values = &values[0];
			list2[count] -> values = &values[3];
		}
		count++;
	}
	return (is_valid);
}

int	main(int argc, char **argv)
{
	char *commands = argv[1];
	s_list **lists = (s_list **)malloc(16 * sizeof(s_list *));
	int count = 0;
	int index = 0;
	while (commands[count] != '\0')
	{
		if (commands[count] >= '0' && commands[count] <= '9')
		{
			if(count % 2 == 0)
			{
				lists[index] = ft_create_list(commands[count] - '0');
				index++;
			}
		}
		count++;
	}
	if(index == 16)
	{
		if(ft_check_list(&lists[0],&lists[4]) && ft_check_list(&lists[8],&lists[12]))
		{
			write(1,"passou\n",7);
			return (0);
		}
	}
	write(1,"error\n",6);
	return (0);
}
