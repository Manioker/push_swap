/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacca <avacca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:30:55 by andi              #+#    #+#             */
/*   Updated: 2024/02/08 14:40:04 by avacca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_stack_a(t_node_stack **a, char ***arguments, int argc)
{
	int	i;
	int	*numbers;
	int	j;

	j = 0;
	i = 0;
	while ((*arguments)[i] != NULL)
	{
		if (ft_atoi((*arguments)[i]) > INT_MAX
				|| ft_atoi((*arguments)[i]) < INT_MIN)
		{
			free_array(*arguments);
			write(1, "Error: incorrect input\n", 24);
			exit(1);
		}
		i++;
	}
	free_array(*arguments);
	return (1);
}
