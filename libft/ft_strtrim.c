/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:11:31 by andi              #+#    #+#             */
/*   Updated: 2023/10/30 17:03:47 by andi             ###   ########.fr       */
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

static int	find_char(char c, char const *set)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (a = 1);
		i++;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] != '\0' && find_char(s1[start], set) == 1)
		start++;
	end = str_len(s1);
	while (end > start && find_char(s1[end - 1], set) == 1)
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char s1[7] = "  n hello";
// 	char s2[7] = " ";
// 	printf("%s\n", ft_strtrim(s1, s2));
// }