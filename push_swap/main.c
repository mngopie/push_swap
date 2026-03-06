/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/06 16:34:21 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int argc, char **argv)
// {
// 	t_stack	a;
// 	t_stack	b;
// 	char	**args;

// 	stack(&a); /* initialize */
// 	stack(&b);
// 	if (argc < 2)
// 		return (0);
// 	args = split_or_not(argc, argv);
// 	if (!args)
// 		return (write(1, "Error\n", 6), 1);
// 	if (handle_args(&a, args))
// 		return (cleanup(args, argc, &a, &b),1); /* clean */
// 	assign_index(&a);
// 	if (!is_sorted(&stack_a)) // is this just a check? or diri ko himuon ang manual sorting for 3, 4, 5 arguments?
// 	{
// 		if (count == 2)
// 			sa(&stack_a); // swap the two nodes
// 		else if (count == 3)
// 			sort_three(&stack_a);
// 		else if (count == 4 || count == 5)
// 			tiny_sort(&stack_a, &stack_b);
// 		else
// 			chunk_sort(&stack_a, &stack_b, count);
// 	}
// 	// 	free (stack_a & stack_b);
// 	return (0);
// }


#include "push_swap.h"
#include <stdio.h> // Only for testing! Remove before turning in.

int main(int argc, char **argv)
{
    t_stack a;
    char    **args;

    if (argc < 2)
        return (0);

    // 1. Initialize our Manager
    a.top = NULL;
    a.bottom = NULL;
    a.size = 0;

    // 2. Get the strings
    args = split_or_not(argc, argv);
    if (!args)
        return (1);

    // 3. Check and Fill the Stack
    // We pass &a because it's a pointer to the manager
    if (handle_args(&a, args))
    {
        // If handle_args returns 1, it already printed "Error"
        return (1); 
    }

    // 4. Verification Print (To see if it worked!)
    printf("--- Stack A Contents ---\n");
    t_node *curr = a.top;
    while (curr)
    {
        printf("Value: %d | Index: %d\n", curr->data, curr->index);
        curr = curr->next;
    }
    printf("Total Size: %d\n", a.size);

    return (0);
}
