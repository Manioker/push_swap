/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:56:20 by andi              #+#    #+#             */
/*   Updated: 2023/10/29 20:57:35 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*o_bzero(void *ptr, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)ptr;
	while (i < n)
		a[i++] = '\0';
	return (ptr);
}

void	*ft_calloc(size_t n, size_t size)
{
	void		*ptr;
	long long	max;

	max = n * size;
	if (n == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (max > 2147483647)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	o_bzero(ptr, (n * size));
	return (ptr);
}
