/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 20:39:17 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/12 21:48:34 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*modified_list;
	t_list	*modified_list_cpy;

	if (!f || !del || !lst)
		return (NULL);
	modified_list = ft_lstnew(f(lst->content));
	if (!modified_list)
		return (NULL);
	modified_list_cpy = modified_list;
	lst = lst->next;
	while (lst)
	{
		modified_list->next = ft_lstnew(f(lst->content));
		if (!modified_list->next)
		{
			ft_lstclear(&modified_list_cpy, del);
			return (NULL);
		}
		modified_list = modified_list->next;
		lst = lst->next;
	}
	return (modified_list_cpy);
}
