/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:37:10 by pixel             #+#    #+#             */
/*   Updated: 2026/03/10 18:01:57 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	biggest_pushed(t_stack *a, t_stack *b)
{
	int	max;
	int	position;

	max = max_index(b);
	position = index_position(b, max);
	if (position <= b->size / 2)
	{
		while (b->top->index != max)
			rb(b);
	}
	else
	{
		while (b->top->index != max)
			rrb(b);
	}
	pa(a, b);
}

void	push_back(t_stack *a, t_stack *b)
{
	while (b->size > 0)
		biggest_pushed(a, b);
}

void	algorithm(t_stack *a, t_stack *b)
{
	int	chunk_size;
	int	limit;
	int	pushed;

	chunk_size = 20;
	limit = chunk_size;
	pushed = 0;
	while (a->size > 0)
	{
		if (a->top->index < limit)
		{
			pb(a, b);
			if (b->top->index < limit - (chunk_size / 2))
				rb(b);
			pushed++;
		}
		else
			ra(a);
		if (pushed == limit)
			limit += chunk_size;
	}
	push_back(a, b);
}
