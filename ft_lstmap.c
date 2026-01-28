/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:36 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/28 17:41:34 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;
	t_list	*start_lst;

	if (lst == NULL)
		return (NULL);
	new_content = f(lst->content);
	new_lst = ft_lstnew(new_content);
	if (new_lst == NULL || new_content == NULL)
	{
		del(new_content);
		free(new_content);
	}
	start_lst = new_lst;
	lst = lst->next;
	new_lst = new_lst->next;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (new_lst == NULL || new_content == NULL)
		{
			ft_lstclear(&start_lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&start_lst, new_lst);
	}
	return (start_lst);
}
/*
int	main(void)
{



}
*/