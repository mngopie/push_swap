/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:56:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 16:46:04 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_or_not(int argc, char **argv)
{
	char	**split;

	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (!split || !split[0])
			return (NULL);
		return (split);
	}
	return (argv + 1);
}

int	is_sorted(t_stack *a)
{
	t_node	*current;

	if (!a || a->size < 2)
		return (1);
	current = a->top;
	while (current->next)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return (1);
}
