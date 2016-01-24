/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:37:52 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 08:32:34 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *beginlist;
	t_list *temp;

	if (lst && (*f))
	{
		temp = (*f)(lst);
		beginlist = ft_lstnew(temp->content, temp->content_size);
		list = beginlist;
		lst = lst->next;
		while (lst)
		{
			temp = (*f)(lst);
			list->next = ft_lstnew(temp->content, temp->content_size);
			list = list->next;
			if (!list)
				return (NULL);
			lst = lst->next;
		}
		return (beginlist);
	}
	return (NULL);
}
