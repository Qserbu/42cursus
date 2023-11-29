/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:51 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/14 14:44:45 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*dest2;
	const char			*src2;
	unsigned int		i;

	dest2 = dest;
	src2 = src;
	i = (unsigned int)n;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (i--)
			dest2[i] = src2[i];
	}
	else
	{
		i = 0;
		while (i < (unsigned int)n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest2);
}
