/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/05 05:36:30 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_three(t_node **stack)
// {
// 	int a;
// 	int b;
// 	int c;

// 	if (!stack || !*stack)
// 	 	return ;
// 	a = (*stack)->data;
// 	b = (*stack)->next->data;
// 	c = (*stack)->next->next->data;
// 	if (a < b && b < c)
// 		return ; // 1 2 3
// 	else if (a > b && b < c && a < c)
// 		sa(stack); // 2 1 3
// 	else if (a > b && b > c)
// 		return (sa(stack), rra(stack)); // 3 2 1
// 	else if (a > b && b < c && a > c)
// 		ra(stack); // 3 1 2
// 	else if (a < b && b > c && a < c)
// 		return (rra(stack), sa(stack)); // 1 3 2
// 	else if (a < b && b > c && a > c)
// 		rra(stack); // 2 3 1
// 	return ;
// }

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

t_node	*min(t_node *stack)
{
	t_node	*min_node;

	if (stack == NULL)
		return ;
	min_node = stack;
	while (stack)
	{
		if (stack->data < min_node->data)
			min_node = stack;
		stack = stack->next;
	}
	return (min_node);
}

void	tiny_sort(t_node **stack)
{
	if (stack == NULL || *stack == NULL)
		return ;
	
}
