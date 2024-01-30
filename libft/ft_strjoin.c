/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:40:15 by andi              #+#    #+#             */
/*   Updated: 2023/10/28 22:09:39 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*f_strcat(char *new, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*new;

	size1 = f_strlen((char *)s1);
	size2 = f_strlen((char *)s2);
	new = (char *)malloc(size1 + size2 + 1);
	if (new == NULL)
		return (NULL);
	else
		return (f_strcat(new, s1, s2));
}

// int	main(void)
// {
// 	char s1[] = "hello";
// 	char s2[] = " ";
// 	char s3[] = "world";
// 	printf("%s\n", ft_strjoin(ft_strjoin(s1, s2), s3));
// }