/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:31:11 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:33:40 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_mx_list **stack, int c)
{
	t_mx_list	*tmp;
	t_mx_list	*last;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		last = ft_lstlast(*stack);
		while (tmp)
		{
			if (!tmp->next->next)
			{
				tmp->next = NULL;
				break ;
			}
			tmp = tmp->next;
		}
		last->next = *stack;
		*stack = last;
	}
	if (c == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_mx_list **stack, int c)
{
	t_mx_list	*tmp;
	t_mx_list	*last;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		last = ft_lstlast(*stack);
		while (tmp)
		{
			if (!tmp->next->next)
			{
				tmp->next = NULL;
				break ;
			}
			tmp = tmp->next;
		}
		last->next = *stack;
		*stack = last;
	}
	if (c == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_mx_list **stack_a, t_mx_list **stack_b, int i)
{
	rra(stack_a, 1);
	rrb(stack_b, 1);
	if (i != 2)
		write(1, "rrr\n", 4);
}
