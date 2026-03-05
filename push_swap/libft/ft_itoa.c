/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:39:22 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/27 12:35:14 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*conversion(char *result, int length, int number, int n)
{
	result[length] = '\0';
	number = n;
	if (number < 0)
		number = -number;
	while (number > 0)
	{
		result[length - 1] = number % 10 + '0';
		number = number / 10;
		length--;
	}
	number = n;
	if (number < 0)
		result[length - 1] = '-';
	return (result);
}

static int	get_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		number;
	int		length;
	char	*result;

	length = get_length(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = n;
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	conversion(result, length, number, n);
	return (result);
}

// int main(void)
// {
// 	// int number;

// 	// number = 454545;
// 	// ft_itoa(number);
// 	// // printf("%d\n", number);
// 	int num = 454;
// 	char *str = ft_itoa(num);
// 	printf("int %d\nstr %s\n", num, str);
// 	return (0);
// }
