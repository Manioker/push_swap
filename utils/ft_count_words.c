/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:53:53 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/06 13:32:22 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_count_words(char *str, char c)
{
	int	i;
	int	pin;

	i = 0;
	pin = 0;
	while (*str)
	{
		if (*str != c && pin == 0)
		{
			pin = 1;
			i++;
		}
		else if (*str == c)
			pin = 0;
		str++;
	}
	return (i);
}
