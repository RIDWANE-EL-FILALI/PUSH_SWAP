/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:45:33 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 20:03:03 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_mx_list **stack)
{
	t_mx_list	*tmp;
	int			min;
	int			i;

	i = 1;
	min = (*stack)->content;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp && tmp->content != min)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	push(t_mx_list **stack_a, t_mx_list **stack_b, int index)
{
	int	lent;
	int	pos;
	int	instruction;

	lent = ft_lstsize(*stack_b);
	pos = position_number(stack_b, index);
	instruction = instraction_number(ft_lstsize(*stack_b), pos);
	while (instruction)
	{
		if (pos < (lent / 2))
			rb(stack_b, 0);
		else
			rrb(stack_b, 0);
		instruction--;
	}
	pa(stack_a, stack_b, 0);
}

void	normal_push(t_mx_list **stack_a, t_mx_list **stack_b)
{
	int	lent;

	lent = ft_lstsize(*stack_b) - 1;
	push(stack_a, stack_b, lent);
}

void	complex_push(t_mx_list **stack_a, t_mx_list **stack_b)
{
	int	lent2;
	int	lent;

	lent2 = ft_lstsize(*stack_b) - 1;
	lent = lent2 - 1;
	push(stack_a, stack_b, lent);
	push(stack_a, stack_b, lent2);
	sa(stack_a, 0);
}

void	push_to_a(t_mx_list **stack_a, t_mx_list **stack_b)
{
	int	small;
	int	psmall;
	int	smallnumber;
	int	psmallnumber;
	int	index;

	index = ft_lstsize(*stack_b) - 1;
	while (index > 0)
	{
		small = position_number(stack_b, index);
		psmall = position_number(stack_b, index - 1);
		smallnumber = instraction_number(ft_lstsize(*stack_b), small);
		psmallnumber = instraction_number(ft_lstsize(*stack_b), psmall);
		if (smallnumber > psmallnumber)
			complex_push(stack_a, stack_b);
		else
			normal_push(stack_a, stack_b);
		index = ft_lstsize(*stack_b) - 1;
	}
	if (index == 0)
		pa(stack_a, stack_b, 0);
}
