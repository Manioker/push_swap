/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:08:13 by andi              #+#    #+#             */
/*   Updated: 2023/11/01 15:42:30 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	if (!lst || !*lst || !del)
		return ;
	while (current != NULL)
	{
		if (current->content)
			del(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}
