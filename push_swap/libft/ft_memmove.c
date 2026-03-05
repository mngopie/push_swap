/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:50:16 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:36:24 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s == NULL && d == NULL)
		return (NULL);
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main ()
// {
//     char src[] = "lorem ipum dolor sit a";
//     char dest[] = "home/pjakosal/francinette/temp/libft/war-machine/tests";
// 	char *result;
// 	char ote[] = "aaaaa";

// //     printf("Before %s",dest);
// //    char *a = ft_memmove(&dest, &src, 5);
// //     printf("\nAfter  %s",a);
// 	result = ft_memmove(dest, src, 8);
// 	printf("original: %s\n", result);

//    return(0);
// }