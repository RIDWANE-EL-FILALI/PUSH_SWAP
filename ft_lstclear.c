/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:15:03 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:16:26 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_mx_list **lst)
{
	t_mx_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}
