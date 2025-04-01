/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:04 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/17 13:46:01 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ra_(t_list **stack_a)
{
	t_list	*last;
	t_list	*head;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		exit(1);
	head = *stack_a;
	*stack_a = (*stack_a)->next;
	last = ft_lstlast(head);
	last->next = head;
	head->next = NULL;
}

static void	rb_(t_list **stack_b)
{
	t_list	*last;
	t_list	*head;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		exit(1);
	head = *stack_b;
	*stack_b = (*stack_b)->next;
	last = ft_lstlast(head);
	last->next = head;
	head->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra_(stack_a);
	rb_(stack_b);
	write(1, "rr\n", 3);
}
