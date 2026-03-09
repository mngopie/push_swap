/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:00:59 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 12:46:47 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*node;

	if (!b || b->size == 0)
		return ;
	node = b->top;
	b->top = node->next;
	if (b->top)
		b->top->prev = NULL; // at this point the node i want to transfer is detached
	else
		b->bottom = NULL;
	b->size--;	
	if (a->top == 0) // if no nodes yet in stack_a
	{
		a->top = node;
		a->bottom = node;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->next = a->top;
		node->prev = NULL;
		a->top->prev = node;
		a->top = node;
	}
	a->size++;
	write (1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*node;

	if (!a || a->size == 0)
		return ;
	node = a->top;
	a->top = node->next;
	if (a->top)
		a->top->prev = NULL;
	else
		a->bottom = NULL;
	a->size--;
	if (b->size == 0)
	{
		b->top = node;
		b->bottom = node;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->next = b->top;
		node->prev = NULL;
		b->top->prev = node;
		b->top = node;
	}
	b->size++;
	write (1, "pb\n", 3);
}
