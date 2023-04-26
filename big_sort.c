/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:52:34 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 23:17:12 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_mx_list **stack_a, t_mx_list **stack_b, int chunck, int ref)
{
	int	i;

	i = 0;
	while (i < ref && *stack_a)
	{
		if ((*stack_a)->index < chunck)
		{
			if ((*stack_a)->index >= (chunck - (ref / 2)))
			{
				pb(stack_a, stack_b, 0);
				rb(stack_b, 0);
			}
			else
				pb(stack_a, stack_b, 0);
			i++;
		}
		else
			ra(stack_a, 0);
	}
}

void	divide_stack(t_mx_list **stack_a, t_mx_list **stack_b)
{
	int	len;
	int	chunck;
	int	add;

	len = ft_lstsize(*stack_a);
	if (len >= 200)
	{
		chunck = len / 9;
		add = len / 9;
		while (ft_lstsize(*stack_a))
		{
			push_to_b(stack_a, stack_b, chunck, add);
			chunck += add;
		}
	}
	else
	{
		chunck = len / 5;
		add = len / 5;
		while (ft_lstsize(*stack_a))
		{
			push_to_b(stack_a, stack_b, chunck, add);
			chunck += add;
		}
	}
}

int	position_number(t_mx_list **stack_b, int index)
{
	t_mx_list	*tmp;
	int			pos;

	pos = 1;
	tmp = *stack_b;
	while (tmp && tmp->index != index)
	{
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}

int	instraction_number(int len, int pos)
{
	if (pos < (len / 2))
		return (pos - 1);
	return (len - pos + 1);
}
