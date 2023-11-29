/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexalow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:08:08 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 15:19:29 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	else if (n > 15)
	{
		ft_putnbr_hexalow(n / 16);
		ft_putnbr_hexalow(n % 16);
	}
	return (count);
}
