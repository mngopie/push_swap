/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:43:37 by pixel             #+#    #+#             */
/*   Updated: 2026/03/05 15:42:20 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack)
{
	int a;
	int b;
	int c;

	if (!stack || !*stack)
	 	return ;
	a = (*stack)->data;
	b = (*stack)->next->data;
	c = (*stack)->next->next->data;
	if (a < b && b < c)
		return ; // 1 2 3
	else if (a > b && b < c && a < c)
		sa(stack); // 2 1 3
	else if (a > b && b > c)
		return (sa(stack), rra(stack)); // 3 2 1
	else if (a > b && b < c && a > c)
		ra(stack); // 3 1 2
	else if (a < b && b > c && a < c)
		return (rra(stack), sa(stack)); // 1 3 2
	else if (a < b && b > c && a > c)
		rra(stack); // 2 3 1
	return ;
}
