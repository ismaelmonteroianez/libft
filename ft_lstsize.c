/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:17:11 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 19:41:25 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	nbrnodes;

	nbrnodes = 0;
	while (lst != NULL)
	{
		lst = lst->next; //PUNTERO QUE APUNTA A LA SIGUIENTE EN LA LISTA
		nbrnodes++;
	}
	return (nbrnodes);
}

int	main(void)
{
	char	a[] = "Esto";
	char	b[] = "es";
	char	c[] = "una";
	char	d[] = "cadena";
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;
	int		nbrnodes;

	lst1 = ft_lstnew(a);
	lst2 = ft_lstnew(b);
	lst3 = ft_lstnew(c);
	lst4 = ft_lstnew(d);
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;

	nbrnodes = ft_lstsize(lst1);
	printf("%d", nbrnodes);
	return (0);
}
