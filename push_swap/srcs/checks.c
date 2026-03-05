/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:56:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/05 15:42:13 by pixel            ###   ########.fr       */
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

int	is_sorted(t_node **stack_a)
{
	t_node *current;
	
	if (!stack_a || !*stack_a)
		return (1); // 1 = true/sorted; 0 = false/not sorted
	current = *stack_a;
	while (current->next)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return(1);
}
