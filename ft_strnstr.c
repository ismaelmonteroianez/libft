/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:48:32 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 17:01:35 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > i)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && len > (i + j))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	//char	to_find[12] = "hola";
	//char	to_look[20] = "jJkholdnholawp";
	size_t		n = 0;

	char	empty[] = "";
	char	empty2[] = "abc";
	
	//printf("%s\n", ft_strnstr(to_look, to_find, n));
	//printf("%s", strnstr(to_look, to_find, n));
	printf("%s\n", ft_strnstr(empty, empty2, n));
	printf("%s\n", strnstr(empty, empty2, n));
	return (0);
}
*/

