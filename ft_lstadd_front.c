/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:06:33 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:24:51 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
}
/*
int	main(void)
{
	t_list	**lst;
	t_list	*old;
	t_list	*new;
	char	a[] = "Adios";
	char	b[] = "Buenas";

	old = ft_lstnew(a);
	new = ft_lstnew(b);
	lst[0] = old;
	ft_lstadd_front(lst, new);
	return (0);
}
*/
// *lst y lst[0] es lo mismo 