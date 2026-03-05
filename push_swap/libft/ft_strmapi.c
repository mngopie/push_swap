/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:52:47 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:23:24 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;
	int		length;

	i = 0;
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	new_s = malloc(sizeof(char) * (length + 1));
	if (new_s == NULL)
		return (NULL);
	while (i < length)
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_s[i] = '\0', new_s);
}

// char f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + 1;
// 	return (str);
// }

// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }

// static char ft_toupper(unsigned int i, char c)
// {
// 	if (c >= 97 && c <= 122)
// 		return (c - 32);
// 	return (c);
// }

// int main()
// {
// 	unsigned int i;
// 	char c;
// 	char *s;
// 	char *function;

// 	i = 0;
// 	s = "why";
// 	function = ft_strmapi(s, *ft_toupper);
// 	printf("%s\n", function);
// }
