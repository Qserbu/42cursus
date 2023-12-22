/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_library.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 20:41:36 by qserbu            #+#    #+#             */
/*   Updated: 2023/12/22 21:06:30 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_base(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += write(1, "-2147483648", 11);
	}
	if (n < 0 && n > -2147483648)
	{
		n = n * -1;
		len += write(1, "-", 1);
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
