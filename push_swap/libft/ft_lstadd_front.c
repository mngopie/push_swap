/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:34:43 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 18:58:21 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *list = ft_lstnew("world");
//     t_list *new  = ft_lstnew("hello");

//     ft_lstadd_front(&list, new);

//     printf("%s %s\n", (char *)list->content, (char *)list->next->content);
//     return 0;
// }