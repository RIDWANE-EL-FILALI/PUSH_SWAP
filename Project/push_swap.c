/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:25:22 by rel-fila          #+#    #+#             */
/*   Updated: 2023/04/15 22:36:38 by rel-fila         ###   ########.fr       */
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
	if (check_if_sorted(stack_a) == 1)
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	sort_stack(&stack_a, &stack_b, ft_lstsize(stack_a));
	return (0);
}
