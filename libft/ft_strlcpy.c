/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:36:42 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:01:36 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && n > i + 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (n != 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char src[] = "hello";
// 	char dest[5] = "";
// 	printf("%ld\n", ft_strlcpy(dest, src, 0));
// 	printf("%s\n", dest);
// }