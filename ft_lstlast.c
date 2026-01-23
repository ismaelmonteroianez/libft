/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:24:48 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/22 20:06:05 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		return (NULL);
	while(lst->next != NULL)
	{
		lst = lst->next;
	}
	return(lst);
}

/*
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

	t_list 	*last;

	lst1 = ft_lstnew(a);
	lst2 = ft_lstnew(b);
	lst3 = ft_lstnew(c);
	lst4 = ft_lstnew(d);
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;

	last = ft_lstlast(lst1);
	printf("%s", (char *)last->content);
	return (0);
}
*/