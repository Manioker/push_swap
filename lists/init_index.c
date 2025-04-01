/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:49:49 by anvacca           #+#    #+#             */
/*   Updated: 2024/07/18 13:49:58 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_list	*min_value(t_list *stack_a)
{
	t_list	*min;

	min = NULL;
	while (stack_a)
	{
		if (stack_a->index == -1 && (!min || stack_a->value < min->value))
			min = stack_a;
		stack_a = stack_a->next;
	}
	return (min);
}

void	init_index(t_list *stack_a)
{
	int		index;
	t_list	*min_node;

	index = 1;
	min_node = min_value(stack_a);
	while (min_node)
	{
		min_node->index = index;
		index++;
		min_node = min_value(stack_a);
	}
}
