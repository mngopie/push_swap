/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:57:26 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:36:28 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*a = (unsigned char)c;
		a++;
		i++;
	}
	return (s);
}

// int main ()
// {
//    char str[20];

//    strcpy(str, "Happy to be here.");

//    ft_memset(str, 'k', 7);
//    printf("%s\n", str);

//    return(0);
// }