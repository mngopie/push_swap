/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:32:01 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 18:58:24 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
//     char *str = malloc(6);
//     strcpy(str, "hello");

//     t_list *node = ft_lstnew(str);

//     ft_lstdelone(node, del);

//     // Can't print: node is freed.
//     printf("Node deleted.\n");

//     return 0;
// }