/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:36 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/29 14:22:51 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*del_first_node(t_list *new_content, void (*del)(void *))
{
	del(new_content);
	return (NULL);
}

static void	*del_list(t_list *new_content, t_list *start_lst,
	void (*del)(void *))
{
	del(new_content);
	ft_lstclear(&start_lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;
	t_list	*start_lst;

	if (lst == NULL)
		return (NULL);
	new_content = f(lst->content);
	new_lst = ft_lstnew(new_content);
	if (new_lst == NULL)
		return (del_first_node(new_content, del));
	start_lst = new_lst;
	lst = lst->next;
	new_lst = new_lst->next;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (new_lst == NULL)
			return (del_list(new_content, start_lst, del));
		lst = lst->next;
		ft_lstadd_back(&start_lst, new_lst);
	}
	return (start_lst);
}
