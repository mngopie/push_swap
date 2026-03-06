/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:33:18 by pixel             #+#    #+#             */
/*   Updated: 2026/03/06 12:06:59 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// function that finds the smallest value node
// function that gets the length of the stack, a & b?

void	stack(t_stack **stack)
{
	(*stack)->top = NULL;
	(*stack)->bottom = NULL;
	(*stack)->size = 0;
}

t_node	*min(t_node *stack)
{
	t_node	*min_node;

	if (!stack)
		return (NULL);
	min_node = stack;
	while (stack)
	{
		if (stack->data < min_node->data)
			min_node = stack;
		stack = stack->next;
	}
	return (min_node);
}
