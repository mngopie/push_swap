/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/09 22:40:02 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->top->index;
	b = stack->top->next->index;
	c = stack->top->next->next->index;
	if (a < b && b < c)
		return ;
	else if (a > b && b < c && a < c)
		sa(stack);
	else if (a > b && b > c)
		return (sa(stack), rra(stack));
	else if (a > b && b < c && a > c)
		ra(stack);
	else if (a < b && b > c && a < c)
		return (rra(stack), sa(stack));
	else if (a < b && b > c && a > c)
		rra(stack);
	return ;
}

void	tiny_sort(t_stack *a, t_stack *b)
{
	int	nodes_pushed;

	nodes_pushed = 0;
	while (a->size > 3)
	{
		if (a->top->index == 0 || a->top->index == 1)
		{
			pb(a, b);
			nodes_pushed++;
		}
		else
			ra(a);
	}
	sort_three(a);
	while (nodes_pushed--)
		pa(a, b);
	if (a->top->index > a->top->next->index)
		sa(a);
}
