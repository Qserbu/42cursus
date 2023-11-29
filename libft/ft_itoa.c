/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:48:32 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:19:27 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_len(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			i;
	long int	j;
	long int	l;

	j = n;
	len = ft_n_len(n);
	i = len;
	l = n;
	str = malloc (sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	if (l < 0)
		l = l * -1;
	str[i] = '\0';
	i = i - 1;
	while (i >= 0)
	{
		str[i--] = l % 10 + '0';
		l = l / 10;
	}
	if (j < 0)
		str[0] = '-';
	return (str);
}
