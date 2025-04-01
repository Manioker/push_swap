/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:23:00 by anvacca           #+#    #+#             */
/*   Updated: 2024/07/18 14:11:42 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// structure
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

// parsing
int					isnumber(const char *str);
int					isduplicate(char **arr);
void				error_message(int error);
void				parser(int argc, char **argv);

// utils
int					ft_count_words(char *str, char c);
int					ft_atoi(char *str);
int					ft_strcmp(char *str1, char *str2);
char				**ft_split(char *s, char c);
size_t				ft_strlen(char *str);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstbeforelast(t_list *lst);
t_list				*ft_lstnew(int a, int b);
int					ft_lstsize(t_list *lst);

// lists
void				free_list(t_list **stack);
t_list				*init_list_a(int ac, char **av);
void				init_index(t_list *stack_a);
//		mouvements
void				sa(t_list *stack_a);
void				sb(t_list *stack_b);
void				ss(t_list *stack_a, t_list *stack_b);
void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);

// sorting
int					issorted(t_list *stack_a);
void				simple_sort(t_list **stack_a, t_list **stack_b, int size);
void				sorter(t_list **stack_a, t_list **stack_b);
void				radix_sort(t_list **stack_a, t_list **stack_b, int size);

#endif
