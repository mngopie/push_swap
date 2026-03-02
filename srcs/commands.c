/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/02 11:30:58 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sa(t_node **stack_a)
{
    t_node *first;
    t_node *second;
    t_node *third;

    if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL)
        return ;
    first = *stack_a;
    second = first->next;
    third = second->next;

    second->next = first;
    second->prev = NULL;
    first->next = third;
    first->prev = second;
    
    if (third)
        third->prev = first;
    
    *stack_a = second;
	write (1, "sa\n", 3);
    return ;
}

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
