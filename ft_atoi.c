/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacca <avacca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:36:59 by avacca            #+#    #+#             */
/*   Updated: 2024/02/08 13:57:11 by avacca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int			i;
	long long	a;
	long		b;

	i = 0;
	a = 0;
	b = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			b = -b;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		a = (a * 10) + (str[i++] - '0');
	}
	if (str[i] != '\0')
		return (9999999999);
	return (a * b);
}

// int main()
// {
// 	printf("%d\n", ft_atoi("    -2147483648 "));
// }