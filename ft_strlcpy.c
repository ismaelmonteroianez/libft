/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:17:40 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/27 15:55:46 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[j] != '\0')
	{
		if (j >= size - 1)
		{
			dst[j] = '\0';
			return (i);
		}
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
/*
int	main(void)
{
	//char	src[] = "Holaaa";
	//char	dst[] = "Adios";
	size_t	size;

	char src[] = "coucou";
	char dst[10] = "AAAAAAAAAA";
	
	char src_or[] = "coucou";
	char dst_or[10] = "AAAAAAAAAA";
	size = 1;
	printf("%zu\n", strlcpy(dst_or, src_or, size));
	printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("Original: %s\n", dst_or);
	printf("Ismael: %s\n", dst);
	
	return(0);
}
*/