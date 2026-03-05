/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/05 15:42:15 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	small_node(t_node **stack)
// {
// 	int		min_value;
// 	int		min_index;
// 	int		i;
// 	t_node	*current;

// 	if (stack == NULL || *stack == NULL)
// 		return ;
// 	min_value = (*stack)->data;
// 	min_index = 0;
// 	i = 0;
// 	current = *stack;
// 	while (current)
// 	{
// 		if (current->data < min_value)
// 			min_value = current->data;
// 			min_index = i;
// 		current = current->next;
// 		i++;
// 	}
// 	return (min_index);
// }

void	tiny_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*min_node;

	if (stack_a == NULL || *stack_a == NULL)
		return ;
	min_node = min(*stack_a);
}
