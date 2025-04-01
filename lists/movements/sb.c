/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:18 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:14 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sb(t_list *stack_b)
{
	t_list	*current;
	int		temp;

	if (!stack_b || !stack_b->next)
		exit(1);
	current = stack_b->next;
	temp = stack_b->value;
	stack_b->value = current->value;
	current->value = temp;
	write(1, "sb\n", 3);
}
