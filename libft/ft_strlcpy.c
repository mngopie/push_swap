/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:09:19 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:16:46 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t  ft_strlen(const char *s)
// {
//     size_t i;

//     i = 0;
//     while (s[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(src);
	if (size == 0)
		return (count);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}

// int main()
// {
// 	char src[] = "string string string";
// 	char dest[] = "";
// 	unsigned int size;

// 	size = ft_strlcpy(dest, src, size);

// 	printf("After\nSource: %s\nDestination: %s\n Size: %d \n", src, dest,n);

// 	return (0);
// }
