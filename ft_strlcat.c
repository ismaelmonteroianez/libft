/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:19:28 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/29 15:52:49 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_src;

	i = 0;
	j = 0;
	size_src = ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	if (size > i)
	{
		while (src[j] != '\0' && size - 1 > i + j)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	else
		return (size_src + size);
	dst[i + j] = '\0';
	return (i + size_src);
}
/*
int	main(void)
{
	char	or_src[] = "Hola";
	char	or_dst[] = "Adios";
	char	is_src[] = "Hola";
	char	is_dst[] = "Adios";
	size_t	size;

	size = 8;
	printf("%zu\n", strlcat(or_dst, or_src, size));
	printf("%zu\n", ft_strlcat(is_dst, is_src, size));
	printf("Original: %s\n", or_dst);
	printf("Ismael: %s\n", is_dst);
	return(0);
}
*/