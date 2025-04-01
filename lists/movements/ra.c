/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:08:59 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:33 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra(t_list **stack_a)
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
	write(1, "ra\n", 3);
}
