/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:17:40 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:27:36 by ismonter         ###   ########.fr       */
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
		dst[j] = src[j];
		j++;
		if (j >= size - 1)
		{
			dst[j] = '\0';
			return (i);
		}
	}
	dst[j] = '\0';
	return (i);
}

/* int	main(void)
{
	char	src[] = "Holaaa";
	char	dst[] = "Adios";
	size_t	size;

	size = 20;
	//printf("%zu\n", strlcpy(dst, src, 0));
	printf("%zu", ft_strlcpy(dst, src, size));
	printf("%s", dst);
	return(0);
}
*/