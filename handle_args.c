/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:07:09 by pixel             #+#    #+#             */
/*   Updated: 2026/02/19 13:15:25 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// atoi or atol; long to handle int_min and int_max range
// linked list: create & add new nodes
// function to take the argv, have the checks: integers? duplicates? range? push into nodes

int	ft_atoi(const char *nptr)
{
	int num;
	int sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 8 && nptr[i] <= 13))
	{
		i++;
		if (nptr[i] == '\0')
			return (0);
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != '\0')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}

t_node	*create_node(int value)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

int	integer(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicates(int *numbers, int vcount)
{
	int i;
    int j;

    i = 0;
    while (i < vcount - 1)
    {
        j = i + 1;
        while (j < vcount)
        {
            if (numbers[i] == numbers[j])
            {
                write (2, "Error: Duplicate\n", 17);
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}

int	handle_args(t_node stack_a, char **args, int count)
{
	int *converted_tofre;
	int i;

	converted_tofre = malloc((count) * sizeof(int));
	if (converted_tofre == NULL)
		return (1);
	i = 0;
	while (i < count)
	{
		if (!integer(args[i]))
			converted_tofre[i - 1] = ft_atoi(args[i]);
	}
	// if indi integer error - this helper function checks the STRING
	// convert string to int
	// if indi within range error INT_MIN & INT_MAX?
	// so if integer and within range istore ko ang string in another memory?
	// in that memory i need to check for duplicates
}
