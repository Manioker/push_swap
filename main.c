/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:13:47 by anvacca           #+#    #+#             */
/*   Updated: 2024/07/18 14:22:11 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*proc_args(int count, char **values)
{
	parser(count, values);
	return (init_list_a(count, values));
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**split;

	stack_b = NULL;
	if (ac == 2)
	{
		split = ft_split(av[1], ' ');
		stack_a = proc_args(ft_count_words(av[1], ' '), split);
	}
	else
		stack_a = proc_args(ac - 1, av + 1);
	sorter(&stack_a, &stack_b);
	exit(0);
	return (0);
}

// void print_list(t_list *list)
// {
//     t_list *current = list;
//     while (current != NULL)
//     {
//         printf("Value: %d, Index: %d\n", current->number, current->index);
//         current = current->next;
//     }
// }
