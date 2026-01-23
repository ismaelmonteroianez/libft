/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:23:16 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 17:57:18 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	val;

	i = 0;
	p = s;
	val = (char)c;
	while (i < n)
	{
		p[i] = val;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	size_t	n;
	int		c;

	int		array[3] = {511, 0, -1}; //511 - 00000000 00000000 00000001 11111111
	//char	s[10] = "holookkk";

	c = 0;
	n = 1;
	printf("antes: %d", array[0]);
	ft_memset(array, c, n);
	printf("despues: %d", array[0]);
	return (0);
}
*/

