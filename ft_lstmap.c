/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:48:08 by dabae             #+#    #+#             */
/*   Updated: 2023/10/06 14:11:05 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;	
	t_list	*new_elem;

	if (lst && f && del)
	{
		new_lst = NULL;
		new_elem = ft_lstnew(f(lst->content));
		while (lst)
		{
			if (!new_elem)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, new_elem);
			lst = lst->next;
		}
		return (new_lst);
	}
	return (NULL);
}
