/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:39:51 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 18:58:19 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

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

// int main(void)
// {
//     t_list *list = ft_lstnew("hello");
//     t_list *node = ft_lstnew("world");

//     ft_lstadd_back(&list, node);

//     printf("%s %s\n", (char *)list->content, (char *)list->next->content);
//     return 0;
// }