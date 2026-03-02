/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/02 14:16:37 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	 t_node *first;
	 t_node *second;
	 t_node *third;
	 t_node *current;

	 if (!stack_a || !*stack_a)
	 	return ;
	current = *stack_a;
	while (current->next != NULL)
	{
		if (current->data > current->next->data);
			// either i call sa_swap bc first two nodes?
		if (); // i need to switch the head and tail, middle node remains
		if (); // if i need to switch the middle node and the tail
	}
	return ;
}
