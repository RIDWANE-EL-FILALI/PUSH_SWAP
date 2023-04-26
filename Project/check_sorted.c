/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:05:08 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 19:59:54 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_mx_list *stack)
{
	t_mx_list	*tmp;
	int			check;

	check = 0;
	tmp = stack;
	while (tmp && tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			check = 1;
		tmp = tmp->next;
	}
	if (check == 0)
		return (1);
	return (0);
}
