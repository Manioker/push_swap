/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:17:12 by andi              #+#    #+#             */
/*   Updated: 2023/10/29 20:49:41 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ptr1;
	int		i;

	ptr = (char *)s;
	i = 0;
	while (*ptr != '\0')
	{
		if (*ptr != (char)c)
			ptr++;
		else
		{
			ptr1 = ptr;
			ptr++;
			i++;
		}
	}
	if ((char)c == '\0')
	{
		ptr1 = ptr;
		i++;
	}
	if (i == 0)
		return (NULL);
	return (ptr1);
}

// int main()
// {
// 	printf("%s", strrchr("coucou ma caru manu ;)\n", '\0'));
// }