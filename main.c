/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/02/24 14:43:40 by pixel            ###   ########.fr       */
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

// void	print_stack(t_node *stack)
// {
// 	while (stack)
// 	{
// 		printf("%d\n", stack->data);
// 		stack = stack->next;
// 	}
// }

int	stack_sorted(t_node **stack_a)
{
	t_node *current; // a pointer that points to the first node
	
	current = *stack_a;
	while (stack_a)
	{
		if (current->data > current->next->data)
			return (0); // function to sort stack_a
		else
			current = current->next;
	}
	return (1);
	// do nothing if alr sorted.. duh.. this function is a checker
	// compare each node's data with the next node's data, if current node's data is less than the next node's data it's FALSE
	// if (not sorted)
		// the use of commands/operations
	return (1); // stack is sorted
	return (0); // not sorted; need to use commands/operations
	// check if stack_a is sorted in ascending order
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
	if (!stack_sorted(stack_a))
	// printf ("stack A: \n");
	// print_stack(stack_a);
	// if (argc == 2) // free split_or_not(args)
	// 	free (split_or_not);
	return (0);
}
