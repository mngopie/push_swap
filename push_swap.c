/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:30:58 by pjakosal          #+#    #+#             */
/*   Updated: 2026/02/11 16:43:54 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int num;
	int sign;
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

t_node	*create_node(int value)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

int	main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;
	t_node *node;
	int i;
	int num;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		node = create_node(num);

		if (stack_a != NULL)
		{
			node->next = stack_a;
			stack_a->prev = node;
		}

		stack_a = node;
		i++;
	}
	node = stack_a;
	while (node)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	return (0);
}
