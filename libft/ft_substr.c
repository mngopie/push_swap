/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:31:07 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:08:34 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	size_t	i;
	char	*new_s;

	s_length = 0;
	if (!s)
		return (NULL);
	while (s[s_length])
		s_length++;
	if (start >= s_length)
		return (ft_strdup(""));
	if (len > s_length - start)
		len = s_length - start;
	new_s = malloc(sizeof(char) * (len + 1));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// int main(void)
// {
// 	char *s = "Hello there!";
// 	char *new_s;

// 	new_s = ft_substr(s, 3, 6);
// 	printf("%s\n", new_s);
// 	free(new_s);

// 	return(0);
// }