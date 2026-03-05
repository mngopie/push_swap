/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:08:54 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:12:40 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setchecker(int c, char const *set) // ft_strchr
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	new_slength;
	size_t	i;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_setchecker(s1[start], set))
		start++;
	while (end > start && ft_setchecker(s1[end - 1], set))
		end--;
	new_slength = end - start;
	new_s = malloc(sizeof(char) * (new_slength + 1));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < new_slength)
	{
		new_s[i] = s1[start + i];
		i++;
	}
	return (new_s[i] = '\0', new_s);
}

// int main(void)
// {
// 	char const *s1 = "xxxxHELLOxxxx";
// 	char const *set = "x";
// 	int		any;

// 	ft_strtrim(s1, set);
// 	printf("%s\n", ft_strtrim(s1, set));

// 	// any = ft_strtrim(s1, set);
// 	// printf("%d\n", any);
// }
