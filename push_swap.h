/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:27:05 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 20:02:30 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line/get_next_line.h"
# define BUFFER_SIZE 10

typedef struct my_list
{
	int				content;
	int				index;
	struct my_list	*next;
}	t_mx_list;

void		ft_lstadd_back(t_mx_list **lst, t_mx_list *new);
int			check_input(int ac, char **av);
int			check_correct_input(char *av);
int			check_max_int(char *str);
int			check_av(char *str);
int			check_for_doubles(t_mx_list **stack);
void		fill_stack(t_mx_list **stack_a, int ac, char **av);
long		ft_atoi(const char *str);
t_mx_list	*ft_lstnew(int content);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char *str, char c);
size_t		ft_strlen(const char *s);
t_mx_list	*ft_lstlast(t_mx_list *lst);
void		index_stack(t_mx_list *stack);
int			check_if_sorted(t_mx_list *stack);
int			ft_lstsize(t_mx_list *lst);
void		sort_stack(t_mx_list **stack_a, t_mx_list **stack_b, int size);

void		pb(t_mx_list **stack_a, t_mx_list **stack_b, int i);
void		pa(t_mx_list **stack_a, t_mx_list **stack_b, int i);
void		sa(t_mx_list **stack, int c);
void		sb(t_mx_list **stack, int c);
void		ss(t_mx_list **stack_a, t_mx_list **stack_b, int i);
void		ra(t_mx_list **stack, int c);
void		rb(t_mx_list **stack, int c);
void		rr(t_mx_list **stack_a, t_mx_list **stack_b, int i);
void		rra(t_mx_list **stack, int c);
void		rrb(t_mx_list **stack, int c);
void		rrr(t_mx_list **stack_a, t_mx_list **stack_b, int i);
void		sort_three(t_mx_list **stack);
t_mx_list	*before_last(t_mx_list *stack);
void		sort_four(t_mx_list **stack_a, t_mx_list **stack_b);
int			find_min(t_mx_list **stack);
void		sort_five(t_mx_list **stack_a, t_mx_list **stack_b);
void		divide_stack(t_mx_list **stack_a, t_mx_list **stack_b);
void		normal_push(t_mx_list **stack_a, t_mx_list **stack_b);
void		push(t_mx_list **stack_a, t_mx_list **stack_b, int index);
void		complex_push(t_mx_list **stack_a, t_mx_list **stack_b);
int			instraction_number(int len, int pos);
int			position_number(t_mx_list **stack_b, int index);
int			ft_lstsize(t_mx_list *lst);
void		push_to_a(t_mx_list **stack_a, t_mx_list **stack_b);
void		ft_lstclear(t_mx_list **lst);
void		ft_free(char **str);
void		push_to_b(t_mx_list **stack_a, t_mx_list **stack_b, \
		int chunck, int ref);
char		*get_next_line(int fd);
char		*ft_strchr(char *s, int c);
void		check(t_mx_list **stack_a, t_mx_list **stack_b);
int			ft_cmp(char *str, char *str2);
void		apply(t_mx_list **stack_a, t_mx_list **stack_b, char *str);
void		ft_error(void);
void		case2(t_mx_list **stack);
void		case4(t_mx_list **stack);
int			place(t_mx_list **stack);
void		checkempty(char *str);
void		norm(char **str);
#endif
