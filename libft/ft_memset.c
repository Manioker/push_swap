/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:17:24 by andi              #+#    #+#             */
/*   Updated: 2023/10/23 16:02:35 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)ptr;
	while (i < n)
		a[i++] = x;
	return (ptr);
}

// int main()
// {
// 	char str[11] = "hello there";
// 	printf("%s\n", str);
// 	ft_memset(str, '.', 2*sizeof(int));
// 	printf("%s\n", str);
// }