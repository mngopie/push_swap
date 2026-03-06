/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/06 12:38:11 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	**args;

	stack(&a); /* initialize */
	stack(&b);
	if (argc < 2)
		return (0);
	args = split_or_not(argc, argv);
	if (!args)
		return (write(1, "Error\n", 6), 1);
	handle_args(&a, args);
	assign_index(&stack_a);
	if (!is_sorted(&stack_a)) // is this just a check? or diri ko himuon ang manual sorting for 3, 4, 5 arguments?
	{
		if (count == 2)
			sa(&stack_a); // swap the two nodes
		else if (count == 3)
			sort_three(&stack_a);
		else if (count == 4 || count == 5)
			tiny_sort(&stack_a, &stack_b);
		else
			chunk_sort(&stack_a, &stack_b, count);
	}
	// 	free (stack_a & stack_b);
	return (0);
}
