/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:16:57 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:21:11 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	l;

	i = 0;
	k = 0;
	l = ft_strlen(src);
	if (n == 0)
		return (l);
	while (dest[i] != '\0' && i < n)
		i++;
	while (i + k < n - 1 && src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	if (i < n)
		dest[i + k] = '\0';
	return (i + l);
}
