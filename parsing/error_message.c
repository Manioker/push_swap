/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:26:51 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/06 13:37:00 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_message(int error)
{
	if (error == 1)
		write(1, "\e[1;12mError:\e[1;0m No Input\n", 30);
	if (error == 2)
		write(1, "\e[1;12mError:\e[1;0m Not Enough Arguments\n", 42);
	if (error == 3)
		write(1, "\e[1;12mError:\e[1;0m Invalid Input\n", 35);
	if (error == 4)
		write(1, "\e[1;12mError:\e[1;0m Duplicates Found\n", 38);
	if (error == 5)
		write(1, "\e[1;12mError:\e[1;0m Int Overflow\n", 34);
	exit(1);
}
