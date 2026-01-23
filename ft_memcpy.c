/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:10:54 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/19 15:13:37 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)src;
	s2 = dest;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);

}

// int	main(void)
// {
// 	char	src[6] = "Holaa";
// 	char	dest[6] = "Adios";
// 	size_t		n = 4;


// 	ft_memcpy (dest, src, n);
// 	printf ("%s", dest);
// }