/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:44:13 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/27 16:19:48 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	//char	str[] = "Holadios";
	char	str[] = "cpepe y parlos";
	char	c;

	c = 'c';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s", strrchr(str, c));

	return (0);
}
*/