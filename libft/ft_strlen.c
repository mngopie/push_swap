/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:24:57 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 17:25:52 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
//     char *str1 = "Nobody";
//     char *str2 = "";
//     char *str3 = "Naaaa uuuur";

//     printf("Length of \"%s\" = %zu\n", str1, ft_strlen(str1));
//     printf("Length of \"%s\" = %zu\n", str2, ft_strlen(str2));
//     printf("Length of \"%s\" = %zu\n", str3, ft_strlen(str3));
// // %zu is for printing unsigned integer type.
//     return 0;
// }