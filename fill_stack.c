/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:12:34 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 20:00:18 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_mx_list **stack, int ac, char **av)
{
	int			i;
	int			j;
	char		**str;
	t_mx_list	*node;

	i = 1;
	(void)ac;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		while (str[j])
		{
			node = ft_lstnew(ft_atoi(str[j++]));
			if (!node)
				exit(1);
			ft_lstadd_back(stack, node);
		}
		ft_free(str);
		free(str);
		i++;
	}
	index_stack(*stack);
}
