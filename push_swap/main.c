/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 21:29:58 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	**args;

	stack(&a);
	stack(&b);
	if (argc < 2)
		return (0);
	args = split_or_not(argc, argv);
	if (!args)
		return (write(1, "Error\n", 6), 1);
	if (handle_args(&a, args))
		return (cleanup(args, argc, &a, &b), 1);
	assign_index(&a);
	if (!is_sorted(&a))
		sort_control(&a, &b);
	cleanup(args, argc, &a, &b);
	return (0);
}
