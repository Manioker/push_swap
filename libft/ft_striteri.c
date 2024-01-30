/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:15:43 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:01:59 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft(unsigned int index, char *new)
// {
// 	if ((index % 2) != 0)
// 		new[index] = 'e';
// 	else
// 		new[index] = 'h';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

// int main()
// {
// 	char s1[15] = "je suis drole";
// 	ft_striteri(s1, ft);
// 	printf("%s\n", s1);
// }