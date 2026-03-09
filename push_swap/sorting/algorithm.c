/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:37:10 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 15:46:30 by pixel            ###   ########.fr       */
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

void    algorithm(t_stack *a, t_stack *b)
{
	int	chunk_size; // allowed numbers inside the chunk
	int	limit; // highest index allowed in the chunk; 0-19
	int	pushed; // numbers pushed to stack b

	chunk_size = 20;
	limit = chunk_size;
	pushed = 0;
    while (a->size > 0) // pushing everything to stack b
	{
		if (a->top->index < limit)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
		if (pushed == limit)
			limit += chunk_size;
	}
	//nodes back to a
}


// empty out a
//