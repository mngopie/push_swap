/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/02/18 11:57:01 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_or_not(int argc, char **argv, int *count)
{
	char 	**split;
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

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;
	int		count;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1); // argc[1] is ./a.out - return (1) is error
	args = split_or_not(argc, argv, &count);
    if (!args)
    {
        printf("Error\n");
        return (1);
    }

    printf("Count = %d\n", count);

    i = 0;
    while (i < count)
    {
        printf("args[%d] = %s\n", i, args[i]);
        i++;
    }

    if (argc == 2)
        free(args);

    return (0);
	//handle_args(&stack_a, args);
}

// int	main(int argc, char **argv)
// {
// 	t_node *stack_a;
// 	t_node *stack_b;
// 	t_node *node;
// 	int i;
// 	int num;

// 	stack_a = NULL;
// 	stack_b = NULL;
// 	if (!validate_input(argc, argv))
// 	{
// 		write(2, "Error\n", 6);
// 		return (1);
// 	}

// 	i = 1;
// 	while (i < argc) // but it could be na wala input, so we should check if argc > 1
// 	{
// 		num = ft_atoi(argv[i]);
// 		node = create_node(num);

// 		if (stack_a != NULL)
// 		{
// 			node->next = stack_a;
// 			stack_a->prev = node;
// 		}

// 		stack_a = node;
// 		i++;
// 	}
// 	node = stack_a;
// 	while (node)
// 	{
// 		printf("%d\n", node->data);
// 		node = node->next;
// 	}
// 	return (0);
// }
