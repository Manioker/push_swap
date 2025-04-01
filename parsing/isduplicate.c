/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isduplicate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:50:44 by anvacca           #+#    #+#             */
/*   Updated: 2024/06/14 16:33:28 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	isduplicate(char **arr)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (!ft_strcmp(arr[i], arr[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
