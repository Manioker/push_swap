/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:02:04 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:08 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)str;
	i = 0;
	while (*ptr != '\0')
	{
		if (*ptr != (char)c)
			ptr++;
		else
		{
			i++;
			break ;
		}
	}
	if ((char)c == '\0')
		i++;
	if (i == 0)
		return (NULL);
	return (ptr);
}

// int	main(void)
// {
// 	printf("%s", strchr("tripouille", 'z'));
// }