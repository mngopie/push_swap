/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:12:57 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:13:20 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_i;
	size_t	l_i;

	if (*little == '\0')
		return ((char *)big);
	b_i = 0;
	while (b_i < len && big[b_i])
	{
		l_i = 0;
		while ((b_i + l_i) < len && big[b_i + l_i] == little[l_i])
		{
			if (little[l_i + 1] == '\0')
				return ((char *)&big[b_i]);
			l_i++;
		}
		b_i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *big = "My day is shit";
//     const char *small = "is";
//     size_t n = 14;
//     char *result_ft = ft_strnstr(big, small, n);
// 	printf("%s\n", result_ft);
// }