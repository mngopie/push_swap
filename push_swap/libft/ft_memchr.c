/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:29:37 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:36:11 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == cc)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "Finish Libft!";

// 	printf("memchr:    %s\n", (char *)memchr(str, 'L', 12));
//     printf("ft_memchr: %s\n\n", (char *)ft_memchr(str, 'L', 12));
// }