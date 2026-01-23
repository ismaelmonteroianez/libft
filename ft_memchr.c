/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:28:09 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:01:05 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*p;
	unsigned char		val;

	i = 0;
	p = (unsigned char *)s;
	val = (unsigned char)c;
	while (p[i] != '\0' && i < n)
	{
		if (p[i] == val)
			return ((char *)&p[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	n;
	int		c;

	const char	s[11] = "JoseCarlos";
	//int		array[3] = {255, 0, 255};

	c = 's'; //  0000 0000   0000 0000     0000 0000    0011 0010  1111 1111
	n = 4;

	printf("%s", (char *)ft_memchr(s, c, n));
}
*/