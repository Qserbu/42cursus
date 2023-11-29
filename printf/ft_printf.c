/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:36:55 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 18:48:37 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>

static int	ft_percent(const char *str, va_list ap)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str[i] == 'c')
		len += ft_putchar(va_arg(ap, int));
	if (str[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	if (str[i] == 'p')
		len += ft_pointer(va_arg(ap, void *));
	if (str[i] == 'd')
		len += ft_putnbr_base(va_arg(ap, int));
	if (str[i] == 'i')
		len += ft_putnbr_base(va_arg(ap, int));
	if (str[i] == 'u')
		len += ft_putnbr_pos(va_arg(ap, unsigned int));
	if (str[i] == 'x')
		len += ft_putnbr_hexalow(va_arg(ap, unsigned int));
	if (str[i] == 'X')
		len += ft_putnbr_hexa(va_arg(ap, unsigned int));
	if (str[i] == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			i;
	int			len;

	i = 0;
	len = 0;
	va_start (ap, s);
	if (!s)
		return (-1);
	while (s[i] != '\0')
	{
		if (i == '%')
		{
			len += ft_percent(&s[i + 1], ap);
			i++;
		}
		else
			len += write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	return (len);
}

int main ()
{
	printf("%X\n", ft_putnbr_hexa(50));
	ft_printf("%X\n", ft_putnbr_hexa(50));
}
