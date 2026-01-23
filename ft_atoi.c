/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:13:19 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/20 12:07:03 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	negative;

	i = 0;
	n = 0;
	negative = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9
			&& nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = negative * -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		n = n * 10;
		n = n + nptr[i] - 48;
		i++;
	}
	n = n * negative;
	return (n);
}
/*
int	main(void)
{
	char	s[] = "      -1234546";

	printf("%d\n", atoi(s));
	printf("%d\n", ft_atoi(s));
	return (0);
}
*/