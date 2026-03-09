/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:13:24 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 16:53:23 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_index(t_stack *b)
{
	t_node	*current;
	int		max;

	current = b->top;
	max = current->index;
	while (current)
	{
		if (current->index > max)
			max = current->index;
		current = current->next;
	}
	return (max);
}

int	index_position(t_stack *b, int max)
{
	t_node	*current;
	int		position;

	current = b->top;
	position = 0;
	while (current)
	{
		if (current->index == max)
			return (position);
		position++;
		current = current->next;
	}
	return (-1);
}
