/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:57:11 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:49 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		{
			i++;
			n--;
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "hello";
// 	printf("%d\n", ft_memcmp(s1, s2, 22));
// }