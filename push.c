/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:23:03 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:24:16 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_mx_list **stack_a, t_mx_list **stack_b, int i)
{
	t_mx_list	*tmp;

	tmp = *stack_b;
	if (!tmp)
		return ;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	if (i != 1)
		write(1, "pa\n", 3);
}

void	pb(t_mx_list **stack_a, t_mx_list **stack_b, int i)
{
	t_mx_list	*tmp;

	tmp = *stack_a;
	if (!tmp)
		return ;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (i != 1)
		write(1, "pb\n", 3);
}
