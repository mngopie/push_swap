/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:09:50 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:24:30 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*new_s;
	int		i;

	length = 0;
	while (s[length] != '\0')
		length++;
	new_s = malloc(length + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
// int main(void)
// {
//     char *src = "NONOnoNO!";
//     char *dup = ft_strdup(src);

//     if (!dup)
//     {
//         printf("ft_strdup returned NULL\n");
//         return (1);
//     }

//     printf("Original: %s\n", src);
//     printf("Duplicate: %s\n", dup);

//     free(dup);

//     // Test with empty string
//     char *empty = ft_strdup("");
//     printf("Empty: '%s'\n", empty);
//     free(empty);

//     return (0);
// }
