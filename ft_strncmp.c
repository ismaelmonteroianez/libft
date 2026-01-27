/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:26:15 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/26 20:05:50 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && n > i && s1[i] && s2[i])
	{
		i++;
		if (n == i)
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	const char	s1[] = "aaa\0\0\0";
	const char	s2[] = "aaa\0abc";
	size_t	n = 12;

	printf("Ismael: %d\n", ft_strncmp(s1, s2, n));
	printf("Original: %d", strncmp(s1, s2, n));
}
*/