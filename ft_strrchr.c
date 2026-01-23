/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:44:13 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:32:28 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i] != '\0')
		i++;
	if (s[i] == cc)
		return ((char *)&s[i]);
	while (s[i] != s[0])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Holadios";
	char	c; 

	c = '\0';
	printf("%s", ft_strrchr(str, c));
}
*/