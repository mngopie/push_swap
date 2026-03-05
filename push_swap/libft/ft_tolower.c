/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:08:16 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 17:19:49 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int main(void)
// {
//     char c1 = 'a';
//     char c2 = 'Z';
//     char c3 = '5';

//     printf("Before: %c -> After: %c\n", c1, ft_tolower(c1));
//     printf("Before: %c -> After: %c\n", c2, ft_tolower(c2));
//     printf("Before: %c -> After: %c\n", c3, ft_tolower(c3));

//     return 0;
// }