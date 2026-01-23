/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:09:16 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:20:31 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_print_min(int n, char *str)
{
	int	i;

	i = 11;
	str[i] = '\0';
	i--;
	while (i > 0)
	{
		str[i] = (-1 * (n % 10)) + 48;
		n = n / 10;
		i--;
	}
	str[i] = '-';
	return (str);
}

char	ft_count_n(int n)
{
	int	nchar;

	nchar = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nchar++;
	}
	while (n != 0)
	{
		n = n / 10;
		nchar++;
	}
	return (nchar);
}

char	*ft_cpy(int n, char *str, int nchar)
{
	str[nchar] = '\0';
	nchar--;
	while (n >= 10)
	{
		str[nchar] = n % 10 + 48;
		n = n / 10;
		nchar--;
	}
	if (n < 10)
	{
		str[nchar] = n + 48;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nchar;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		if (str == NULL)
			return (NULL);
		ft_print_min(n, str);
		return (str);
	}
	nchar = ft_count_n(n);
	str = malloc(sizeof(char) * nchar + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
		i++;
	}
	ft_cpy(n, str, nchar);
	return (str);
}
/*
int	main(void)
{
	int		n;
	char	*result;

	n = -2147483648;
	//printf("%d", ft_count_n(n));
	result = ft_itoa(n);
	printf("%s", result);
	free(result);
	return (0);
}
*/