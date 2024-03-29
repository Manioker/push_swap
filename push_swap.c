/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacca <avacca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:01:16 by andi              #+#    #+#             */
/*   Updated: 2024/02/08 13:38:12 by avacca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node_stack	*a;
	t_node_stack	*b;
	char			**arguments;

	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
	arguments = ft_join_and_split(argv);
	if (!arguments)
		return (-1);
	create_stack_a(&a, &arguments, argc);
	return (0);
}

// while (arguments[j])
// 	{
// 		printf("%s", arguments[j]);
// 		j++;
// 	}
// return (0);