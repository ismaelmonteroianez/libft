/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:17:37 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 17:57:58 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{	
	write(fd, s, ft_strlen(s));	
}
/*
int	main(void)
{
	int fd = open("prueba.txt", O_WRONLY);
	ft_putstr_fd("holamuybuenastardes", fd);
	close(fd);
	return (0);
}
*/