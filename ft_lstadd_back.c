/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:35:15 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/29 13:34:04 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_aux;

	if (lst == NULL || new == NULL)
		return ;
	lst_aux = lst[0];
	if (lst_aux != NULL)
	{
		while (lst_aux->next != NULL)
		{
			lst_aux = lst_aux->next;
		}
		lst_aux->next = new;
	}
	else
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

	lst = malloc(sizeof(t_list));
	old = ft_lstnew(a);
	new = ft_lstnew(b);
	lst[0] = old;
	ft_lstadd_back(lst, new);
	while(lst[0] != NULL)
	{
		printf("%s", (char *)lst[0]->content);
		lst[0] = lst[0]->next;
	}
	return (0);
}
*/