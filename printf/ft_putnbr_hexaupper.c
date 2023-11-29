/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexaupper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:02:28 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 18:50:42 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putnbr_hexa(long long int n)
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
		count += ft_putnbr_hexa(n / 16);
		count += ft_putnbr_hexa(n % 16);
	}
	return (count);
}
