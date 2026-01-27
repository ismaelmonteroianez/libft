/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:45:16 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/27 17:26:26 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	substr = malloc(sizeof (char) * len + 1);
	if (substr == NULL)
		return (NULL);
	while (len > i)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char			*str = "Hola que tal jeje";
	unsigned int	start = 5;
	size_t len = 100;

	printf("%s", ft_substr(str, start, len));
	return (0);
}
*/
