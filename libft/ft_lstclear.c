/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:01:33 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:19:49 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*array;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		array = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = array;
	}
}
