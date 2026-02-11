/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel <pixel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:30:58 by pjakosal          #+#    #+#             */
/*   Updated: 2026/02/11 12:36:05 by pixel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int num;
	int sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 8 && nptr[i] <= 13))
	{
		i++;
		if (nptr[i] == '\0')
			return (0);
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != '\0')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}

int main(int argc, char **argv)
{
	int i;
	int num;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		printf("Num: [%d]\n", num);
		i++;
	}
	return (0);
}
