/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:07:09 by pixel             #+#    #+#             */
/*   Updated: 2026/02/23 11:40:41 by pjakosal         ###   ########.fr       */
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

void	values_to_stack(t_node **stack_a, long *values, int count)
{
	int		i;
	t_node	*new_node;
	t_node	*last_node;

	i = 0;
	while (i < count)
	{
		new_node = malloc(sizeof(t_node));
		if (new_node == NULL)
			return;
		new_node->data = (int)values[i];
		new_node->next = NULL;
		new_node->prev = NULL;
		if (*stack_a == NULL)
			*stack_a = new_node;
		else
		{
			last_node = *stack_a;
			while (last_node->next)
				last_node = last_node->next;
			last_node->next = new_node;
			new_node->prev = last_node;
		}
		i++;
	}
}

int	integer(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	dups(long *numbers, int vcount)
{
	int i;
	int j;

	i = 0;
	while (i < vcount - 1)
	{
		j = i + 1;
		while (j < vcount)
		{
			if (numbers[i] == numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	handle_args(t_node **stack_a, char **args, int count)
{
	long *values;
	long tmp;
	int i;

	values = malloc(count * sizeof(long));
	if (values == NULL)
		return (1);
	i = 0;
	while (i < count)
	{
		if (!integer(args[i]))
			return (write (2, "Error\n", 6), free (values), 1);
		tmp = ft_atol(args[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (write (2, "Error\n", 6), free (values), 1);
		values[i] = tmp;
		i++;
	}
	if (dups(values, count))
		return (free (values), 1);
	values_to_stack(stack_a, values, count);
	free (values);
	return (0);
}
