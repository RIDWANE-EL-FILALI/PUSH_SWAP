/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:33:58 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:35:38 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_mx_list **stack, int c)
{
	t_mx_list	*tmp;
	t_mx_list	*last;

	if (ft_lstsize(*stack) > 1)
	{
		last = ft_lstlast(*stack);
		tmp = *stack;
		(*stack) = (*stack)->next;
		tmp->next = NULL;
		last->next = tmp;
	}
	if (c == 0)
		write(1, "ra\n", 3);
}

void	rb(t_mx_list **stack, int c)
{
	t_mx_list	*tmp;
	t_mx_list	*last;

	if (ft_lstsize(*stack) > 1)
	{
		last = ft_lstlast(*stack);
		tmp = *stack;
		(*stack) = (*stack)->next;
		tmp->next = NULL;
		last->next = tmp;
	}
	if (c == 0)
		write(1, "rb\n", 3);
}

void	rr(t_mx_list **stack_a, t_mx_list **stack_b, int i)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	if (i != 2)
		write(1, "rr\n", 3);
}
