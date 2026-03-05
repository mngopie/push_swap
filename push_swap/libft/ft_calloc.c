/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:53:00 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:31:58 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	size_t	i;
	char	*ptr;

	total = nmemb * size;
	ptr = malloc(total);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
