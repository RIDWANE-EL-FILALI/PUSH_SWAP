/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:39:08 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/15 22:40:06 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case2(t_mx_list **stack)
{
	sa(stack, 0);
	rra(stack, 0);
}

void	case4(t_mx_list **stack)
{
	sa(stack, 0);
	ra(stack, 0);
}

int	place(t_mx_list **stack)
{
	t_mx_list	*tmp;
	int			i;

	i = 1;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index == 0)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	checkempty(char *str)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			count++;
		i++;
	}
	if (count == ft_strlen(str))
	{
		write(1, "Error\n", 7);
		exit(1);
	}
}

void	norm(char **str)
{
	ft_free(str);
	free(str);
	write(1, "Error\n", 7);
	exit(1);
}
