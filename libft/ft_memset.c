/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:57:40 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:20:25 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int v, size_t c)
{
	unsigned int	i;
	unsigned char	*tab;

	i = 0;
	tab = (unsigned char *)p;
	while (i < c)
	{
		tab[i] = v;
		i++;
	}
	return ((unsigned char *)p);
}
