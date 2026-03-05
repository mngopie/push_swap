/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:22:16 by pixel             #+#    #+#             */
/*   Updated: 2026/03/05 15:42:31 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_node **stack)
{
    t_node	*first;
	t_node	*second;
	t_node	*third;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	third = second->next;

	second->next = first;
	second->prev = NULL;
	first->next = third;
	first->prev = second;

	if (third)
		third->prev = first;

	*stack = second;
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	write (1, "sa\n", 3);
    return ;
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	write (1, "sb\n", 3);
	return ;
}

void	ss(t_node **stack_a, t_node **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
	return ;
}
