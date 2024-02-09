/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_and_split.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacca <avacca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:53:52 by avacca            #+#    #+#             */
/*   Updated: 2024/02/08 13:36:45 by avacca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <string.h>

char *list(char **argv, char *str, int j)
{
	int		i;
	int		k;

	i = 1;
	k = 0;
	str = (char *)malloc(j + 1);
	if (str == NULL)
		return (NULL);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j++];
		}
		str[k++] = ' ';
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
	
char	**ft_join_and_split(char **argv)
{
	char	**arguments;
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		j += strlen(argv[i]) + 1;
		i++;
	}
	str = list(argv, str, j);
	if (!str)
		return (NULL);
	i = 1;
	j = 0;
	arguments = ft_split(str, ' ');
	free(str);
	if (arguments == NULL)
		return (NULL);
	return (arguments);
}
