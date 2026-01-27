/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:47:13 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/26 20:06:51 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	start_trim(char const *s1, char const *set, int i, int j)
{
	while (set[j] != '\0')
	{
		while (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

int	end_trim(char const *s1, char const *set, int i, int j)
{
	j = 0;
	while (set[j] != '\0')
	{
		while (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		pos;
	int		nchar;

	nchar = 0;
	i = 0;
	j = 0;
	i = start_trim(s1, set, i, j);
	if (s1[i] == '\0')
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	pos = i;
	while (s1[i] != '\0')
		i++;
	i--;
	i = end_trim(s1, set, i, j);
	nchar = i - pos + 1;
	str = malloc(sizeof(char) * nchar + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[pos], nchar + 1);
	return (str);
}
/*
int	main(void)
{
	char *s1 = "   xxx   xxx";
	char *totrim = " x";
	char *s2;
	//s2 = ft_strtrim(" +- +-+ Hola- aaa   --+ ++", " +-");
	s2 = ft_strtrim("   xxx a xxx   ", " x"); // ESTE EJEMPLO FALLA
	if (s2[0] == ' ')
	printf("CADENA espacio\n");
	if (s2 == NULL)
	printf("CADENA NULL\n");
	printf("[%s]\n", s2);
	free(s2);
	return (0);
}
*/