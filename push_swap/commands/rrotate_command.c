/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:50:50 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 16:57:46 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack *stack)
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

void	rra(t_stack *a)
{
	rrotate(a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rrotate(b);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
	write (1, "rrr\n", 4);
}
