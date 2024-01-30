/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:33:12 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:03:45 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)ptr;
	while (i < n)
		a[i++] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char str[11] = "hello there";
// 	printf("%s\n", str);
// 	bzero(str + 3, 2 * sizeof(int));
// 	printf("%s\n", str);
// }