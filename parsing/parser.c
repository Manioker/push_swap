/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:27:25 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/13 14:05:28 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	parser(int ac, char **av)
{
	unsigned int	i;

	i = 0;
	if (ac < 1)
		error_message(1);
	if (ac == 1)
		error_message(2);
	while (av[i])
	{
		if (!isnumber(av[i]))
			error_message(3);
		i++;
	}
	if (!isduplicate(av))
		error_message(4);
}

// int	main(int ac, char **av)
// {
// 	check_input_error(ac, av);
// }
