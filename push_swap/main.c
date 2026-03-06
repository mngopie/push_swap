/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/06 10:45:33 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;
	int		count;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1); // argc[1] is ./a.out - return (1) is error
	args = split_or_not(argc, argv, &count);
	if (!args)
		return (write(2, "Error\n", 6), 1);
	handle_args(&stack_a, args, count);
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
