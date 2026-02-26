/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:20:04 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:23:47 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_s1;
	size_t	length_s2;
	char	*new_s;
	int		i;
	int		j;

	length_s1 = 0;
	length_s2 = 0;
	if (!s1 && !s2)
		return (NULL);
	while (s1[length_s1] != '\0')
		length_s1++;
	while (s2[length_s2] != '\0')
		length_s2++;
	new_s = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		new_s[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		new_s[j++] = s2[i++];
	return (new_s[j] = '\0', new_s);
}

// int	main(void)
// {
// 	char *hi_s = "HELLO";
// 	char *old_s = "world";
// 	printf("%s\n", ft_strjoin(hi_s, old_s));
// 	return(0);
// }