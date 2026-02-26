/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:08:35 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 18:58:23 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}

// int main(void)
// {
//     t_list *list = ft_lstnew(strdup("one"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("two")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("three")));

//     ft_lstclear(&list, del);

//     if (list == NULL)
//         printf("List cleared.\n");

//     return 0;
// }