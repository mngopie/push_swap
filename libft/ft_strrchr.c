/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:21:16 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:12:54 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (s[i])
		i++;
	if (cc == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
//     char *large = "hhhahhh ta!";
//     char *prt = ft_strrchr(large, 'a');
//     printf("%s", prt);
//     return (0);
// }