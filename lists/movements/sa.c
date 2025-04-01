/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:15 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 15:58:16 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_list *stack_a)
{
	t_list	*current;
	int		temp;

	if (!stack_a || !stack_a->next)
		exit(1);
	current = stack_a->next;
	temp = stack_a->value;
	stack_a->value = current->value;
	current->value = temp;
	write(1, "sa\n", 3);
}
