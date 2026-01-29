/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:44:59 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/29 15:52:07 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (cc == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	str[12] = "Alberto";
	char	c;
	
	c = 't';
	char *frase = ft_strchr(str, c);
	printf("%s", frase);
	return (0);
}
*/
