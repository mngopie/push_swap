/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/02/25 19:37:52 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_or_not(int argc, char **argv, int *count)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (!split || !split[0])
			return (NULL);
		i = 0;
		while (split[i])
			i++;
		*count = i;
		return (split);
	}
	*count = argc - 1;
	return (argv + 1);
}

void	print_stack(t_node *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}

int	stack_sorted(t_node **stack_a)
{
	t_node *current;
	
	current = *stack_a;
	while (current->next != NULL)
	{
		if (current->data < current->next->data)
			// now compare if the current->next->data < current->next->next->data
			// amo na ang problem if indi ko kabalo how many arguments are there
			// need ko ang size and to know when to go in this function
			current = current->next;
		else
			return(1); // it's not in ascending order
			// go to manual sorting logic
	}
	return(0); // means sorted
}

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
	if (!stack_sorted(&stack_a)) // is this just a check? or diri ko himuon ang manual sorting for 3, 4, 5 arguments?
		// it would go through sorting logic - algorithm
	// if (argc == 2) // free split_or_not(args)
	// 	free (split_or_not);
	return (0);
}
