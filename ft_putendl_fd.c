/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:56:32 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:22:51 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int	fd;
	
	fd = open("prueba.txt", O_WRONLY);
	ft_putendl_fd("HeeelloowaaAA!", fd);
	close(fd);
	return (0);
}
*/
