/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/08 15:59:10 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	int a;
	int b;
	int c;

	a = stack->top->index;
	b = stack->top->next->index;
	c = stack->top->next->next->index;

	if (a < b && b < c)
		return ;
	if (a > b && a > c)
		ra(stack);
	else if (b > a && b > c)
		rra(stack);
	if (a > b)
		sa(stack);
}

void	tiny_sort(t_stack *a, t_stack *b)
{
	int nodes_pushed = 0;

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
	while(nodes_pushed--)
		pa(a, b);
	if (a->top->index > a->top->next->index)
		sa(a);
}

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

// void	sort_three(t_stack *stack)
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