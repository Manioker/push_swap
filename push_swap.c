/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:01:16 by andi              #+#    #+#             */
/*   Updated: 2024/02/05 17:32:35 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// t_node_stack *a;
	// t_node_stack *b;
	char **arguments;
	// int j = 0;

	// a = NULL;
	// b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1]))
		return (1);
	else if (argc == 2)
	arguments = ft_split(argv[1], 32);
	else
        arguments = ft_grouparray(argv);
	// while (arguments[j])
	// {
	// 	printf("%s", arguments[j]);
	// 	j++;
	// }
	free_and_return(arguments, argc - 1);
	return (0);
	// if (!create_stack_a(&a, arguments))
	// 	return (free_and_return(arguments, argc - 1));
}


	// while (arguments[j])
	// 	{
	// 		printf("%s", arguments[j]);
	// 		j++;
	// 	}
	// return (0);