/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:22:16 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 16:56:33 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (stack == NULL || stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	third = second->next;
	second->next = first;
	second->prev = NULL;
	first->next = third;
	first->prev = second;
	if (third)
		third->prev = first;
	else
		stack->bottom = first;
	stack->top = second;
}

void	sa(t_stack *a)
{
	swap(a);
	write (1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	swap(b);
	write (1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
