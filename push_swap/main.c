/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/09 16:39:34 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack *stack, char name)
{
    t_node *curr;

    printf("Stack %c (size %d):\n", name, stack->size);
    curr = stack->top;
    while (curr)
    {
        printf("Data: %d | Index: %d\n", curr->data, curr->index);
        curr = curr->next;
    }
    printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	**args;

	stack(&a); /* initialize */
	stack(&b);
	if (argc < 2)
		return (0);
	args = split_or_not(argc, argv);
	if (!args)
		return (write(1, "Error\n", 6), 1);
	if (handle_args(&a, args))
		return (cleanup(args, argc, &a, &b), 1);
	assign_index(&a);
	if (!is_sorted(&a)) 
		sort_control(&a, &b);
	print_stack(&a, 'A');
	print_stack(&b, 'B');
	cleanup(args, argc, &a, &b);
	return (0);
}

// #include <stdio.h>
// #include "push_swap.h"



// int main(int argc, char **argv)
// {
//     t_stack a;
//     t_stack b;
//     char **args;

//     if (argc < 2)
//         return (0);

//     // Initialize stacks
//     a.top = NULL;
//     a.bottom = NULL;
//     a.size = 0;

//     b.top = NULL;
//     b.bottom = NULL;
//     b.size = 0;

//     // Parse arguments
//     args = split_or_not(argc, argv);
//     if (!args)
//         return (1);

//     if (handle_args(&a, args))
//         return (1);

//     // Assign indices
//     assign_index(&a);

//     printf("---- BEFORE SORT ----\n");
//     print_stack(&a, 'A');
//     print_stack(&b, 'B');

//     // Run tiny sort
//     if (a.size <= 5)
//         tiny_sort(&a, &b);

//     printf("---- AFTER SORT ----\n");
//     print_stack(&a, 'A');
//     print_stack(&b, 'B');

//     return (0);
// }
