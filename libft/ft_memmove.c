/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:10:22 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:40 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*ptr;
	char	*ptr1;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	ptr = (char *)dest;
	ptr1 = (char *)src;
	if (ptr1 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr1[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr1++);
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "he55o";
// 	char dest[] = "";
// 	printf("%s\n", src);
// 	ft_memmove(dest, src, 5);
// 	printf("%s\n", dest);
// }