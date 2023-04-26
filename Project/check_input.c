/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:57:04 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/13 23:17:43 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int ac, char **av)
{
	char	**str;
	int		i;
	int		j;

	(void)ac;
	i = 1;
	while (av[i])
	{
		j = 0;
		checkempty(av[i]);
		str = ft_split(av[i], ' ');
		while (str[j])
		{
			if (check_av(str[j]) == 1)
				norm(str);
			if (check_max_int(str[j]) == 1)
				norm(str);
			j++;
		}
		ft_free(str);
		free(str);
		i++;
	}
	return (0);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

int	check_max_int(char *str)
{
	long int	tmp;

	tmp = ft_atoi(str);
	if (tmp > 2147483647 || tmp < -2147483648)
		return (1);
	return (0);
}

int	check_av(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1])
		i++;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (1);
	i++;
	}
	return (0);
}

int	check_for_doubles(t_mx_list **stack)
{
	t_mx_list	*tmp;
	t_mx_list	*tmp2;
	int			check;
	int			i;

	tmp2 = *stack;
	while (tmp2)
	{
		i = tmp2->content;
		tmp = tmp2->next;
		while (tmp)
		{
			check = tmp->content;
			if (check == i)
				return (1);
			tmp = tmp->next;
		}
		tmp2 = tmp2->next;
	}
	return (0);
}
