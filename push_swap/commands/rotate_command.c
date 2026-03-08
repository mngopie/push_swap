/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:38:00 by pixel             #+#    #+#             */
/*   Updated: 2026/03/08 12:57:58 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack == NULL || stack->size < 2)
		return ;
	
	first = stack->top;
	second = first->next;

	stack->top = second;
	second->prev = NULL;
	
	stack->bottom->next = first;
	first->prev = stack->bottom;
	
	first->next = NULL;
	stack->bottom = first;
}

void	ra(t_stack *a)
{
	rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
