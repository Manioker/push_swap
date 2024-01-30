/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:49:21 by andi              #+#    #+#             */
/*   Updated: 2023/10/31 12:14:56 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main(void)
// {
//     // Test data
//     int test_value = 42;
//     // Call ft_lstnew to create a new node
//     t_list *new_node = ft_lstnew(&test_value);
//     // Check if memory allocation was successful
//     if (new_node == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }
//     // Print the content of the new node
//     printf("Content of the new node: %d\n", *((int *)new_node->content));
//     // Don't forget to free the allocated memory when you're done with it
//     free(new_node);
//     return (0);
// }