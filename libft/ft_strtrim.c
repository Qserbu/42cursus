/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 02:09:54 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:21:50 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0 && s1[i] != 0)
		i++;
	while (ft_strchr(set, s1[j - 1]) != 0 && j > i)
		j--;
	len = j - i;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	len = 0;
	while (i < j)
	{
		str[len] = s1[i];
		i++;
		len++;
	}
	return (str);
}
