/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:02 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:30 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rb(t_list **stack_b)
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
	write(1, "rb\n", 3);
}
