/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:26:15 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 17:58:56 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;
	while (s1[i] == s2[i] && n > i)
	{
		i++;
		if (n == i)
			return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	const char	s1[] = "aab";
	const char	s2[] = "aac";
	size_t	n = 4;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}
*/