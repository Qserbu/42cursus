/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:54:58 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:19:34 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*array;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	array = *lst;
	if (new)
	{
		while (array->next != NULL)
			array = array->next;
		array->next = new;
	}
}
