/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:08:04 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 17:19:08 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// int main(void)
// {
//     char c1 = 'a';
//     char c2 = 'Z';
//     char c3 = '5';

//     printf("Before: %c -> After: %c\n", c1, ft_toupper(c1));
//     printf("Before: %c -> After: %c\n", c2, ft_toupper(c2));
//     printf("Before: %c -> After: %c\n", c3, ft_toupper(c3));

//     return 0;
// }