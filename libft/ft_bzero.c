/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:06:51 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:31:22 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*(ptr++) = '\0';
		n--;
	}
}

// int main()
// {
//   char s1[] = "noNOnoNO";
//   char s2[] = "noNOnoNO";

// printf("Before:\n");
// printf("str1: %s\n", s1);
// printf("str2: %s\n", s2);

// // Zero first 5 bytes
// bzero(s1, 5);
// ft_bzero(s2, 5);

// // After bzero
// printf("\nAfter bzero 5 bytes:\n");
// printf("str1: %s\n", s1);
// printf("str2: %s\n", s2);

// return (0);
// }