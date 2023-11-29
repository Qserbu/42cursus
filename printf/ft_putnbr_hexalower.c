/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexalower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:43:33 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/22 17:02:43 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write (1, &hexa[n], 1);
}

void	ft_putnbr_hexalower(int n)
{
	if (n > 15)
	{
		ft_putnbr_hexalower(n / 16);
	}
	ft_hexa(n % 16);
}

int	main ()
{
	ft_putnbr_hexalower(26);
	return (0);
}