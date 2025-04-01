/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:10 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:22 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rrb(t_list **stack_b)
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
	write(1, "rrb\n", 4);
}
