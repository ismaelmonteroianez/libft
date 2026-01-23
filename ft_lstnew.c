/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:44:24 by ismonter          #+#    #+#             */
/*   Updated: 2026/01/23 13:33:33 by ismonter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list *));
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
int	main(void)
{
	char	str[] = "Holadiosmuybuenas";
	t_list	*lst;
	
	lst = ft_lstnew(str);
	return (0);
	
}
*/
