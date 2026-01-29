/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:14:47 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/29 15:49:14 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		a = n % 10 + 48;
		write(fd, &a, 1);
		return ;
	}
	a = n + 48;
	write(fd, &a, 1);
}
/*
int	main(void)
{
	int	n = -745795;
	int	fd;

	fd = open("prueba.txt", O_WRONLY);
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}
*/