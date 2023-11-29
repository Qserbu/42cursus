/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:22:03 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:20:00 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*array;
	t_list	*lst2;

	if (!f || !del || !lst)
		return (NULL);
	lst2 = NULL;
	while (lst != NULL)
	{
		array = ft_lstnew((*f)(lst->content));
		if (array == NULL)
		{
			(*del)(array);
			ft_lstclear(&lst2, (*del));
			return (NULL);
		}
		ft_lstadd_back(&lst2, array);
		lst = lst->next;
	}
	return (lst2);
}
