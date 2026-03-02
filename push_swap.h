/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:09:31 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/01 17:46:56 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

// Parsing
int	handle_args(t_node **stack_a, char **args, int count);
void	valued_to_stack(t_node **stack_a, long *vlaues, int count);
long	ft_atol(const char *nptr);
int	integer(char *str);
int	dups(long *numbers, int vcount);
char	**split_or_not(int argc, char **argv, int *count);

// Commands
void	sa_swap(t_node **stack_a);

// Checks
void	print_stack(t_node *stack);
int	is_sorted(t_node **stack_a);

# endif