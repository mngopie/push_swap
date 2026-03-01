/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:11:52 by pixel             #+#    #+#             */
/*   Updated: 2026/03/01 08:56:18 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_or_not(int argc, char **argv, int *count)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[i], ' ');
		if (!split || !split[0])
			return (NULL);
		i = 0;
		while (split[i])
			i++;
		*count = i;
		return (split);
	}
	*count = argc - 1;
	return (argv + 1);
}

void	print_stack(t_node *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}

int	is_sorted(t_node **stack_a)
{
	t_node *current;
	
	if (!stack_a || !*stack_a)
		return (1);
	current = *stack_a;
	while (current->next != NULL)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return(1);
}

// int	main(int argc, char **argv)
// {
// 	t_node	*stack_a;
// 	t_node	*stack_b;
// 	char	**args;
// 	int		count;

// 	stack_a = NULL;
// 	stack_b = NULL;
// 	if (argc < 2)
// 		return (1); // argc[1] is ./a.out - return (1) is error
// 	args = split_or_not(argc, argv, &count);
// 	if (!args)
// 		return (write(2, "Error\n", 6), 1);
// 	handle_args(&stack_a, args, count);
// 	if (is_sorted(stack_a)) // is this just a check? or diri ko himuon ang manual sorting for 3, 4, 5 arguments?
// 	{
// 		if (count == 2)
// 			sa_swap(&stack_a); // swap the two nodes
// 		else if (count == 3)
// 			sort_three(&stack_a);
// 		else if (count <= 5)
// 			small_sort(&stack_a);
// 		else
// 			chunk_sort(&stack_a, &stack_b, count);
// 	}
// 	// 	free (split_or_not);
// 	return (0);
// }

void free_stack(t_node **stack)
{
    t_node *tmp;
    while (*stack)
    {
        tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
}

int main(int argc, char **argv)
{
    t_node  *stack_a = NULL;
    char    **args;
    int     count;

    if (argc < 2)
        return (0);

    args = split_or_not(argc, argv, &count);
    if (!args || handle_args(&stack_a, args, count) != 0)
        return (1);

    printf("--- Before sa_swap ---\n");
    print_stack(stack_a);

    // Manually trigger the swap to test it
    printf("\n--- Executing sa_swap ---\n");
    sa_swap(&stack_a);

    printf("\n--- After sa_swap ---\n");
    print_stack(stack_a);

    // Validation Check: Verify Doubly Linked Logic
    if (stack_a && stack_a->next && stack_a->next->prev != stack_a)
        printf("\n[ERROR]: prev pointer of second node is incorrect!\n");
    else
        printf("\n[SUCCESS]: Pointers linked correctly.\n");

    free_stack(&stack_a);
    return (0);
}
