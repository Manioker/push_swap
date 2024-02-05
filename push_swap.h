/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andi <andi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:01:24 by andi              #+#    #+#             */
/*   Updated: 2024/02/05 16:48:52 by andi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node_stack
{
	int					value;
	struct s_node_stack	*prev;
	struct s_node_stack	*next;
}						t_node_stack;

char					**ft_split(char const *s, char c);
char					**ft_grouparray(char **argv);
char					**free_and_return(char **str, size_t j);
size_t						ft_strlen(const char *str);

#endif