/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:50:50 by pixel             #+#    #+#             */
/*   Updated: 2026/03/08 13:15:38 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrotate(t_stack *stack)
{
	t_node	*last;
    t_node	*second_last;

	if (stack == NULL || stack->size < 2)
		return ;
	
	last = stack->bottom;
	second_last = last->prev;

	second_last->next = NULL;
	stack->bottom = second_last;

	last->prev = NULL;
	last->next = stack->top;
	stack->top->prev = last;
	stack->top = last;
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
