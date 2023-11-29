/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:40:18 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 18:43:30 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_pos(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putnbr_pos(n / 10);
		len += ft_putnbr_pos(n % 10);
	}
	else if (n <= 9 && n >= 0)
	{
		len += ft_putchar(n + '0');
	}
	return (len);
}
