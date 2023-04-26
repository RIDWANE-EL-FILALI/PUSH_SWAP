/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:16:45 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 17:16:56 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_mx_list	*ft_lstlast(t_mx_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst ->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
