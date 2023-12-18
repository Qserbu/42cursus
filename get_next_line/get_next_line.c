/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:28:10 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/29 19:28:15 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_calloc(size_t len)
{
	char	*src;
	size_t	i;

	i = 0;
	src = malloc(len);
	if (!src)
		return (NULL);
	while (i < len)
	{
		src[i] = 0;
		i++;
	}
	return (src);
}

static char	*ft_join(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	str = malloc (sizeof (char) * (i + k + 1));
	if (!str)
		return (0);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
		str[i++] = s2[k++];
	str[i] = '\0';
	free (s1);
	return (str);
}

bool	ft_end_line(char *line, char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '\n')
		{
			buffer[j++] = line[++i];
			buffer[j] = '\0';
			if (line[i] == '\0')
				return (true);
			line[i] = '\0';
			while (line[++i] != '\0')
			{
				buffer[j] = line[i];
				j++;
			}
			buffer[j] = '\0';
			return (true);
		}
		i++;
	}
	return (false);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			read_len;

	read_len = 1;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	line = ft_calloc(1);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE + 1);
	else
		line = ft_join(line, buffer);
	while (read_len > 0 && !ft_end_line(line, buffer))
	{
		read_len = read (fd, buffer, BUFFER_SIZE);
		if (read_len < 0)
		{
			free (line);
			return (NULL);
		}
		buffer[read_len] = '\0';
		line = ft_join(line, buffer);
	}
	if (!line[0] && read_len == 0)
	{
		free (line);
		free (buffer);
		buffer = NULL;
		return (NULL);
	}
	return (line);
}
