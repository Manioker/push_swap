/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:26:39 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:01:42 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	if (size <= i)
		return (size + x);
	x = x + i;
	size = size - i - 1;
	while (*src != '\0' && size > 0)
	{
		dest[i] = *src;
		i++;
		src++;
		size--;
	}
	dest[i] = '\0';
	return (x);
}

// int	main(void)
// {
// 	char dest[11] = "hello";
// 	char *src = "hello";
// 	printf("%ld\n", ft_strlcat(dest, src, 1));
// 	printf("%s\n", dest);
// }