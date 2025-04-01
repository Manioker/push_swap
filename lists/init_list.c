/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:05:27 by anvacca           #+#    #+#             */
/*   Updated: 2024/07/18 13:51:20 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*init_list_a(int ac, char **av)
{
	t_list	*head;
	t_list	*current;
	int		count;
	int		index;

	index = -1;
	count = 0;
	head = ft_lstnew(ft_atoi(av[count++]), index);
	if (!head)
		exit(1);
	current = head;
	while (count < ac)
	{
		current->next = ft_lstnew(ft_atoi(av[count++]), index);
		if (!current)
			exit(1);
		current = current->next;
	}
	return (head);
}
