/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:25:25 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 16:26:51 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_base(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0 && n > -2147483648)
	{
		n = n * -1;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		len += ft_putnbr_base(n / 10);
		len += ft_putnbr_base(n % 10);
	}
	else if (n <= 9 && n >= 0)
	{
		len += ft_putchar(n + '0');
	}
	return (len);
}
