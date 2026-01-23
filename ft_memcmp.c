/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:33:22 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 17:56:26 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(((char *)s1)[i] == ((char *)s2)[i] && i < n)
	{
		if(n == i)
			return (0);
		i++;
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
/*
int	main(void)
{
	char	s1[] = "aac";
	char	s2[] = "aab";
	size_t		n = 5;

	printf("%d", ft_memcmp(s1, s2, n));
	return (0);
}
*/