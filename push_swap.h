/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avacca <avacca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:01:24 by andi              #+#    #+#             */
/*   Updated: 2024/02/08 14:04:23 by avacca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
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
char					**free_array(char **str);
size_t					ft_strlen(const char *str);
long					ft_atoi(char *str);
int						create_stack_a(t_node_stack **a, char ***arguments,
							int argc);
int						check_for_char(char *str);
void					ft_strlcpy(char *dest, const char *src, size_t size);
char					**ft_join_and_split(char **argv);

#endif