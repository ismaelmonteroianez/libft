/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:45:16 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 17:59:23 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int	start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	substr = malloc(len);
	if(substr == NULL)
		return (NULL);
	while(len > i)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
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
