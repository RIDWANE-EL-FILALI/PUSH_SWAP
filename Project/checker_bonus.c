/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:06:31 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/15 22:36:19 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_mx_list	*stack_a;
	t_mx_list	*stack_b;

	if (ac < 2)
		return (0);
	if (check_input(ac, av) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	fill_stack(&stack_a, ac, av);
	if (check_for_doubles(&stack_a) == 1)
	{
		ft_lstclear(&stack_a);
		write(2, "Error\n", 6);
		return (1);
	}
	check(&stack_a, &stack_b);
	return (0);
}

void	check(t_mx_list **stack_a, t_mx_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		apply(stack_a, stack_b, str);
		free(str);
		str = get_next_line(0);
	}
	free(str);
	if (check_if_sorted(*stack_a) == 1 && ft_lstsize(*stack_b) == 0)
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

int	ft_cmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] && str2[i])
	{
		if (str[i] != str2[i])
			return (1);
		i++;
	}
	return (0);
}

void	apply(t_mx_list **stack_a, t_mx_list **stack_b, char *str)
{
	if (ft_cmp(str, "sa\n") == 0)
		sa(stack_a, 1);
	else if (ft_cmp(str, "sb\n") == 0)
		sb(stack_b, 1);
	else if (ft_cmp(str, "ss\n") == 0)
		ss(stack_a, stack_b, 2);
	else if (ft_cmp(str, "pa\n") == 0)
		pa(stack_a, stack_b, 1);
	else if (ft_cmp(str, "pb\n") == 0)
		pb(stack_a, stack_b, 1);
	else if (ft_cmp(str, "ra\n") == 0)
		ra(stack_a, 1);
	else if (ft_cmp(str, "rb\n") == 0)
		rb(stack_b, 1);
	else if (ft_cmp(str, "rr\n") == 0)
		rr(stack_a, stack_b, 2);
	else if (ft_cmp(str, "rra\n") == 0)
		rra(stack_a, 1);
	else if (ft_cmp(str, "rrb\n") == 0)
		rrb(stack_b, 1);
	else if (ft_cmp(str, "rrr\n") == 0)
		rrr(stack_a, stack_b, 2);
	else
		ft_error();
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
