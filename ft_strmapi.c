/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:26:48 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/21 16:44:31 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	while(s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
char	ft_loquesea(unsigned int n, char c)
{	
	if(n)
		return (ft_tolower(c));
	return (ft_tolower(c));
}

int	main(void)
{
	char	*str = "aAssASFwScFUDHei";
	printf("%s", ft_strmapi (str, ft_loquesea));
	return (0);
}
*/