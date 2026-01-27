/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:50:07 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/26 20:05:12 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_aux;

	while (lst[0] != NULL)
	{
		lst_aux = lst[0]->next;
		del(lst[0]->content);
		free(lst[0]);
		lst[0] = lst_aux;
	}
}
/*
ft_delete_all(void *lst)
{
	int	i;
	
	i = 0;
	while (((char *)lst)[i] != '\0')
	{
		free(((char *)lst)[i]);
		i++;
	} 
	return ;
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

	lst1 = ft_lstnew(a);
	lst2 = ft_lstnew(b);
	lst3 = ft_lstnew(c);
	lst4 = ft_lstnew(d);
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	ft_lstclear(lst1, (ft_delete_all));	
}
*/