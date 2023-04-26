/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:42:45 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:44:24 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_mx_list **stack, int c)
{
	int	tmp;
	int	index_tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->content;
	index_tmp = (*stack)->index;
	(*stack)->content = (*stack)->next->content;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->content = tmp;
	(*stack)->next->index = index_tmp;
	if (c == 0)
		write(1, "sa\n", 3);
}

void	sb(t_mx_list **stack, int c)
{
	int	tmp;
	int	index_tmp;

	if (!*stack || (*stack)->next)
		return ;
	tmp = (*stack)->content;
	index_tmp = (*stack)->index;
	(*stack)->content = (*stack)->next->content;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->content = tmp;
	(*stack)->next->index = index_tmp;
	if (c == 0)
		write(1, "sb\n", 3);
}

void	ss(t_mx_list **stack_a, t_mx_list **stack_b, int i)
{
	sa(stack_a, 1);
	sb(stack_b, 1);
	if (i != 2)
		write(1, "ss\n", 3);
}
