/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:51:50 by andi              #+#    #+#             */
/*   Updated: 2023/10/30 17:03:36 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	str_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str_len(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && i <= n)
	{
		while (s1[i] == s2[j] && s2[j] != '\0' && i < n)
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((((char *)s1) + (i - j)));
		if (j == 0)
			i++;
		if (j > 1)
			i = i - (j - 1);
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strnstr("aaabcabcd", "cd", 9));
// }