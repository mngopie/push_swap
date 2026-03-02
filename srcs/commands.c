/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:48:23 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/02 10:05:59 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sa_swap(t_node **head)
{
    t_node *first;
    t_node *second;
    t_node *third;

    if (head == NULL || *head == NULL || (*head)->next == NULL)
        return ;
    first = *head;
    second = first->next;
    third = second->next;

    first->next = third;
    first->prev = second;
    second->next = first;
    second->prev = NULL;
    
    if (third != NULL)
        third->prev = first;
    else
        first->next = NULL;
    
    *head = second;
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
		if (current->next >)
	}
}