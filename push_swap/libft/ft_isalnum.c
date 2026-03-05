/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:09:58 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:32:04 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int main()
// {
//     char i = '&';

//     if (ft_isalnum(i))
//         printf("%c is Alphanumeric\n", i);
//     else
//         printf("%c is not Alphanumeric\n", i);
// }