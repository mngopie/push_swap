/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:02:49 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 18:58:26 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main(void)
// {
//     t_list *list = ft_lstnew("one");
//     ft_lstadd_back(&list, ft_lstnew("two"));
//     ft_lstadd_back(&list, ft_lstnew("three"));

//     ft_lstiter(list, print_node);

//     return 0;
// }