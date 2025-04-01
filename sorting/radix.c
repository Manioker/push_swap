/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:31:17 by anvacca           #+#    #+#             */
/*   Updated: 2024/07/18 14:13:27 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_max_value(t_list *stack_a)
{
	int	max;

	max = stack_a->value;
	while (stack_a)
	{
		if (stack_a->value > max)
			max = stack_a->value;
		stack_a = stack_a->next;
	}
	return (max);
}

static int	get_max_bits(t_list *stack_a)
{
	int	max;
	int	bits;

	max = get_max_value(stack_a);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int size)
{
	int	max_bits;
	int	i;
	int	j;

	max_bits = get_max_bits(*stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
		if (issorted(*stack_a) && !*stack_b)
			return ;
	}
}
