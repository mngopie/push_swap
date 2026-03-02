/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:00:59 by pixel             #+#    #+#             */
/*   Updated: 2026/03/02 16:37:22 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*node;

	if (stack_b == NULL || *stack_b == NULL)
		return ;
	
	node = *stack_b;
	*stack_b = node->next;
	
	if (*stack_b)
		(*stack_b)->prev = NULL; // at this point the node i want to transfer is detached
	if (*stack_a == NULL) // if no nodes yet in stack_a
	{
		*stack_a = node;
		node->next = NULL;
	}
	else
	{
		node->prev = NULL;
		node->next = *stack_a;
		(*stack_a)->prev = node; // next node's prev is set to node
		*stack_a = node;
	}
	write (1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*node;

	if (stack_a == NULL || *stack_a == NULL)
		return ;

	node = *stack_a;
	*stack_a = node->next;

	if (*stack_a)
		(*stack_a)->prev = NULL;
	if (*stack_b == NULL)
	{
		*stack_b = node;
		node->next = NULL;
	}
	else
	{
		node->prev = NULL;
		node->next = *stack_b;
		(*stack_b)->prev = node;
		*stack_b = node;
	}
	write (1, "pb\n", 3);
}
