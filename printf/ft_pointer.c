/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:26:45 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 18:47:04 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

unsigned int	ft_pointer(void *ptr)
{
	unsigned int	len;
	unsigned int	nbr;

	len = 0;
	nbr = (unsigned long)ptr;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (len + 5);
	}
	len = ft_putnbr_hexa(nbr);
	return (len);
}
