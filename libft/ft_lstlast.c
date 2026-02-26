/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:33:12 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 19:04:10 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
//     t_list *list = ft_lstnew("one");
//     ft_lstadd_back(&list, ft_lstnew("two"));
//     ft_lstadd_back(&list, ft_lstnew("three"));

//     t_list *last = ft_lstlast(list);

//     printf("Last: %s\n", (char *)last->content);
//     return 0;
// }