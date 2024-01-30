/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:14:39 by andi              #+#    #+#             */
/*   Updated: 2023/10/30 22:33:54 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (f_strlen(s) < start)
		start = f_strlen(s);
	if (f_strlen((char *)s + start) < len)
		len = f_strlen((char *)s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char s[6] = "hello";
// 	printf("%s\n", ft_substr(s, 1, 1));
// }