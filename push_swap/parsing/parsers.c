/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:07:09 by pixel             #+#    #+#             */
/*   Updated: 2026/03/06 16:34:51 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// atoi or atol; long to handle int_min and int_max range
// linked list: create & add new nodes
// function to take the argv, have the checks: integers? duplicates? range? push into nodes

long	ft_atol(const char *nptr)
{
	long num;
	long sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 8 && nptr[i] <= 13))
	{
		i++;
		if (nptr[i] == '\0')
			return (0);
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != '\0')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}

void	values_to_stack(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->data = value;
	new_node->index = 0;
	new_node->next = NULL;
	new_node->prev = stack->bottom;
	if (!stack->top)
		stack->top = new_node;
	else
		stack->bottom->next = new_node;
	stack->bottom = new_node;
	stack->size++; // should i increase size here to count each nodes?
}

int	integer(char *arg)
{
	int i;

	i = 0;
	if (arg == NULL)
		return (1);
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (arg[i] == '\0')
		return (1);
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	dups(t_stack *a, int arg)
{
	t_node	*current;

	current = a->top;
	while (current)
	{
		if (current->data == arg)
			return (1);
		current = current->next;
	}
	return (0);
}

int	handle_args(t_stack *a, char **args)
{
	long tmp;
	int i;

	i = 0;
	while (args[i])
	{
		if (integer(args[i]))
			return (write (1, "Error\n", 6), 1);
		tmp = ft_atol(args[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (write (1, "Error\n", 6), 1);
		if (dups(a, (int)tmp))
			return (write (1, "Error\n", 6), 1);
		values_to_stack(a, (int)tmp);
		i++;
	}
	return (0); // free args aahh on main()
}
