/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:21:33 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/16 18:20:51 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i] != 0)
	{
		free(tab[i]);
		i++;
	}
	free (tab);
}

static char	*ft_substr_split(char const *s, unsigned int st, size_t l, char **t)
{
	size_t		i;
	size_t		len;
	char		*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - st;
	if (len >= l)
		len = l;
	if (st > ft_strlen(s))
		len = 0;
	str = malloc(sizeof(char) * (len +1));
	if (str == NULL)
	{
		ft_free(t);
		return (NULL);
	}
	i = 0;
	while (i < len)
		str[i++] = s[st++];
	str[i] = '\0';
	return (str);
}

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	if (s[0] != c && s[0] != 0)
		count++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c) && (s[i + 1] != 0))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	if (!s)
		return (0);
	tab = malloc (sizeof(char *) * (ft_count(s, c) + 1));
	if (!tab)
		return (0);
	while (*s)
	{
		if (s[0] == c)
			s++;
		else
		{
			i = 0;
			while (s[i] != c && s[i] != 0)
				i++;
			tab[j++] = ft_substr_split(s, 0, i, tab);
			s = s + i;
		}
	}
	tab[j] = 0;
	return (tab);
}
