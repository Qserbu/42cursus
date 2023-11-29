/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:44:37 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/08 21:31:31 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*s2;
	unsigned char	*d2;

	i = 0;
	s2 = (unsigned char *)src;
	d2 = (unsigned char *)dest;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		d2[i] = s2[i];
		i++;
	}
	return (d2);
}
