/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:47:13 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 16:36:13 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(const char *s1, char const *set)
{
	char		*str;
	int		i;
	int		j;
	int		pos;
	int 	nchar = 0;

	i = 0;
	j = 0;

	while(set[j] != '\0')
	{
		while (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
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
	j = 0;
	while(set[j] != '\0')
	{
		while (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	nchar = i - pos + 1;
	str = malloc(sizeof(char) * nchar + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[pos], nchar + 1);
	return (str);
	// STRLEN
	// Primer bucle derecha izquierda > devuelve una posicion 
	// if posicion <= strlen  > while de izquierda a derecha hasta posicion. 

	// hacer tu operacion matematica y el malloc correspondiente.
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


