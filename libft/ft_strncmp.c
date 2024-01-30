/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:51:14 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:00:52 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && n > 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		n--;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("1234", "1235", 4));
// }
