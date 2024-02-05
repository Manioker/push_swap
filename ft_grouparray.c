/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grouparray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:27:57 by andi              #+#    #+#             */
/*   Updated: 2024/02/05 17:28:02 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**free_and_return(char **str, size_t j)
{
	while (j > 0)
		free(str[--j]);
	free(str);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_numbers(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
		i++;
	return (i);
}

void	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] && i < size)
		dest[j++] = src[i++];
	dest[j] = '\0';
}

char	**ft_grouparray(char **argv)
{
	char **arguments;
	int i;
	int j;

	i = 1;
	j = 0;
	arguments = malloc((count_numbers(argv)) * sizeof(char *));
	if (arguments == NULL)
		return (NULL);
	while (argv[i])
	{
		arguments[j] = malloc(ft_strlen(argv[i]) * sizeof(char));
		if (!arguments[j])
			return (free_and_return(arguments, j));
		ft_strlcpy(arguments[j], argv[i], ft_strlen(argv[i]) + 1);
		j++;
		i++;
	}
	arguments[j] = NULL;
	return (arguments);
}