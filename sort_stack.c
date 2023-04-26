/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:40:17 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 19:38:56 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_mx_list **stack_a, t_mx_list **stack_b, int size)
{
	(void)stack_b;
	if (size == 2)
		sa(stack_a, 0);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else
	{
		divide_stack(stack_a, stack_b);
		push_to_a(stack_a, stack_b);
	}
	ft_lstclear(stack_a);
}

void	sort_three(t_mx_list **stack)
{
	if ((*stack)->content > (*stack)->next->content && \
	(*stack)->next->content < (*stack)->next->next->content && \
	(*stack)->content < (*stack)->next->next->content)
		sa(stack, 0);
	else if ((*stack)->content > (*stack)->next->content && \
	(*stack)->next->content > (*stack)->next->next->content && \
	(*stack)->content > (*stack)->next->next->content)
		case2(stack);
	else if ((*stack)->content > (*stack)->next->content && \
	(*stack)->next->content < (*stack)->next->next->content && \
	(*stack)->content > (*stack)->next->next->content)
		ra(stack, 0);
	else if ((*stack)->content < (*stack)->next->content && \
	(*stack)->next->content > (*stack)->next->next->content && \
	(*stack)->content < (*stack)->next->next->content)
		case4(stack);
	else if ((*stack)->content < (*stack)->next->content && \
	(*stack)->next->content > (*stack)->next->next->content && \
	(*stack)->content > (*stack)->next->next->content)
		rra(stack, 0);
}

void	sort_four(t_mx_list **stack_a, t_mx_list **stack_b)
{
	int	i;

	i = find_min(stack_a);
	if (i == 2)
		sa(stack_a, 0);
	else if (i == 3)
	{
		ra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (i == 4)
		rra(stack_a, 0);
	pb(stack_a, stack_b, 0);
	sort_three(stack_a);
	pa(stack_a, stack_b, 0);
}

void	sort_five(t_mx_list **stack_a, t_mx_list **stack_b)
{
	int		i;

	i = place(stack_a);
	if (i == 2)
		sa(stack_a, 0);
	else if (i == 3)
	{
		ra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (i == 4)
	{
		rra(stack_a, 0);
		rra(stack_a, 0);
	}
	else if (i == 5)
		rra(stack_a, 0);
	pb(stack_a, stack_b, 0);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b, 0);
}
