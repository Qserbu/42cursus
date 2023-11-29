/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:55:39 by qserbu            #+#    #+#             */
/*   Updated: 2023/10/31 12:44:17 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	nb;
	int	j;

	i = 0;
	nb = 1;
	j = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb = nb * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		j = j * 10 + str[i] - 48;
		i++;
	}
	j = j * nb;
	return (j);
}