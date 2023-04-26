/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:21:31 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:22:20 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_mx_list *stack)
{
	t_mx_list	*tr1;
	t_mx_list	*tr2;

	tr1 = stack;
	while (tr1)
	{
		tr1->index = 0;
		tr2 = stack;
		while (tr2)
		{
			if (tr1->content > tr2->content)
				tr1->index += 1;
			tr2 = tr2->next;
		}
		tr1 = tr1->next;
	}
}
