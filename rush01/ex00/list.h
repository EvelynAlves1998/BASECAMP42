/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d <ealves-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:36:49 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/11 01:50:39 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIST_H
# define LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct	s_list
{
	int value;
	int *values;
}s_list;

int				*ft_create_values(void);
s_list			*ft_create_list(int value);

#endif
