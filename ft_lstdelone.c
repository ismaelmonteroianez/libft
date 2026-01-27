/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:18:06 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/26 20:05:22 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	ft_delete(void *lst)
{	
	int	i;
	
	i = 0;
	while(((char *)lst)[i] != '\0')
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
	ft_lstdelone(lst1, (ft_delete));
}
*/