/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:21 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:11 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	sa_(t_list *stack_a)
{
	t_list	*current;
	int		temp;

	if (!stack_a || !stack_a->next)
		exit(1);
	current = stack_a->next;
	temp = stack_a->value;
	stack_a->value = current->value;
	current->value = temp;
}

static void	sb_(t_list *stack_b)
{
	t_list	*current;
	int		temp;

	if (!stack_b || !stack_b->next)
		exit(1);
	current = stack_b->next;
	temp = stack_b->value;
	stack_b->value = current->value;
	current->value = temp;
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa_(stack_a);
	sb_(stack_b);
	write(1, "ss\n", 3);
}
