/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:17:23 by andi              #+#    #+#             */
/*   Updated: 2023/10/31 11:48:26 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static t_list	*f_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	int i = 0;
// 	t_list *node1 = f_lstnew("ca");
// 	t_list *node2 = f_lstnew("ro");
// 	t_list *node3 = f_lstnew("line");
// 	node2->next = node1;
// 	node3->next = node2;

// 	t_list *head = node3;

// 	while (i < 2)
// 	{
// 		printf("list %d: ", i);
// 		while (head != NULL)
// 		{
// 			printf("%s", (char *)head->content);
// 			head = head->next;
// 		}
// 		printf("\n");
// 		ft_lstadd_front(&head, node2);
// 		ft_lstadd_front(&head, node1);
// 		node3->next = NULL;
// 		node2->next = node3;
// 		node1->next = node2;
// 		i++;
// 	}
// 	free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }