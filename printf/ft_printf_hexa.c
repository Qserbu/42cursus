/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 20:47:11 by qserbu            #+#    #+#             */
/*   Updated: 2023/12/22 21:19:10 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexaupper(long long int n)
{
	int		count;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	count = 0;
	if (n < 16)
	{
		count += write (1, &hexa[n], 1);
	}
	else
	{
		count += ft_putnbr_hexaupper(n / 16);
		count += ft_putnbr_hexaupper(n % 16);
	}
	return (count);
}

int	ft_putnbr_hexalow(long long int n)
{
	int		count;
	char	*hexalower;

	hexalower = "0123456789abcdef";
	count = 0;
	if (n < 16)
	{
		count += write (1, &hexalower[n], 1);
	}
	else
	{
		count += ft_putnbr_hexalow(n / 16);
		count += ft_putnbr_hexalow(n % 16);
	}
	return (count);
}

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
	len = ft_putstr("0x");
	len += ft_putnbr_hexalow(nbr);
	return (len);
}
