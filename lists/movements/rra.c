/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:08 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:25 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_list **stack_a)
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
	write(1, "rra\n", 4);
}
