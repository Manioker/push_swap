/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:13 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:19 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rra_(t_list **stack_a)
{
	t_list	*beforelast;
	t_list	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		exit(1);
	last = ft_lstlast(*stack_a);
	beforelast = ft_lstbeforelast(*stack_a);
	last->next = *stack_a;
	*stack_a = last;
	beforelast->next = NULL;
}

void	rrb_(t_list **stack_b)
{
	t_list	*beforelast;
	t_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		exit(1);
	last = ft_lstlast(*stack_b);
	beforelast = ft_lstbeforelast(*stack_b);
	last->next = *stack_b;
	*stack_b = last;
	beforelast->next = NULL;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra_(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
