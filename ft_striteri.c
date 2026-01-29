/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:28:47 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/29 15:52:33 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
	return ;
}
/*
void	ft_loquesea(unsigned int n, char *c)
{
	if(n)
		ft_tolower(c);
	ft_tolower(c);
}

int	main(void)
{
	char	str[] = "aAssASFwScFUDHei";
	ft_striteri(str, ft_loquesea);
	printf("%s", str);
	return (0);
}
*/