/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacca <avacca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:24:01 by avacca            #+#    #+#             */
/*   Updated: 2024/02/08 14:05:24 by avacca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**free_array(char **str)
{
	int j;

	j = 0;
	while (str[j])
		free(str[j++]);
	free(str);
	return (NULL);
}