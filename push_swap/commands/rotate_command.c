/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:38:00 by pixel             #+#    #+#             */
/*   Updated: 2026/03/05 15:42:35 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*first_node;
	t_node	*last_node;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	
		last_node = *stack;
	first_node = *stack;
	// i need a index to look point to the last node
	while (last_node->next)
		last_node = last_node->next; // last_node moves until the last node
	*stack = first_node->next;
	(*stack)->prev = NULL;
	
	last_node->next = first_node;
	first_node->prev = last_node;
	
	first_node->next = NULL;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	write (1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	write (1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
