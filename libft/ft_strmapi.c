/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:50:16 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:00:59 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int index, char c)
// {
// 	if (index > 3)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			return (c - 32);
// 	}
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	while (s[i] != '\0')
		i++;
	result = malloc((i + 1) * (sizeof(char)));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("coucou caru", f));
// 	free (ft_strmapi("coucou caru", f));
// }