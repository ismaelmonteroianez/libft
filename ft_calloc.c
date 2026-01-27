/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:45:59 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/27 12:41:57 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (nmemb * size > 2147483647)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	while (((char *)result)[i] != '\0')
	{
		((char *)result)[i] = '\0';
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	size_t size = 4;
	size_t	nmemb = 1;
	char *str;

	str = ft_calloc(nmemb, size);
	//str = malloc(10);
	//str[1] = 'c';
	//printf("%s", str);
	free(str);
	// printf("%d", sizeof(int));
	return (0);
}
*/