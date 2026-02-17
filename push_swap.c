/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:30:58 by pjakosal          #+#    #+#             */
/*   Updated: 2026/02/17 10:51:24 by pjakosal         ###   ########.fr       */
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

int	check_duplicates(t_node *stack, int value)
{
}


int	validate_input(int argc, char **argv)
{
	int i;

	// if indi integer error - this helper function checks the STRING
	// convert string to int
	// if indi within range error INT_MIN & INT_MAX?
	// so if integer and within range istore ko ang string in another memory?
	// in that memory i need to check for duplicates
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		printf("no arguments indicated\n"); 
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (integer(argv[i]))
			printf("\"%s\" is a valid integer\n", argv[i]);
		else
			printf("\"%s\" is NOT a valid integer\n", argv[i]);
		i++;
	}
	return (0);
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
