/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:20:41 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:17:21 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int main(void)
// {
//     const char *str = "Finish Libft!";

//     // Test 1: character exists
//     char ch = 'n';
//     printf("Test 1: searching '%c'\n", ch);
//     printf("strchr:    %s\n", strchr(str, ch));
//     printf("ft_strchr: %s\n\n", ft_strchr(str, ch));

//     // Test 2: character does not exist
//     ch = 'x';
//     printf("Test 2: searching '%c'\n", ch);
//     printf("strchr:    %p\n", strchr(str, ch));
//     printf("ft_strchr: %p\n\n", ft_strchr(str, ch));

//     // Test 3: searching for '\0'
//     ch = '\0';
//     printf("Test 3: searching '\\0'\n");
//     printf("strchr:    %s\n", strchr(str, ch));
//     printf("ft_strchr: %s\n\n", ft_strchr(str, ch));

//     return (0);
// }
