/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnumber.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:48:25 by anvacca           #+#    #+#             */
/*   Updated: 2024/07/18 14:20:55 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	isnumber(const char *str)
{
	unsigned int	i;

	i = 0;
	if (str[0] == '-' && str[1] != '\0')
		i++;
	if (str[0] == '-' && str[1] == '0')
		return (0);
	if (str[0] == '0' && ft_isdigit(str[1]))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
