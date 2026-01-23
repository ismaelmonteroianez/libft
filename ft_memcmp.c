/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:33:22 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 16:42:48 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((char *)s1)[i] == ((char *)s2)[i] && i < n)
	{
		i++;
		if (n == i)
			return (0);
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
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