/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:43:37 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 16:34:43 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *a)
{
	t_node	*current;
	t_node	*compare;
	int	index;

	current = a->top;
	while(current)
	{
		index = 0;
		compare = a->top;
		while (compare)
		{
			if (compare->data < current->data)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

void	sort_control(t_stack *a, t_stack *b)
{
	int	count;

	count = a->size;
	if (count == 2)
		sa(a);
	else if (count == 3)
		sort_three(a);
	else if (count == 4 || count == 5)
		tiny_sort(a, b);
	else
		algorithm(a, b);
}
