/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:50:50 by pixel             #+#    #+#             */
/*   Updated: 2026/03/03 11:07:12 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrotate(t_node **stack)
{
	t_node	*last_node;
    t_node	*second_last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	
	// first_node = *stack;
	last_node = *stack;

	while (last_node->next)
		last_node = last_node->next;
	
	second_last = last_node->prev;
	second_last->next = NULL;
	last_node->prev = NULL;
	last_node->next = *stack;
	(*stack)->prev = last_node;
	*stack = last_node;
}

void    rra(t_node **stack_a)
{
	rrotate(stack_a);
	write (1, "rra\n", 4);
}

void    rrb(t_node **stack_b)
{
	rrotate(stack_b);
	write (1, "rrb\n", 4);
}

void    rrr(t_node **stack_a, t_node **stack_b)
{
    rrotate(stack_a);
	rrotate(stack_b);
	write (1, "rrr\n", 4);
}
