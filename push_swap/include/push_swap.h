/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:09:31 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/08 17:41:32 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "../libft/libft.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	struct s_node	*top;
	struct s_node	*bottom;
	int				size;
} t_stack;

/* parsing */
int		handle_args(t_stack *a, char **args);
long	ft_atol(const char *nptr);
int		integer(char *str);
int		dups(t_stack *a, int arg);

/* commands */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

/* sorting */
void	sort_three(t_stack *stack);
void	tiny_sort(t_stack *a, t_stack *b);
void	algorithm();

/* utils */
int		is_sorted(t_stack *a);
char	**split_or_not(int argc, char **argv);
t_node	*min(t_node *stack);
void	cleanup(char **args, int argc, t_stack *a, t_stack *b);
void	assign_index(t_stack *a);
void	free_stack(t_stack *stack);
void	free_split(char **args);
void	stack(t_stack **stack);

# endif