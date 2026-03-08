/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:00:59 by pixel             #+#    #+#             */
/*   Updated: 2026/03/08 12:35:08 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*node;

	if (b == NULL || b->size == 0)
		return ;
	node = b->top;
	b->top = node->next;
	if (b)
		b->top->prev = NULL; // at this point the node i want to transfer is detached
	b->size--;	
	if (a->top == NULL) // if no nodes yet in stack_a
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

	if (a == NULL || a->size == 0)
		return ;
	node = a->top;
	a->top = node->next;
	if (a)
		a->top->prev = NULL;
	a->size--;
	if (b == NULL)
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
