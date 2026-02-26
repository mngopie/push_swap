/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:30:41 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:24:06 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// static char ft_toupper(unsigned int i, char *c)
// {
// 	if (*c >= 97 && *c <= 122)
// 		return (*c - 32);
// 	return (*c);
// }

// int main()
// {

// 	char	s[]="abcdefg";
//     char    *function;
//     ft_striteri(s, *ft_toupper);
//     function = ft_striteri(s, *ft_toupper);
// 	printf("%s\n", function);
// }