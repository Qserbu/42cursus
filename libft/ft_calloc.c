/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:42:50 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 16:51:58 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	char	*src;

	if (!c || !s)
		return (malloc(0));
	if ((int)c < 0 || (int)s < 0 || 2147483647 / c < s)
		return (0);
	src = (void *) malloc(c * s);
	if (!src)
		return (0);
	ft_bzero(src, c * s);
	return (src);
}
