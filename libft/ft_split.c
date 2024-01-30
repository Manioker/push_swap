/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:03:41 by andi              #+#    #+#             */
/*   Updated: 2023/10/30 22:13:12 by andi             ###   ########.fr       */
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

static int	count_words(const char *str, char c)
{
	int	i;
	int	pin;

	i = 0;
	pin = 0;
	while (*str)
	{
		if (*str != c && pin == 0)
		{
			pin = 1;
			i++;
		}
		else if (*str == c)
			pin = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, size_t index, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((len - index + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (index < len)
		word[i++] = str[index++];
	word[i] = '\0';
	return (word);
}

static char	**free_and_return(char **str, size_t j)
{
	while (j > 0)
		free(str[--j]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		indexx;
	char	**str;

	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (NULL);
	i = 0;
	j = 0;
	indexx = -1;
	while (i++ <= f_strlen(s))
	{
		if (s[i - 1] != c && indexx == -1)
			indexx = i - 1;
		else if ((s[i - 1] == c || i - 1 == f_strlen(s)) && indexx != -1)
		{
			str[j++] = word_dup(s, indexx, i - 1);
			if (str[j - 1] == NULL)
				return (free_and_return(str, j));
			indexx = -1;
		}
	}
	str[j] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char **result = ft_split("pdesole", 'p');

// 	if (result != NULL)
// 	{
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]); // Free each string
// 		}
// 		free(result); // Free the array of strings
// 	}

// 	return (0);
// }